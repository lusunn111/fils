#include<bits/stdc++.h>
#define For(i,l,r) for(int i = l;i<=r;i++)
using namespace std;
int q[1010][1010],m,n,k,p;//m列，n行 
int x1,x2,y1,y2;
int main(){
	cin>>n>>m>>p;
	For(i,1,n)//从一看是不需要判断边界 
	For(j,1,m){cin>>k;q[i][j]=q[i-1][j]+q[i][j-1]-q[i-1][j-1]+k;}//计算二维前缀和 
	For(i,1,p){
	cin>>x1>>y1>>x2>>y2;
	cout<<(q[x2][y2]+q[x1-1][y1-1]-q[x1-1][y2]-q[x2][y1-1])<<endl;}//计算区间前缀和。 
} 
