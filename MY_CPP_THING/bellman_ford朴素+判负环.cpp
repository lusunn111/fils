int n,m;//n��ʾ������m��ʾ����
int disk[N];//disk[x]�洢1��x�����·����
struct Edge{
    int a,b,w;
};
Edge edges[M];
bool inf[N];
int bellman_ford(int st){
        memset(disk,0x3f,sizeof dist);
        dist[st]=0;
        // �����n�ε�����Ȼ���ɳ����ǲ���ʽ����˵������һ��������n+1�����·�����ɳ���ԭ��·�������ٴ���������ͬ�ĵ㣬˵��ͼ�д��ڸ�Ȩ��·��
        for(int i = 0;i<n;i++){
            int a=edges[j].a,b=egges[j].b,w=edges[j].w;//�����ɳڲ������о��Ϻ���Ͻ�˹������������о������ˣ�����Ŀ�ľ��������еı߱���n*m�顣����Ҫ֤����
            if(dist[b]>dist[a]+w)dist[b]=dist[a]+w;
        }
        if(dist[N]>0x3f3f3f3f / 2)return -1;//���ﲻ�˵ĵ�Ҳ���ܾ������ɳڲ��������ܲ�����������ν���������ˡ�
        return dist[n];
}
int bellman_ford_influnce(int st){
        for(int i = 0;i<n;i++){
            int a=edges[j].a,b=egges[j].b,w=edges[j].w;
            if(dist[b]>dist[a]+w)dist[b]=true;//����ֱ�С�ˣ�֤����������Ӱ����
        }
}
