#include<bits/stdc++.h>
#define NULL 0x3f3f3f3f
#define N 300003		//�Ȳ�������3����ĵ�һ������������ֵ
using namespace std;
int h[N];
int find(int x){//���ҵ�һ��é�ӣ����ߵ�һ�����ҵ������� 
	int k = (x%N+N)%N;
	while(h[k]!=NULL&&h[k]!=x){
		k++;
		if(k==N-1)k=0;
	}
	return k;
} 
int n;char a;int x;
int main(){
	memset(h,0x3f,sizeof h);//4λ��ÿһλ�����0x3f 
	cin>>n;
	while(n--){
		cin>>a>>x;
		if(a=='I')h[find(x)]=x;
		else {if(h[find(x)]!=NULL)puts("Yes");else puts("No");}
		} 
}
