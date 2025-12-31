#include<stdio.h>
int main()
{
    int n,itr;
    scanf("%d",&n);
    int itr;
    itr=1;
    while(itr<=n)
    {
        printf("%d\n",itr++);
    }
return 0;
}




#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int itr;
    itr=1;
    while(itr<=n)
    {
        printf("%d\n",itr);
        itr=itr+1;
    }
return 0;
}



#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int itr;
    itr=1;
    while(itr<=n)
    {
        if(itr%2!=0)
        printf("%d\n",itr);
        itr=itr+1;
    }
return 0;


#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0;
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        if(i%2==0)
        {
            even+=1;
        }
        else
        {
            odd+=1;
        }
        i+=1;
    }
    printf("even=%d\nodd=%d",even,odd);
return 0;
}



output

20
even=10
odd=10


#include<stdio.h>
int main()
{
    int n,i=1;
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }
return 0;
}
output:

10
10
9
8
7
6
5
4
3
2
1


#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long fact =1;
    int i=1;
    while(i<=n)
    {
        fact*=i;
        i+=1;
    }
    printf("factorial of %lld ",fact);
    return 0;
}


#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n; printf("%d\n",i),i++);
    return 0;
}


#include<stdio.h>
int main()
{
    int n,i=1;
    do
    {
        printf("%d",i);
        i+=1;
    }while(i<=n);

    return 0;
}

#include<stdio.h>
int main()
{
    int n;
   scanf("%d",&n);
   int temp=n;
   int fact,sum =0;
   while(n!=0)
   {

       int dig=n%10;
       fact=1;
       for(int i=1;i<=dig;i+=1)
        fact*=i;
       n/=10;
       sum+=fact;
   }
   if(sum==n)
    printf("strong");
   else
    printf("not");
    return 0;
}


