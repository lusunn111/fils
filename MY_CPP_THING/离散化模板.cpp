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
	For(i,1,n){//存储操作并把点保存。 
		int x,c;
		cin>>x>>c;
		add[++addsi].fir=x;add[addsi].sec=c;
		all[++allsi]=x;
	}
	For(i,1,m){//存储查询的点 
		int l,r;
		cin>>l>>r;
		que[++quesi].fir=l;que[quesi].sec=r;
		all[++allsi]=l;all[++allsi]=r;
	}
	sort(all+1,all+allsi+1);//排序 
    allsi=unique(all+1,all+allsi+1)-(all+1);//去重并获取最后一个数的下标 
	For(i,1,n){//进行操作。【对离散化后的数组】 
		int x = lower_bound(all+1,all+allsi+1,add[i].fir)-all;
		q[x]+=add[i].sec;
	}
	For(i,1,allsi){//计算前缀和 
		q[i]+=q[i-1];
	}
	For(i,1,m){//查找离散化后的位置，输出答案 
		int l,r;
		l = lower_bound(all+1,all+allsi+1,que[i].fir)-all;
		r = lower_bound(all+1,all+allsi+1,que[i].sec)-all;
		cout<<q[r]-q[l-1]<<endl;
	}
}
