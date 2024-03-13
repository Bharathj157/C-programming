/*Name:Bharath J
Description:WAP to generate negative Fibonacci numbers
Input:Enter a number: -8
Output:0 1 -1 2 -3 5 -8
*/
#include <stdio.h>

int main()
{
	int first=0,second=1,next=0,num;
	printf("Enter a number ");
	scanf("%d",&num);

	if(num<0)
	{
		while(next >= num && -next >= num )
		{
			printf("%d ",next);
			first=second;
			second=next;
			next=first-second;
		}
		printf("\n");
	}
	else
		printf("Enter valid value i.e less than zero\n");
}



