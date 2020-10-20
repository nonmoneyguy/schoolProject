#include <stdio.h>
#include <stdlib.h>
typedef int Datatype;
typedef struct linknode
{
    Datatype data;
    struct linknode *next;
} LinkList;
LinkList *InitList()
{
    LinkList *head;
    head = (LinkList *)malloc(sizeof(LinkList));
    head->next = NULL;
    return head;
}
void CreatListH(LinkList *head, int n)
{
    LinkList *s;
    int i;
    printf("请输入%d个整数", n);
    for (i = 0; i < n; i++)
    {
        s = (LinkList *)malloc(sizeof(LinkList));
        scanf("%d", &s->data);
        s->next = head->next;
        head->next = s;
    }
    printf("建立链表成功");
}
void main()
{
    void CreatListH(LinkList * head, int n);
    LinkList *head;
    head = InitList();
    int n;
    char ch1, ch2, a;
    ch1 = 'y';
    while (ch1 == 'y' || ch1 == 'Y')
    {
        scanf("%c", &ch2);
        getchar();
        switch (ch2)
        {
        case '1':
            printf("请输入要建立的链表长度:");
            scanf("%d", &n);
            CreateListH(head, n);
            printf("建立的链表为:\n");
            DispList(head);
            break;

        default:
            printf("输入错误\n");
            break;
        }
    }
}