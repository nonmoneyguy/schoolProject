/*编程实现如下功能：
（1）	根据输入的一系列整数，以0标志结束，用头插法建立单链表，并输出单链表中各元素值，观察输入的内容与输出的内容是否一致。
（2）在单链表的第i个元素之前插入一个值为x的元素，并输出插入后的单链表中各元素值。
（3）删除单链表中第i个元素，并输出删除后的单链表中各元素值。
（4）在单链表中查找第i个元素，如果查找成功，则显示该元素的值，否则显示该元素“不存在”。
结果如下：12 23 34 56 676 0
当前链表元素为：676 56 34 23 12
2
200
当前链表元素为：676 200 56 34 23 12
2
当前链表元素为：676 56 34 23 12
2
56*/
#include <stdio.h>
#include <stdlib.h>

//链表
typedef struct LNode
{
    int data;
    struct LNode *next;
} LNode, *LinkList;

//入口函数
int main()
{
    //第一题
    LinkList List_HeadInsert(LinkList & L);
    void Show(LinkList t);
    LinkList L;
    List_HeadInsert(L);
    Show(L);

    //第二题
    LinkList Insert_Node(LinkList & L, int k, int x);
    int k, x;
    scanf("%d", &k);
    scanf("%d", &x);
    Insert_Node(L, k, x);
    Show(L);

    //第三题
    LinkList Remove_Node(LinkList & L, int j);
    int j;
    scanf("%d", &j);
    Remove_Node(L, j);
    Show(L);

    //第四题
    LNode *GetElem(LinkList L, int i);
    int i;
    scanf("%d", &i);
    printf("%d", GetElem(L, i)->data);

    return 0;
}

//函数1：头插法建立链表
LinkList List_HeadInsert(LinkList &L)
{
    LNode *s;
    int x;
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    scanf("%d", &x);
    while (x != 0)
    {
        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d", &x);
    }
    return L;
}

//函数2：插入结点
LinkList Insert_Node(LinkList &L, int k, int x)
{
    LNode *GetElem(LinkList L, int i);
    LNode *s, *p;
    p = GetElem(L, k - 1);
    s = (LNode *)malloc(sizeof(LNode));
    s->data = x;
    s->next = p->next;
    p->next = s;
    return L;
}

//函数3：删除结点
LinkList Remove_Node(LinkList &L, int j)
{
    LNode *GetElem(LinkList L, int i);
    LNode *p, *q;
    p = GetElem(L, j - 1);
    q = p->next;
    p->next = q->next;
    free(q);
    return L;
}

//函数4：按序号查找结点值
LNode *GetElem(LinkList L, int i)
{
    int j = 1;
    LNode *p = L->next;
    if (i == 0)
        return L;
    if (i < 1)
        return NULL;
    while (p && j < i)
    {
        p = p->next;
        j++;
    }
    return p;
}

//ps：函数5：显示链表
void Show(LinkList t)
{
    printf("当前链表元素为：");
    t = t->next;
    while (t != NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");
}