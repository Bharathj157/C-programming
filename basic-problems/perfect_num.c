/*Name:Bharath J
Description:WAP to check if number is perfect or not
Input:Enter a number: 6
Output:Yes, entered number is perfect number
*/

#include <stdio.h>

int main()
{
	int num,sum=0;
	printf("Enter the number ");
	scanf("%d",&num);
	if(num > 0 )
	{
		for(int i=1;i<num;i++)
		{
			if(num%i == 0)
				sum=sum+i;

		}
		if(sum == num)
			printf("Yes, number is perfect number\n");
		else
			printf("Number is not a perfect number\n");
	}
	else
	{
		printf("Enter a valid number i.e number greater than zero\n");
	}
}



