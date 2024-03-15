/*Name:Bharath J
Description:WAP to find 2nd largest element in an array
Input:
Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8
Output:
Second largest element of the array is 5
*/

#include <stdio.h>
#define SET 0

#if SET
int main()
{
	int n;
	printf("Enter the size of the array ");
	scanf("%d",&n);

	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);

        int max=0,sec_max=0;
	for(int i=0;i<n;i++)
	{
		if(max < arr[i])
			max=arr[i];
	}
	printf("Largest element of array is %d \n",max);
	
	for(int i=0;i<n;i++)	
	{
		if(sec_max < arr[i] && max > arr[i])
		{	
			sec_max=arr[i];
		}

	}

	printf("Second largest element of the array is : %d\n",sec_max);
}
#else
int main()
{
	int n;
	printf("Enter the size of the array ");
	scanf("%d",&n);

	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);

	int max=0,sec_max=0;

	for(int i=0;i<n;i++)
	{
		if(max < arr[i])
		{
			sec_max=max;
			max=arr[i];
		}
		else if(sec_max < arr[i] && max > arr[i])
		{
				sec_max=arr[i];
		}
	}

	printf("Largest element of array is %d \n",max);
	printf("Second largest element of the array is : %d\n",sec_max);

}
#endif




