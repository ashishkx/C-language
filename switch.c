#include <stdio.h>

int main()
{

int choice, i, fact=1, num;

printf("Select:\n1. Factorial\n	2. Odd or Ever\n3. Prime\n 4. Exit\n");
scanf("%d", &choice);

switch(choice)
{

case 1: printf("Factorial\nEnter any integer\n");
	scanf("%d", &i);
	for(num=1;num<=i; num++)
{
	fact = fact * num;
};
	printf("The factorial is %d", fact);
	break;
case 2:printf("Odd or Even\n	Enter any number\n");
	scanf("%d", &i);
	i = i%2;
	if (i=0)
		{
		printf("Number is even\n");
		}
	else
		{
		printf("Number is odd\n");
		};
	break;
		
case 3: printf("Prime Or Composite\nEnter any number\n");
	scanf("%d", &i);
	for(num = i-1; num>2; num--)
		{
		if ((i%num==0) && (i!= 1))
			{ printf("Composite\n");
				break;
			}
		else {
		if(i==1)
			printf("Prime\n");
			}
		break;
	};
	
case 4: break; 
}

return(0);

}