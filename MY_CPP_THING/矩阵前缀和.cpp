#include<bits/stdc++.h>
#define For(i,l,r) for(int i = l;i<=r;i++)
using namespace std;
int q[1010][1010],m,n,k,p;//m�У�n�� 
int x1,x2,y1,y2;
int main(){
	cin>>n>>m>>p;
	For(i,1,n)//��һ���ǲ���Ҫ�жϱ߽� 
	For(j,1,m){cin>>k;q[i][j]=q[i-1][j]+q[i][j-1]-q[i-1][j-1]+k;}//�����άǰ׺�� 
	For(i,1,p){
	cin>>x1>>y1>>x2>>y2;
	cout<<(q[x2][y2]+q[x1-1][y1-1]-q[x1-1][y2]-q[x2][y1-1])<<endl;}//��������ǰ׺�͡� 
} 
