

#include <stdio.h>
#include <time.h>
 
int main()
{
  int c, fst, lst, mid, n, ser, arr[100];
clock_t start, end;
     double cpu_time_used;
     
     start = clock();

  printf("Enter number of elements\n");
  scanf("%d",&n);
  printf("Enter %d integers\n", n);
  for (c = 0; c < n; c++)
    scanf("%d",&arr[c]);

  printf("Enter value to find\n");
  scanf("%d", &ser);
 
 fst = 0;
 lst = n - 1;
 mid = (fst+lst)/2;

   while (fst <= lst) {
   
if (arr[mid] < ser)
         fst = mid + 1;    
      else if (arr[mid] == ser) {
         printf("%d found at location %d.\n", ser, mid+1);
         break;
      }
      else
         lst = mid - 1;
 
      mid = (fst + lst)/2;
   }
   if (fst > lst)
      printf("not found %d \n", ser);
     end = clock();
     cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

printf("time used is %f",cpu_time_used);

   return 0;   
}
