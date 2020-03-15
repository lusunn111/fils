#include<bits/stdc++.h>
#define For(i,l,r) for(int i = l;i<= r;i++)
using namespace std;
int q[100010],n,m,l,r;
int main(){
	cin>>n>>m;
	For(i,1,n){
		cin>>l;
		q[i]=q[i-1]+l;//因为从1开始所以不需要考虑界限，每次输入直接累加。 
	} 
	For(i,1,m){
		cin>>l>>r;
		cout<<(q[r]-q[l-1]);//q[r]=q[r]+q[r-1]+`````+q[1];所以求r到l的区间和，需要用r-l的前一个，不然会出现多减的情况。 
	}
}
