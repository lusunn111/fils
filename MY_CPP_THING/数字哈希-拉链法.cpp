#include<bits/stdc++.h>
#define N 100003 //����������100000�����ȡ����100000�ĵ�һ��������������ͻ��С��
using namespace std;
int h[N],e[N],ne[N],idx;
void ins(int x){
	int k = (x%N+N)%N;
	e[idx]=x;//ͷ�� 
	ne[idx]=h[k];
	h[k]=idx++;
}
bool find(int x){
	int k = (x%N+N)%N;
	for(int i = h[k];i!=-1;i=ne[i]){//��ͷ�� 
		if(e[i]==x)return 1;
	}
	return 0;
}
char a;int x;int n;
int main(){
	memset(h,-1,sizeof h);//memsets�Ƕ�ÿһλ���в�����-1=11111111 
	cin>>n;
	while(n--){
		cin>>a>>x;
		if(a=='I')ins(x);
		else{if(find(x))puts("Yes");else puts("No");}//puts=���+�س� 
	}
} 
