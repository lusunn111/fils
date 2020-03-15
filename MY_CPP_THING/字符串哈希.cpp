#include<bits/stdc++.h>
#define N 100010
#define q 133  //经验值幺作为 133进制的数字。 
#define ULL unsigned long long  //避免取模，直接取溢出结果 
#define For(i,l,r) for(int i = l;i<=r;i++)
using namespace std; 
ULL p[N],h[N];
int m,n; 
char a[N];
ULL geth(int l,int r){
	return h[r]-h[l-1]*p[r-l+1];//类似于lowbit操作 
}
int main(){
	cin>>n>>m;
	cin>>a+1;//字符串下标从1开始
	p[0]=1;//初始化0次方 
	For(i,1,n){
		h[i]=h[i-1]*q+a[i];//计算前缀哈希 
		p[i]=p[i-1]*q;//次方用到多少加多少 
	} 
	int l1,r1,l2,r2;
	For(i,1,m){
		cin>>l1>>r1>>l2>>r2;
		if(geth(l1,r1)==geth(l2,r2))cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	//媲美kmp 
}
