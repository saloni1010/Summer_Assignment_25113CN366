#include <stdio.h>
int main()
{
    int num,num1,rev=0,rem;
    printf("Enter the number: \n");
    scanf("%d",&num);
    num1=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(num1==rev)
    {
        printf("Palindrome number \n");
    }
    else
    {
        printf("Not a palindrome number \n");
    }
    return 0;
    
}