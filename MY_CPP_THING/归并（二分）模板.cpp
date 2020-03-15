#include<bits/stdc++.h>
#define For(i,l,r) for(int i = l;i<=r;i++)
using namespace std;
int q[1000010],a[1000010],n;
void merge_sort_1(int l,int r){
	if(l>=r)return;//判断边界 
	int mid = (l+r)>>1;//设置重点 
	merge_sort_1(l,mid);merge_sort_1(mid+1,r);
	int i = l,j = mid+1,cnt = l;
	while(i<=mid&&j<=r){//双指针算法应用 
		if(q[i]<=q[j])a[cnt++]=q[i++];//这样一个一个比较有利于把题目塞入 
		else a[cnt++]=q[j++];
	}
	while(i<=mid)a[cnt++]=q[i++];//补全 
	while(j<=r)a[cnt++]=q[j++];
	For(i,l,r)q[i]=a[i];
}
void merge_sort_2(int l,int r){
	if(l>=r)return;//判断边界
	int mid =(l+r)>>1;
	merge_sort_2(l,mid);merge_sort_2(mid+1,r);
	int i,j,cnt;//必须设置到外部，因为会一直使用 
	for( i=l,j=mid+1,cnt = l;i<=mid;i++){
		for(;q[j]<=q[i]&&j<=r;j++)a[cnt++]=q[j];//不利于题目的带入 
		 a[cnt++]=q[i];
	}
	for(;j<=r;j++)a[cnt++]=q[j];
	for(i = l;i<=r;i++)q[i]=a[i];
} 
int main(){
	cin>>n;
	For(i,1,n)cin>>q[i];
	merge_sort_2(1,n);
	For(i,1,n)cout<<q[i]<<" "; 
} 
