#include<bits/stdc++.h>
#define For(i,l,r) for(int i = l;i<= r;i++)
using namespace std;
int q[100010],n,m,l,r;
int main(){
	cin>>n>>m;
	For(i,1,n){
		cin>>l;
		q[i]=q[i-1]+l;//��Ϊ��1��ʼ���Բ���Ҫ���ǽ��ޣ�ÿ������ֱ���ۼӡ� 
	} 
	For(i,1,m){
		cin>>l>>r;
		cout<<(q[r]-q[l-1]);//q[r]=q[r]+q[r-1]+`````+q[1];������r��l������ͣ���Ҫ��r-l��ǰһ������Ȼ����ֶ��������� 
	}
}
