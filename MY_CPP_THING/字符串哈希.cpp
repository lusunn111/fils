#include<bits/stdc++.h>
#define N 100010
#define q 133  //����ֵ����Ϊ 133���Ƶ����֡� 
#define ULL unsigned long long  //����ȡģ��ֱ��ȡ������ 
#define For(i,l,r) for(int i = l;i<=r;i++)
using namespace std; 
ULL p[N],h[N];
int m,n; 
char a[N];
ULL geth(int l,int r){
	return h[r]-h[l-1]*p[r-l+1];//������lowbit���� 
}
int main(){
	cin>>n>>m;
	cin>>a+1;//�ַ����±��1��ʼ
	p[0]=1;//��ʼ��0�η� 
	For(i,1,n){
		h[i]=h[i-1]*q+a[i];//����ǰ׺��ϣ 
		p[i]=p[i-1]*q;//�η��õ����ټӶ��� 
	} 
	int l1,r1,l2,r2;
	For(i,1,m){
		cin>>l1>>r1>>l2>>r2;
		if(geth(l1,r1)==geth(l2,r2))cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	//����kmp 
}
