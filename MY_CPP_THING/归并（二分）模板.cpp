#include<bits/stdc++.h>
#define For(i,l,r) for(int i = l;i<=r;i++)
using namespace std;
int q[1000010],a[1000010],n;
void merge_sort_1(int l,int r){
	if(l>=r)return;//�жϱ߽� 
	int mid = (l+r)>>1;//�����ص� 
	merge_sort_1(l,mid);merge_sort_1(mid+1,r);
	int i = l,j = mid+1,cnt = l;
	while(i<=mid&&j<=r){//˫ָ���㷨Ӧ�� 
		if(q[i]<=q[j])a[cnt++]=q[i++];//����һ��һ���Ƚ������ڰ���Ŀ���� 
		else a[cnt++]=q[j++];
	}
	while(i<=mid)a[cnt++]=q[i++];//��ȫ 
	while(j<=r)a[cnt++]=q[j++];
	For(i,l,r)q[i]=a[i];
}
void merge_sort_2(int l,int r){
	if(l>=r)return;//�жϱ߽�
	int mid =(l+r)>>1;
	merge_sort_2(l,mid);merge_sort_2(mid+1,r);
	int i,j,cnt;//�������õ��ⲿ����Ϊ��һֱʹ�� 
	for( i=l,j=mid+1,cnt = l;i<=mid;i++){
		for(;q[j]<=q[i]&&j<=r;j++)a[cnt++]=q[j];//��������Ŀ�Ĵ��� 
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
