#include <stdio.h>
int main()
{
    int num,ans;
    printf("Input number  :  ");
    scanf("%d",&num);
    ans=sum(num);
    printf("Output number  :  %d\n",ans);
    return 0;
}
int sum(int num)
{
    if(num!=0)
    {
        return(num%10+sum(num/10));
    }
    else
    {
       return 0;
    }
}
