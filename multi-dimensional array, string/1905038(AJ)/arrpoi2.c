#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,j=0,k,n,l1,l2,l3,q,d;
    char s1[101],s2[101],s3[11];
    gets(s1);
    gets(s2);
    gets(s3);
    l1=strlen(s1);
    l2=strlen(s2);
    l3=strlen(s3);
    n=l1-1;
    while(i!=l1+1)
    {
        q=1;
        if(j+l2>n+1)
            break;
        for(k=0;k<l2;k++)
        {
            if(s1[j+k]!=s2[k])
            {
                q=0;
                break;
            }
        }
        if(q)
        {
            if(l3>l2)
            {
                if(j+l3>100) break;
                else
                {
                  d=l3-l2;
                  for(k=n;k!=j+l2-1;k--)
                        s1[k+d]=s1[k];
                  n+=d;
                }
            }
            for(k=0;k<l3;k++)
            {
                s1[j+k]=s3[k];
            }
            j=j+k-2;

            if(l2>l3)
            {
               d=l2-l3;
              for(k=j+l2;k!=n+1;k++)
                s1[k-d]=s1[k];
                n-=d;
            }

            i = i+l2-1;

        }
        j++;
        i++;
    }

    s1[n+1]='\0';
    printf("%s",s1);
    return 0;
}
