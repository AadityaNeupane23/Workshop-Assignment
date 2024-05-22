#include<stdio.h>
int main()
{   
    int i,j,k;
    for(i=1;i<=4;i++)
    {
       for(j=3;j>=i;j--)
       {
           printf("\t");
       }
       for(k=1;k<=2*i-1;k++)
       {
           printf("*\t");
       }
     printf("\n");
    }
 for(i=3;i>=1;i--)
    {
       for(j=3;j>=i;j--)
       {
           printf("\t");
       }
       for(k=1;k<=2*i-1;k++)
       {
           printf("*\t");
       }
     printf("\n");
    }

    return 0;
}