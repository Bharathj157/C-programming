/*Name:Bharath J
Description: WAP to check if number is odd or even
Input:./even_odd
Enter the value of 'n' : -2
Output:-2 is negative even number
*/

#include <stdio.h>

int main()
{
	int num;
	printf("Enter the value of 'n' :");
	scanf("%d",&num);

	if( num > 0 )
	{
		if(num%2 == 0)
			printf("%d is positive even number\n",num);
		else
			printf("%d is positive odd number\n",num);
	}
	else if(num < 0)
	{
		if(num%2 == 0)
			printf("%d is negative even number\n",num);
		else
			printf("%d is negative odd number\n", num);
	}
	else
	printf("%d num is neither odd nor even\n");
}

