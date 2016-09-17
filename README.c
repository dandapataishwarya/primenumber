# primenumber
#include<stdio.h>
int addNumbers(int n);
void main()
{
    int n;
    printf("Enter a prime number: ");
    scanf("%d", &n);
    printf("Sum = %d",addNumbers(n));
}
int addNumbers(int n)
{ 
  size=n;
    for(int i=0;i<size;i++)
    if(n!=0)
        return n+addNumbers(n-1);
    else
        return n;
}
