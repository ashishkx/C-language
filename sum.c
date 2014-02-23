#include <stdio.h>

int main()
{

int a, b, d, c=0;
printf("Enter a number\n");
scanf("%d", &a);

for(d=1; a >=1 ; d++)
{
b= a%10;
c = c + b;
a = a/10;
};
printf("%d", c);
return(0);
}
