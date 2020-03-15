#include<bits/stdc++.h>
#define N 100010
#define srand srand(time(0))//按秩合并改成随机化处理 
#define rand rand()%2
using namespace std;
int f[N];
int fa(int x){
	if(f[x]!=x)return f[x]=fa(f[x]);//如果他不等于自己证明这不是父节点，查找父节点，并路径压缩 
	return f[x];
}
int n,m;
int main(){ 
	cin>>n>>m;
	srand;
	for(int i = 1;i<=n;i++)f[i]=i;
	char a;int l,r;
	while(m--){
		cin>>a>>l>>r;
		if(a=='M'){
			if(rand)f[fa(l)]=f[fa(r)];//随机化处理 加入size[*]+=size[**]注意不要等合并完再找父节点。 
			else f[fa(r)]=f[fa(l)];
		}
		else {
			if(fa(l)==fa(r))puts("Yes");
			else puts("No");
		}
	}
	 
}

