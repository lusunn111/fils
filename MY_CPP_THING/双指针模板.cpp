#include<bits/stdc++.h>
#define N 100010
#define For(i,l,r) for(int i = l;i<=r;i++)
using namespace std;
int q[N],num[N],n;
int sum,ans;
int main(){
	cin>>n;
	For(i,1,n)cin>>q[i];
	int i=0,j=0;//因为接下来的状态我们不能用i++/j++ ； 
	while(i<n){//以为下面的状态，所以i等于n的时候，进入循环i实际等于i+1了； 
		num[q[++i]]++;//把i所指向的数组加入到数字判断中。 
		sum++; 
		while(num[q[i]]>1){num[q[++j]]--;sum--;}//去重 
		ans=max(ans,sum);
	}
	cout<<ans;
} 
/*for (int i = 0, j = 0; i < n; i ++ )
{
    while (j < i && check(i, j)) j ++ ;

    // 具体问题的逻辑
}
常见问题分类：
    (1) 对于一个序列，用两个指针维护一段区间
    (2) 对于两个序列，维护某种次序，比如归并排序中合并两个有序序列的操作*/ 
 
