#include<bits/stdc++.h>
#define N 100010
#define For(i,l,r) for(int i = l;i<=r;i++)
using namespace std;
int q[N],num[N],n;
int sum,ans;
int main(){
	cin>>n;
	For(i,1,n)cin>>q[i];
	int i=0,j=0;//��Ϊ��������״̬���ǲ�����i++/j++ �� 
	while(i<n){//��Ϊ�����״̬������i����n��ʱ�򣬽���ѭ��iʵ�ʵ���i+1�ˣ� 
		num[q[++i]]++;//��i��ָ���������뵽�����ж��С� 
		sum++; 
		while(num[q[i]]>1){num[q[++j]]--;sum--;}//ȥ�� 
		ans=max(ans,sum);
	}
	cout<<ans;
} 
/*for (int i = 0, j = 0; i < n; i ++ )
{
    while (j < i && check(i, j)) j ++ ;

    // ����������߼�
}
����������ࣺ
    (1) ����һ�����У�������ָ��ά��һ������
    (2) �����������У�ά��ĳ�ִ��򣬱���鲢�����кϲ������������еĲ���*/ 
 
