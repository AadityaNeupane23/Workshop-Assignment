#include<stdio.h>
void main()
{
    int x,y,*a,*b,temp;
    printf("entter two number=\n");
    scanf("%d%d",&x,&y);
    printf("before swap = x=%d and y=%d",x,y);
    a=&x; b=&y;
    temp=*b;
    *b=*a;
    *a=temp;
    printf("after swap x=%d y=%d",x,y);
}