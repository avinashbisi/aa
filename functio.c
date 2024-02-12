#include<stdio.h>
int main()
{
add();
even();
return 0;
}
    add()
    {
        int a,b,c;
        printf("ENTER TWO NUMBERS");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("sum is %d",c);
    }
        even()
        {
            int a;
            printf("enter a number");
            scanf("%d",&a);
            if(a%2==0)
            printf("even");
        else
        printf("odd");
return 0;
        }
