#include<bits/stdc++.h>
using namespace std;
string a,b;
int ans[1000010];
int main(){
	cin>>a>>b;
	int i = a.length()-1,j=b.length()-1,cnt = 1,t = 0;//���泤�� 
	while(i>=0&&j>=0){//˫ָ���㷨 
		t=ans[cnt]+a[i--]+b[j--]-'0'-'0';//���㣨������λ�ˣ� 
		ans[cnt++]=t%10;//��Ϊ��Ϊ�Ѿ�OK�ˣ�����ֱ�Ӱ����滻 
		ans[cnt]=t/10;//��λ 
	}
	while(i>=0)t=ans[cnt]+a[i--]-'0',ans[cnt++]=t%10,ans[cnt]=t/10;//��û�м���ļ��� 
	while(j>=0)t=ans[cnt]+b[j--]-'0',ans[cnt++]=t%10,ans[cnt]=t/10;//��û�м���ļ��ϣ�ҲҪ���ǽ�λ����������9999999+111111����� 
	if(!ans[cnt])cnt--;//�ж�cnt��û�ж�ӣ���Ϊ��λ�Ѿ�OK�� 
	for(i=cnt;i>=1;i--)cout<<ans[i];//��ת��� 
}
