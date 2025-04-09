#include<stdio.h>

int main()
{
   int i,j,m=0,n;
   scanf("%d",&n);
   int a[100];
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       m=m>a[i]?m:a[i];
   }
   while(m>0)
   {
       for(i=0;i<n;i++)
       {
           if(a[i]==m)
           {
               a[i]--;
               printf(" **");
           }
           else printf("   ");
       }
       m--;
       printf("\n");
   }
    return 0;
}
