#include<stdio.h>
int perfect(int n)
{
    int count=0;
    for(int i=1;i<n;i++)
        if(n%i==0) count +=i;
    if(count==n) return 1;
    return 0;
}
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        if(perfect(i)) s +=i;
    printf("%d",s);
    return 0;
}
