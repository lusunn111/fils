#include<bits/stdc++.h>
#define N 100010
using namespace std;
struct sta{
	int tt = 0;int q[N];q[0]=-1;
	void push(x){q[++tt]=x;}
	bool empty(){return tt==0?1:0;}
	void pop(){if(!empty())tt--;}
	int top(){return q[tt];}
}; 
int n;sta qu;
int x;
int main(){
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>x;
		while(!qu.empty()&&qu.top()>=x)qu.pop();
		cout<<qu.top();
		qu.push(x);
	}
}
