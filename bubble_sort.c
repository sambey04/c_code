#include<stdio.h>
#include <time.h>

int main()
{
	 clock_t start, end;
     double cpu_time_used;

     start = clock();
 int n=0;
 int arr[100];
 int len;
 int swap;
 int dec;

	printf("enter length of array and data in array  ");
	scanf("%d",&len);
	for(n;n<len;n++)
	{
		scanf("%d",&arr[n]);
	}
n=0;
printf("array is \n ");
for(n;n<len;n++)
	{
	printf("%d ",arr[n]);
	}


printf(" \n ");
dec=len;
n=0;

// applying bubble sort 
//

while(dec!=0){
for(n;n<len;n++)

{
	if(arr[n] > arr[n+1])
	{
		swap=arr[n+1];
		arr[n+1]=arr[n];
		arr[n]=swap;
	}

}
dec--;
n=0;
}
n=0;
printf("new array is \n ");
for(n;n<len;n++)
	{
	printf("%d ",arr[n]);
	}

end = clock();
     cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

printf("time used is %f",cpu_time_used);

}

