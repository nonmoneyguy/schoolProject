#include<stdio.h>
int main(){
    // void swap(int *x, int *y);
    // int a, b,*p,*q;
    // p =& a;
    // q =& b;
    // scanf("%d",&a);
    // scanf("%d",&b);
    // swap(p, q);
    // printf("%d %d",*p,*q);
    // return 0;
    int a[5] = {1, 2, 3, 4};
    for (int i = 0; i < 5;i++)
        printf("%d",a[i]);
    return 0;
}
void swap(int *x,int *y){
    int tep;  
    tep = *x;
    *x = *y;
    *y = tep;
}