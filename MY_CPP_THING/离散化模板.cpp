#include<bits/stdc++.h>
#define N 300010
#define For(i,l,r) for(int i = l;i<=r;i++)
using namespace std;
int all[N],allsi;int q[N];
int n,m;
struct node{
	int fir;
	int sec;
};
node add[N],que[N];int addsi,quesi;
int main(){
	cin>>n>>m;
	For(i,1,n){//�洢�������ѵ㱣�档 
		int x,c;
		cin>>x>>c;
		add[++addsi].fir=x;add[addsi].sec=c;
		all[++allsi]=x;
	}
	For(i,1,m){//�洢��ѯ�ĵ� 
		int l,r;
		cin>>l>>r;
		que[++quesi].fir=l;que[quesi].sec=r;
		all[++allsi]=l;all[++allsi]=r;
	}
	sort(all+1,all+allsi+1);//���� 
    allsi=unique(all+1,all+allsi+1)-(all+1);//ȥ�ز���ȡ���һ�������±� 
	For(i,1,n){//���в�����������ɢ��������顿 
		int x = lower_bound(all+1,all+allsi+1,add[i].fir)-all;
		q[x]+=add[i].sec;
	}
	For(i,1,allsi){//����ǰ׺�� 
		q[i]+=q[i-1];
	}
	For(i,1,m){//������ɢ�����λ�ã������ 
		int l,r;
		l = lower_bound(all+1,all+allsi+1,que[i].fir)-all;
		r = lower_bound(all+1,all+allsi+1,que[i].sec)-all;
		cout<<q[r]-q[l-1]<<endl;
	}
}
