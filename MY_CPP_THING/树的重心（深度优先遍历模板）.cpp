#include<bits/stdc++.h>
#define N 200010
#define For(i,l,r) for(int i = l;i<=r;i++)
using namespace std;//����ģ�� 
int h[N],e[N],ne[N],idx=1;
int n,ans=N;
bool st[N];
void add(int a,int b){e[idx]=b,ne[idx]=h[a],h[a]=idx++;}//ͼ�ۻ���ģ�� 
int dfs(int u){
	st[u]=true;//�����������ѷ��ʵ��б� 
	int sum=1,res = 0;//��Ϊ�Լ�Ҳ��һ���㣬����sum��ʼ��Ϊ1 
	for(int i = h[u];i!=-1;i=ne[i]){//��ʼ��i=�ڽӱ��ͷ��i�����ڱ�λ��i=��һ����� 
		int j = e[i];//��λ��һ����ı�� 
		if(!st[j]){
			int s = dfs(j);//ͳ��s�ĸ��� 
			res = max(res,s);//�����ĵ����ֵ 
			sum+=s; //�����Ľڵ��� 
		}
	}
	res = max(res,n-sum);//�жϱ������ĵ����ֵ 
	ans = min(ans,res);//���´� 
	return sum;//���ر����Ľڵ����� 
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);//�����Ż� 
	memset(h,-1,sizeof h);//��ʼ�����е���ڽӱ�βΪ-1 
	cin>>n;
	int a,b;
	For(i,1,n){cin>>a>>b;add(a,b);add(b,a);}//����ͼ�൱��������֮��������·�� 
	dfs(1);//���� 
	cout<<ans;
}
