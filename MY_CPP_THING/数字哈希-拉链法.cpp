#include<bits/stdc++.h>
#define N 100003 //操作次数是100000，最好取大于100000的第一个质数，这样冲突最小。
using namespace std;
int h[N],e[N],ne[N],idx;
void ins(int x){
	int k = (x%N+N)%N;
	e[idx]=x;//头插 
	ne[idx]=h[k];
	h[k]=idx++;
}
bool find(int x){
	int k = (x%N+N)%N;
	for(int i = h[k];i!=-1;i=ne[i]){//从头找 
		if(e[i]==x)return 1;
	}
	return 0;
}
char a;int x;int n;
int main(){
	memset(h,-1,sizeof h);//memsets是对每一位进行操作，-1=11111111 
	cin>>n;
	while(n--){
		cin>>a>>x;
		if(a=='I')ins(x);
		else{if(find(x))puts("Yes");else puts("No");}//puts=输出+回车 
	}
} 
