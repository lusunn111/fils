#include<bits/stdc++.h>
using namespace std;
string a,b;
int ans[1000010];
int main(){
	cin>>a>>b;
	int i = a.length()-1,j=b.length()-1,cnt = 1,t = 0;//保存长度 
	while(i>=0&&j>=0){//双指针算法 
		t=ans[cnt]+a[i--]+b[j--]-'0'-'0';//计算（包括进位了） 
		ans[cnt++]=t%10;//因为今为已经OK了，所以直接把他替换 
		ans[cnt]=t/10;//进位 
	}
	while(i>=0)t=ans[cnt]+a[i--]-'0',ans[cnt++]=t%10,ans[cnt]=t/10;//把没有加完的加上 
	while(j>=0)t=ans[cnt]+b[j--]-'0',ans[cnt++]=t%10,ans[cnt]=t/10;//把没有加完的加上，也要考虑进位，避免那种9999999+111111的情况 
	if(!ans[cnt])cnt--;//判断cnt有没有多加，因为进位已经OK了 
	for(i=cnt;i>=1;i--)cout<<ans[i];//反转输出 
}
