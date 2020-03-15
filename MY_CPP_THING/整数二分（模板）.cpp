#include<bits/stdc++.h>
using namespace std;
int q[1000010],m,n,a; 
int fir(int x){
	int l = 1,r = n,mid;
	while(l<r){
		mid=(l+r)>>1;//将区间分成[l,mid]和[mid+1,r]使用 
		if(q[mid]<x)l=mid+1;
		else r=mid;
	}
	if(q[l]!=x)return -1;
	else return l;
}
int las(int x){ 
	int l = 1,r = n,mid;
	while(l<r){
		mid=(l+r+1)>>1;//将区间分成[l,mid-1]和[mid,r]使用根据情况选择 
		if(q[mid]<=x)l=mid;
		else r=mid-1;
	}
	if(q[r]!=x)return -1;
	else return r;
}
int main(){
	cin>>n>>m;
	for(int i = 1;i<=n;i++)cin>>q[i];
	while(m--){
		cin>>a;
		cout<<fir(a)<<" "<<las(a)<<endl; 
	}
} 
