#include<stdio.h>
int main()
{
    int n,i,k,q,m,p;
    scanf("%d",&n);
    int a[20000],b[20000];
    k=0,m=0;
    for(i=0;i<20000;i++) b[i]=0;
    while(n--)
    {
        scanf("%d",&p);
        q=0;
        for(i=0;i<k;i++)
            if(a[i]==p){
                b[i]++;
                m=(m>b[i])?m:b[i];
                q=1;
            }
        if(q==0){
            a[k]=p;
            b[k]=1;
            m=m>b[k]?m:b[k];
            k++;
        }
        q=0;
      printf("Most frequent number=");
        for(i=0;i<k;i++)
            if(b[i]==m)
               {
                   if(q==0){
                    q=1;
                    printf("%d",a[i]);
                   }
                   else printf(", %d",a[i]);
               }
        printf("\n");
    }
    return 0;
}
