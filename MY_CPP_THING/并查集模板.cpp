#include<bits/stdc++.h>
#define N 100010
#define srand srand(time(0))//���Ⱥϲ��ĳ���������� 
#define rand rand()%2
using namespace std;
int f[N];
int fa(int x){
	if(f[x]!=x)return f[x]=fa(f[x]);//������������Լ�֤���ⲻ�Ǹ��ڵ㣬���Ҹ��ڵ㣬��·��ѹ�� 
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
			if(rand)f[fa(l)]=f[fa(r)];//��������� ����size[*]+=size[**]ע�ⲻҪ�Ⱥϲ������Ҹ��ڵ㡣 
			else f[fa(r)]=f[fa(l)];
		}
		else {
			if(fa(l)==fa(r))puts("Yes");
			else puts("No");
		}
	}
	 
}

