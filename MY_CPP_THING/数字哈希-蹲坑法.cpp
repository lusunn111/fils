#include<bits/stdc++.h>
#define NULL 0x3f3f3f3f
#define N 300003		//比操作数的3倍大的第一个质数，经验值
using namespace std;
int h[N];
int find(int x){//查找第一个茅坑，或者第一个查找到的数字 
	int k = (x%N+N)%N;
	while(h[k]!=NULL&&h[k]!=x){
		k++;
		if(k==N-1)k=0;
	}
	return k;
} 
int n;char a;int x;
int main(){
	memset(h,0x3f,sizeof h);//4位，每一位定义成0x3f 
	cin>>n;
	while(n--){
		cin>>a>>x;
		if(a=='I')h[find(x)]=x;
		else {if(h[find(x)]!=NULL)puts("Yes");else puts("No");}
		} 
}
