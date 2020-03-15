#include<bits/stdc++.h>
#define N 10010
#define INF 0x3f3f3f3f
#define For(i,l,r) for(int i = l;i<=r;i++)
using namespace std; 
struct Edge{
	int a,b,w;
};
Edge e[N];
int dist[N],backup[N];
int n,m,k;
int bellman_ford(int u){
	dist[u]=0;
	For(i,1,k){//控制步数。 
		memcpy(backup,dist,sizeof dist);//不能发生串联，只能用上一次迭代的 
		For(j,1,m){
			int a = e[j].a,b=e[j].b,w=e[j].w;
			dist[b]=min(dist[b],backup[a]+w);
		}
	}
	return dist[n]>INF/2?-1:dist[n];
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	memset(dist,0x3f,sizeof dist);
	cin>>n>>m>>k;
	For(i,1,m)cin>>e[i].a>>e[i].b>>e[i].w;
	int t = bellman_ford(1);
	if(t==-1)puts("impossible");
	else cout<<t;
}
