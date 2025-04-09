#include<stdio.h>
#include<string.h>
int r1=0,c1=0,c2=0,r2=0,a[5][5],b[5][5],d=0;
void input(int n)
{
    int i,j;
    if(n==1)
    {
        scanf("%d %d",&r1,&c1);
        for(i=0; i<r1; i++)
            {
                for(j=0; j<c1; j++)
                scanf("%d",&a[i][j]);
            }
    }
    else
    {
        scanf("%d %d",&r2,&c2);
        for(i=0; i<r2; i++)
           {
                for(j=0; j<c2; j++)
                scanf("%d",&b[i][j]);
           }
    }
}
void output(int n)
{
    int i,j;
    if(n==1)
    {
        if(r1==0)
            printf("No A matrix found\n");
        else
        {
            for(i=0; i<r1; i++)
            {
                for(j=0; j<c1; j++)
                    printf("%d ",a[i][j]);
                printf("\n");
            }
        }
    }
    else
    {
        if(r2==0)
            printf("No B matrix found\n");
        else
        {
            for(i=0; i<r2; i++)
            {
                for(j=0; j<c2; j++)
                    printf("%d ",b[i][j]);
                printf("\n");
            }
        }
    }
}
void addition()
{
    if(r1==0)
        printf("No A matrix found\n");
    else if(r2==0)
        printf("No B matrix found\n");
    else if(r1!=r2 || c1!=c2)
        printf("Addition not possible\n");
    else
    {
        int i,j;
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
                printf("%d ",b[i][j]+a[i][j]);
            printf("\n");
        }
    }
    printf("\n");
}
void substraction(int n)
{
    int i,j;
    if(r1==0)
        printf("No A matrix found\n");
    else if(r2==0)
        printf("No B matrix found\n");
    else if(r1!=r2 || c1!=c2)
        printf("Substraction not possible\n");
    else if(n==2)
    {
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
                printf("%d ",b[i][j]-a[i][j]);
            printf("\n");
        }
    }
    else
    {
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
                printf("%d ",a[i][j]-b[i][j]);
            printf("\n");
        }
    }
    printf("\n");
}
void multiplication(int n)
{
    int k,i,j,s;
    if(n==1)
    {
        if(r1==0)
            printf("No A matrix found\n");
        else if(r2==0)
            printf("No B matrix found\n");
        else if(c1!=r2)
            printf("Multiplication not possible\n");
        else
        {
           for(i=0;i<c2;i++)
           {
               for(j=0;j<r1;j++)
               {
                   s=0;
                   for(k=0;k<c1;k++)
                     s+=a[j][k]*b[k][i];
                    printf("%d ",s);
               }
               printf("\n");
           }
        }
    }
    else
    {
      if(r1==0)
            printf("No A matrix found\n");
        else if(r2==0)
            printf("No B matrix found\n");
        else if(c2!=r1)
            printf("Multiplication not possible\n");
        else
        {
           for(i=0;i<c1;i++)
           {
               for(j=0;j<r2;j++)
               {
                   s=0;
                   for(k=0;k<c2;k++)
                     s+=b[j][k]*a[k][i];
                    printf("%d ",s);
               }
               printf("\n");
           }
        }
    }
    printf("\n");
}
void division(int n)
{
    int i,j;
    double r;
    if(d==0) printf("Division is not possible\n");
    else if(n==1)
    {
        if(r1==0)
            printf("No A matrix found\n");
        else
        {
            for(i=0; i<r1; i++)
            {
                for(j=0; j<c1; j++)
                    {
                        r=a[i][j]/(d*1.00);
                        printf("%0.2lf ",r);
                    }
                printf("\n");
            }
        }
    }
    else
    {
        if(r2==0)
            printf("No B matrix found\n");
        else
        {
            for(i=0; i<r2; i++)
            {
                for(j=0; j<c2; j++)
                    {
                       r=(b[i][j])/(d*1.00);
                        printf("%0.2lf ",r);
                    }
                printf("\n");
            }
        }
    }
    printf("\n");
}
void transpose(int n)
{
    int i,j;
    if(n==1)
    {
        if(r1==0)
            printf("No A matrix found\n");
        else
        {
            for(i=0; i<c1; i++)
            {
                for(j=0; j<r1; j++)
                    printf("%d ",a[j][i]);
                printf("\n");
            }
        }
    }
    else
    {
        if(r2==0)
            printf("No B matrix found\n");
        else
        {
            for(i=0; i<c2; i++)
            {
                for(j=0; j<r2; j++)
                    printf("%d ",b[j][i]);
                printf("\n");
            }
        }
    }
    printf("\n");
}

int main()
{
   char str[51];
   int i,j,l,u;
   while(1)
   {
       gets(str);
   l=strlen(str);
   i=0,j=0;
   while(j!=l)
   {
       if(str[j]!=' ')
       {
           str[i]=str[j];
           i++;
       }
       j++;
   }
   str[i]='\0';
   if(!strcmpi(str,"ina")) input(1);
   else if(!strcmpi(str,"inb")) input(2);
   else if(!strcmpi(str,"outa")) output(1);
   else if(!strcmpi(str,"outb")) output(2);
   else if(!strcmpi(str,"exit")) break;
    else if(!strcmpi(str,"A+B")) addition();
    else if(!strcmpi(str,"b+a")) addition();
    else if(!strcmpi(str,"A-B")) substraction(1);
    else if(!strcmpi(str,"B-A")) substraction(2);
    else if(!strcmpi(str,"A*B")) multiplication(1);
    else if(!strcmpi(str,"B*A")) multiplication(2);
    else if(!strcmpi(str,"TransA")) transpose(1);
    else if(!strcmpi(str,"TransB")) transpose(2);

      else
        {
         d=(int)(str[2]-'0');
         if(str[0]=='a' || str[0]=='A') division(1);
         if(str[0]=='b'|| str[0]=='B') division(2);
         }

    }
    return 0;
}
