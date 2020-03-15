#include<bits/stdc++.h>
#define N 100010
#define For(i,l,r) for(int i = l;i<=r;i++)
using namespace std;
int h[N],ne[N],e[N],idx;
int d[N];
int n,m;
void add(int a,int b){d[b]++,e[idx]=b,ne[idx]=h[a],h[a]=idx++;}
struct que{
	int qu[N];
	int tt=0,hh = -1;
	void push(int x){qu[++hh]=x;}
	void pop(){tt++;}
	int front(){return qu[tt];}
	bool empty(){return tt>hh?1:0;}
};
que q;
void top(){
	For(i,1,n){if(!d[i])q.push(i);}
	while(!q.empty()){
		int t = q.front();q.pop();
		for(int i = h[t];i!=-1;i=ne[i]){
			int j = e[i];
			d[j]--;
			if(!d[j])q.push(j);
		}
	}
	if(q.tt==n){
		for(int i = 0;i<n;i++)cout<<q.qu[i]<<" ";
	}else cout<<-1;
}

int main(){
	ios::sync_wiht_stdio(0);
	cin.tie(0),cout.tie();
	memset(h,-1,sizeof h);
	cin>>n>>m;int a,b;
	For(i,1,m){cin>>a>>b;add(a,b);}
	top();
} 
