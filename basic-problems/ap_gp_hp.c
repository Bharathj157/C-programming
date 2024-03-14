/*Name:Bharath J
Description: WAP to generate AP, GP, HP series
Input:
Enter the First Number 'A': 2
Enter the Common Difference / Ratio 'R': 3
Enter the number of terms 'N': 5
Output:
AP = 2, 5, 8, 11, 14
GP = 2, 6, 18, 54, 162
HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428
*/

#include <stdio.h>

int main()
{
	int a,r,n,gp;
	float hp;
	printf("Enter the first number 'A' ");
	scanf("%d",&a);
	hp=a;
	gp=a;
	printf("Enter the common difference/ Ratio 'R' : ");
	scanf("%d",&r);
	printf("Eter the number of terms 'N' ");
	scanf("%d",&n);

	if(n <= 0)
	{
		printf("Invalid_input !!!!!\n");
		return 0;
	}
	printf("Ap = ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a);
		a=a+r;
	}
	printf("\n");
	printf("Hp = ");
	for(int i=0;i<n;i++)
	{
		printf("%f ",1/hp);
		hp=hp+r;
	}
	printf("\n");
	printf("Gp = ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",gp);
		gp=gp*r;
	}
	printf("\n");

}

