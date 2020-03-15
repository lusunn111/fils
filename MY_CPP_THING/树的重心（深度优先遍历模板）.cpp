#include<bits/stdc++.h>
#define N 200010
#define For(i,l,r) for(int i = l;i<=r;i++)
using namespace std;//基本模板 
int h[N],e[N],ne[N],idx=1;
int n,ans=N;
bool st[N];
void add(int a,int b){e[idx]=b,ne[idx]=h[a],h[a]=idx++;}//图论基本模型 
int dfs(int u){
	st[u]=true;//将这个点加入已访问点列表 
	int sum=1,res = 0;//因为自己也是一个点，所以sum初始化为1 
	for(int i = h[u];i!=-1;i=ne[i]){//初始化i=邻接表表头，i不等于表位，i=下一个表点 
		int j = e[i];//定位下一个点的编号 
		if(!st[j]){
			int s = dfs(j);//统计s的个数 
			res = max(res,s);//本重心的最大值 
			sum+=s; //本树的节点数 
		}
	}
	res = max(res,n-sum);//判断本树重心的最大值 
	ans = min(ans,res);//更新答案 
	return sum;//返回本树的节点数。 
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);//基本优化 
	memset(h,-1,sizeof h);//初始化所有点的邻接表尾为-1 
	cin>>n;
	int a,b;
	For(i,1,n){cin>>a>>b;add(a,b);add(b,a);}//无向图相当于两个点之间有两条路径 
	dfs(1);//深搜 
	cout<<ans;
}
