#include <stdio.h>
void main(void)
{
	/* EX8 : Calculator to Add , Sub , Mul , and Div using Switch */
	/*
	char Operator ;
	float N1 , N2 ;
	
	printf("Enter operator either + or - or * or / : ");
	scanf("%c",&Operator);
	printf("Enter two numbers: ");
	scanf("%f%f",&N1,&N2);
	switch(Operator)
	{
		case '+' :
			printf("%.3f + %.3f = %.3f",N1,N2,N1+N2);
			break;
		case '-' :
			printf("%.3f - %.3f = %.3f",N1,N2,N1-N2);
			break;
		case '*' :
			printf("%.3f * %.3f = %.3f",N1,N2,N1*N2);
			break;	
		case '/' :
			printf("%.3f / %.3f = %.3f",N1,N2,N1/N2);
			break;	
		default :
			printf("You entered unknown operator !");
			break;	
	}
	
	
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/* EX7 : Factorial of a number */
	/*
	int n , cntr , factorial = 1; 
	
	printf("Enter an integer: ");
	scanf("%d",&n);
	
	if(n > 0)
	{
		for(cntr = 1 ; cntr <= n ; cntr++)
		{
			factorial *= cntr ;
		}
		printf("Factorial = %d ",factorial);
	}
	else if(n < 0 )
	{
		printf("Error!!.. Factorial of a negative number doesn't exist");
	}
	else
	{
		printf("Factorial = %d",factorial); // factorial of zero is 1 
	}
	*/
	
	
	
	
	
	
	
	
	
	
	
	/* EX6 : Calculate Sum of Natural Numbers */
	/*
	unsigned int n , cntr, sum = 0;
	
	printf("Enter an integer: ");
	scanf("%d",&n);
	for(cntr = 1 ; cntr <= n ; cntr++)
	{
		sum += cntr ;
	}
	
	printf("Sum = %d",sum);
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/* EX5 : Check whether a character is an alphabet or not */
	/*
	char x ;
	
	printf("Enter a character: ");
	scanf("%c",&x);
	
	if(((x >= 'a')&&(x <= 'z')) || ((x >= 'A')&&(x <= 'Z'))) 
	{
		printf("%c is an Alphabet",x);
	}
	else
	{
		printf("%c is not an Alphabet",x);
	}
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/* EX4 : Check whether a number is +ve or -ve or zero */
	/*
	float x;
	printf("Enter a number: ");
	scanf("%f",&x);
	
	if(x > 0)
	{
		printf("the number %.2f is a positive number",x);
	}
	else if(x < 0)
	{
		printf("the number %.2f is a negative number",x);
	}	
	else 
	{
		printf("You entered ZERO");
	}

	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/* EX3 : The largest number among 3 nimbers */
	/*
	float a , b , c ;
	
	printf("Enter three numbers: ");
	scanf("%f%f%f",&a,&b,&c);
	
	if(a > b && a > c)
	{
		printf("the largest number is %.2f",a);
	}
	else if(b > a && b > c)
	{
		printf("the largest number is %.2f",b);
	}
	else
	{
		printf("the largest number is %.2f",c);
	}		
		
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/* EX2 : Vowel or consonant alphabet  */
	/*	
	char x ;
	printf("Enter a character: ");
	scanf("%c",&x);
	if(x=='a' || x=='A' || x=='e' || x=='E' || x=='i' || x=='I' || x=='o' || x=='O' || x=='u' || x=='U')
	{
		printf("the character %c is a Vowel alphabet",x);
	}
	else
	{
		printf("the character %c is a Consonant alphabet",x);
		
	}
	
	*/
	
	
	
	
	
	
	
	
	/* EX1 :	Check whether a number is even or odd */
	/*
	unsigned char num ;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(num%2 == 0)
	{
		printf("the number %d is an Even number",num);
	}
	else
	{
		printf("the number %d is an Odd number",num);
	}
	
	*/
	
	
	
	
	
	
	
	
}