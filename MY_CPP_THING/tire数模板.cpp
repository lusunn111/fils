#include<bits/stdc++.h>
#define N 200010
using namespace std;
int trie[N][26];char a[N];
char ope;int cnt[N],idx,n;
void ins(char a[]){
	int p = 0;
	for(int i = 1;a[i];i++){
		int u = a[i]-'a';
		if(!trie[p][u])trie[p][u]=++idx;
		p=trie[p][u];
	}
	cnt[p]++;
}
void que(char a[]){//Ҳ������char *a ���������ʱ���õ��ǵ�ַ ����ֱ�Ӽ�[]��*ȡ��ַ�������ۡ� 
	int p = 0;
	for(int i = 1;a[i];i++){
		int u = a[i]-'a';
		if(!trie[p][u]){puts("0");return ;}
		p=trie[p][u];
	}
	cout<<cnt[p]<<endl;
}


int main(){
	cin>>n;
	while(n--){
		cin>>ope>>a+1;
		if(ope=='I')ins(a);
		else que(a);
	} 
}
