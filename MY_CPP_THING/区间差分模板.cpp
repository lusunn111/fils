#include<bits/stdc++.h>
#define For(i,l,r) for(int i = l;i<=r;i++)
using namespace std;
int m,n,k;
int x,x1,x2,y1,y2;
int q[1010][1010];
void insert(int x_1,int y_1,int x_2,int y_2,int x_v){
	q[x_1][y_1]+=x_v;q[x_2+1][y_2+1]+=x_v;
	q[x_1][y_2+1]-=x_v;q[x_2+1][y_1]-=x_v;//画图就可以发现此规律，记住差分树会对他右下角的范围进行影响 
} 
int main(){
	cin>>n>>m>>k;
	For(i,1,n)For(j,1,m)cin>>x,insert(i,j,i,j,x);//把需要区间操作的二维数组差分； 
	For(i,1,k)cin>>x1>>y1>>x2>>y2>>x,insert(x1,y1,x2,y2,x);//对差分数组进行区间操作。
	For(i,1,n){For(j,1,m)q[i][j]+=q[i-1][j]+q[i][j-1]-q[i-1][j-1],cout<<q[i][j]<<" ";cout<<endl; }//计算前缀和并输出 
	return 0 ;
}
