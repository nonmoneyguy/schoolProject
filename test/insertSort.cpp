
#include<stdio.h>
#include<stdlib.h>
#define MaxSize 50
typedef struct {
    int data[MaxSize];
    int length;
} SqList;
int main(){
    bool ListInsert(SqList & L, int i, int e);
    SqList list;
    int e = 100;
    int i = 5;
    for (int n = 0; n < 10;n++)
        scanf("%d", &list.data[n]);
    bool flag = ListInsert(list, i, e);
    printf("%c",flag);
    return 0;
}
bool ListInsert(SqList &L,int i,int e){
    if(i < 1 || i > L.length+1 || (L.length >= MaxSize))
        return false;
    for (int j = L.length; j >= i; j--)
        L.data[j] = L.data[j - 1];
    L.data[i - 1] = e;
    L.length++;
    return true;
}

// #include<stdio.h>
// #include<stdlib.h>
// #define InitSize 100
// typedef struct {
//     int *data;
//     int MaxSize,length;
// } SqList;
// int main(){
//     bool ListInsert(SqList & L, int i, int e);
//     SqList list;
//     list.data = (int *)malloc(sizeof(int));
//     int e = 100;
//     int i = 5;
//     list.data = {0};
//     for (int n = 0; n < 10;n++)
//         scanf("%d", &list.data[n]);
//     bool flag = ListInsert(list, i, e);
//     printf("%c",flag);
//     return 0;
// }
// bool ListInsert(SqList &L,int i,int e){
//     if(i < 1 || i > L.length+1 || (L.length >= L.MaxSize))
//         return false;
//     for (int j = L.length; j >= i; j--)
//         L.data[j] = L.data[j - 1];
//     L.data[i - 1] = e;
//     L.length++;
//     return true;
// }