#include<bits/stdc++.h>
#define N 100010
#define INF 0x3f3f3f3f
#define PII pair<int,int>
#define For(i,l,r) for(int i = l;i<=r;i++)
using namespace std;
int h[N],ne[N],e[N],w[N],idx;
int n,m;
bool st[N];int dist[N];
priority_queue<PII,vector<PII>,greater<PII>> q;
void add(int a,int b,int v){e[idx]=b,w[idx]=v,ne[idx]=h[a],h[a]=idx++;}
int dijkstra(int u){
	dist[u]=0;
	q.push({0,u});
	while(!q.empty()){
		PII t = q.top();
		q.pop();
		int ver = t.second,dis = t.first;
		if(st[ver])continue;
		st[ver]=true;
		for(int i = h[ver];i!=-1;i=ne[i]){
			int j = e[i];
			if(dist[j]>dis+w[i])
			dist[j]=dis+w[i];
			q.push({dist[j],j});
		}
	}
	return dist[n]==INF?-1:dist[n];
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	memset(h,-1,sizeof h);
	memset(dist,0x3f,sizeof dist);
	cin>>n>>m;
	int a,b,v;
	For(i,1,m){cin>>a>>b>>v;add(a,b,v);}
	cout<<dijkstra(1);
} 
