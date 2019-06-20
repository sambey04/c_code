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
  int new_vr;
  int a,b;


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


n=0;
// applying selection sort 
       while(n<len)
       {
	a=n+1;
           printf(" \n a== %d  ",a);
        b=arr[n];
           printf(" \n b== %d  ",b);

	    for(a;a<=len;a++)
	        {printf(" \n a_inside == %d  ",a);
                 printf(" \n b_inside == %d  ",b);
		     if(b > arr[a])
                     {                  
                       b = arr[a];
                       printf(" \n b value = %d    ",b);
                     }	
                 
    
    swap=arr[n];
    arr[n]=b;
    b=swap;

     n++;
}
	printf(" \n n== %d  ",n);

        }


n=0;
printf("\n new array is \n ");
for(n;n<len;n++)
	{
	printf("%d ",arr[n]);
	}

end = clock();
     cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

printf("time used is %f",cpu_time_used);

}

