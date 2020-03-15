int n,m;//n表示点数，m表示边数
int disk[N];//disk[x]存储1到x的最短路距离
struct Edge{
    int a,b,w;
};
Edge edges[M];
bool inf[N];
int bellman_ford(int st){
        memset(disk,0x3f,sizeof dist);
        dist[st]=0;
        // 如果第n次迭代仍然会松弛三角不等式，就说明存在一条长度是n+1的最短路径，由抽屉原理，路径中至少存在两个相同的点，说明图中存在负权回路。
        for(int i = 0;i<n;i++){
            int a=edges[j].a,b=egges[j].b,w=edges[j].w;//进行松弛操作，感觉上很想迪杰斯特拉，有这个感觉就行了，他的目的就是让所有的边便利n*m遍。不需要证明。
            if(dist[b]>dist[a]+w)dist[b]=dist[a]+w;
        }
        if(dist[N]>0x3f3f3f3f / 2)return -1;//到达不了的点也可能经过了松弛操作，可能并不是我们所谓的正无穷了。
        return dist[n];
}
int bellman_ford_influnce(int st){
        for(int i = 0;i<n;i++){
            int a=edges[j].a,b=egges[j].b,w=edges[j].w;
            if(dist[b]>dist[a]+w)dist[b]=true;//如果又变小了，证明他被负环影响了
        }
}
