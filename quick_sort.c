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
// after variable 
 int swap;
 int pivot;
 int counter1=0;
 int counter2=0;

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
	printf("arr %d == %d    ",n,arr[n]);
	}


printf(" \n ");


// applying qucik sort 
// counter 1 is for each pass
// counter 2 is for increment 
pivot = len - 1 ; 

while(counter2 < pivot)
{
	if(arr[pivot] < arr[counter2])
                 {
		
	 counter2++;
				        
		 
		 }
	
	else	if(arr[pivot] > arr[counter2])
        
	         {
			 counter1++;
			
			 swap=arr[counter2];
			 arr[counter2]=arr[counter1];
			 arr[counter1]=swap;

			 printf("swap %d & %d \n arr[%d] > arr[%d] or %d > %d ", arr[counter2] , arr[counter1],pivot,counter2,arr[pivot] , arr[counter2] );
			// printf("  arr[%d] > arr[%d] or %d > %d ",pivot,counter2,arr[pivot] , arr[counter2]);
 counter2++;

		 }

        
	 printf("after counter 1==  %d counter 2 == %d  \n ",counter1,counter2);
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

