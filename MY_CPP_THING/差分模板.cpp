#include<bits/stdc++.h>
#define For(i,l,r) for(int i = l;i<=r;i++)
using namespace std;
int n,m,k,q[100010];
int a,b,c;
void insert(int l,int r,int x){q[l]+=x;q[r+1]-=x;}//����ǰ׺�͵Ķ��塣 
int main(){
	cin>>n>>m;
	For(i,1,n)cin>>k,insert(i,i,k);//����Ĺ����൱��һ��һ���Ĳ��롣 
	For(i,1,m)cin>>a>>b>>c,insert(a,b,c);
	For(i,1,n)q[i]+=q[i-1],cout<<q[i]<<" "; //����ǰ׺�ͣ�һ��ɨһ������� 
}
