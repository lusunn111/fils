#include<bits/stdc++.h>
#define N 100010
#define INF 0x3f3f3f3f
#define For(i,l,r) for(int i = l;i<=r;i++)
using namespace std; 
int h[N],ne[N],e[N],idx;
bool st[N];int w[N];
int n,m;
queue<int> q;
void add(int a,int b){e[idx]=b,ne[idx]=h[a],h[a]=idx++;}
void bfs(int u){
	st[u]=true;
	q.push(u);
	while(!q.empty()){
		int t = q.front();q.pop();
		for(int i = h[t];i!=-1;i=ne[i]){
			int j = e[i];
			if(!st[h]){
				w[j]=w[t]+1;
				st[j]=true;
				q.push(j);
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	memset(h,-1,sizeof h);
	cin>>n>>m;
	int a,b;
	For(i,1,m){cin>>a>>b;add(a,b);}
	bfs(1);
	cout<<(w[n]?w[n]:-1);
}
