#include<bits/stdc++.h>//实在是没理解，还是用流氓背诵法背吧。。。。 
using namespace std;
char p[10010],s[100010];int m,n;//定义流氓串和美女串，并定义美女串的长度和流氓串的长度 
int ne[100010];//定义流氓串的计划 
int main(){
	cin>>n>>p+1>>m>>s+1;//输入 
	for(int i = 2,j = 0;i<=n;i++){//i要从2开始，j要从0开始 因为自己和自己比较没有意义。 
		while(j&&p[i]!=p[j+1])j=ne[j];//如果计划没有落空并且没有对上眼，那么实行下一步计划 
		if(p[i]==p[j+1])j++;//如果对上眼了，那么就发展下一步 
		ne[i]=j;//把当前情况的最优计划存下来 
	}
	for(int i = 1,j = 0;i<=m;i++){//i要从1开始 ，j要从0开始，因为这里是要和美女匹配了 
		while(j&&s[i]!=p[j+1])j=ne[j];//如果计划没有落空并且没有对上眼，实行下一步计划 
		if(s[i]==p[j+1])j++;//如果对上眼了，那么发展下一步 
		if(j==n){//如果匹配成功 
			cout<<i-n<<" ";//等什么，该干什么干什么 
			j=ne[j];//看看能不能继续发展 
		}
	}
} 
