#include<bits/stdc++.h>
#define For(i,l,r) for(int i = l;i<=r;i++)
using namespace std;
int n,m,k,q[100010];
int a,b,c;
void insert(int l,int r,int x){q[l]+=x;q[r+1]-=x;}//根据前缀和的定义。 
int main(){
	cin>>n>>m;
	For(i,1,n)cin>>k,insert(i,i,k);//输入的过程相当于一个一个的插入。 
	For(i,1,m)cin>>a>>b>>c,insert(a,b,c);
	For(i,1,n)q[i]+=q[i-1],cout<<q[i]<<" "; //计算前缀和，一边扫一遍输出。 
}
