/*
vector, �䳤���飬������˼��
    size()  ����Ԫ�ظ���
    empty()  �����Ƿ�Ϊ��
    clear()  ���
    front()/back()
    push_back()/pop_back()
    begin()/end()
    []
    ֧�ֱȽ����㣬���ֵ���

pair<int, int>
    first, ��һ��Ԫ��
    second, �ڶ���Ԫ��
    ֧�ֱȽ����㣬��firstΪ��һ�ؼ��֣���secondΪ�ڶ��ؼ��֣��ֵ���

string���ַ���
    size()/length()  �����ַ�������
    empty()
    clear()
    substr(��ʼ�±꣬(�Ӵ�����))  �����Ӵ�
    c_str()  �����ַ��������ַ��������ʼ��ַ

queue, ����
    size()
    empty()
    push()  ���β����һ��Ԫ��
    front()  ���ض�ͷԪ��
    back()  ���ض�βԪ��
    pop()  ������ͷԪ��

priority_queue, ���ȶ��У�Ĭ���Ǵ����
    push()  ����һ��Ԫ��
    top()  ���ضѶ�Ԫ��
    pop()  �����Ѷ�Ԫ��
    �����С���ѵķ�ʽ��priority_queue<int, vector<int>, greater<int>> q;

stack, ջ
    size()
    empty()
    push()  ��ջ������һ��Ԫ��
    top()  ����ջ��Ԫ��
    pop()  ����ջ��Ԫ��

deque, ˫�˶���
    size()
    empty()
    clear()
    front()/back()
    push_back()/pop_back()
    push_front()/pop_front()
    begin()/end()
    []

set, map, multiset, multimap, ����ƽ��������������������̬ά����������
    size()
    empty()
    clear()
    begin()/end()
    ++, -- ����ǰ���ͺ�̣�ʱ�临�Ӷ� O(logn)

    set/multiset
        insert()  ����һ����
        find()  ����һ����
        count()  ����ĳһ�����ĸ���
        erase()
            (1) ������һ����x��ɾ������x   O(k + logn)
            (2) ����һ����������ɾ�����������
        lower_bound()/upper_bound()
            lower_bound(x)  ���ش��ڵ���x����С�����ĵ�����
            upper_bound(x)  ���ش���x����С�����ĵ�����
    map/multimap
        insert()  ���������һ��pair
        erase()  ����Ĳ�����pair���ߵ�����
        find()
        []  ע��multimap��֧�ִ˲����� ʱ�临�Ӷ��� O(logn)
        lower_bound()/upper_bound()

unordered_set, unordered_map, unordered_multiset, unordered_multimap, ��ϣ��
    ���������ƣ���ɾ�Ĳ��ʱ�临�Ӷ��� O(1)
    ��֧�� lower_bound()/upper_bound()�� ��������++��--

bitset, �Rλ
    bitset<10000> s;
    ~, &, |, ^
    >>, <<
    ==, !=
    []

    count()  �����ж��ٸ�1

    any()  �ж��Ƿ�������һ��1
    none()  �ж��Ƿ�ȫΪ0

    set()  ������λ�ó�1
    set(k, v)  ����kλ���v
    reset()  ������λ���0
    flip()  �ȼ���~
    flip(k) �ѵ�kλȡ��
*/
����y�ܹ���STL�ıʼ�
/*
https://www.cnblogs.com/yinbiao/p/11636405.html
*/ 
������ʦ����ʱ�临�Ӷȷ��� 

/*
https://www.cnblogs.com/yinbiao/p/11636405.html
*/ ������ȷ��ģ��ں�������Ϣ 
