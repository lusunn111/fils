#include<bits/stdc++.h>
#define For(i,l,r) for(int i = l;i<=r;i++)
using namespace std;
int q[100010],n;
void quick_sort(int l,int r){//���� 
	if(l>=r)return;//�жϽ��� 
	int i=l-1,j=r+1,x=q[l+r>>1];//�涨ֵ 
	while(i<j){
		do i++;while(q[i]<x);//˫ָ����� 
		do j--;while(q[j]>x);
		if(i<j)swap(q[i],q[j]);
	}
	quick_sort(l,j);quick_sort(j+1,r);//�������� 
}
int main(){
	cin>>n;
	For(i,1,n)cin>>q[i];
	quick_sort(1,n);
	For(i,1,n)cout<<q[i]<<" ";
}
