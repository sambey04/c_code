#include<stdio.h>
#include<time.h>


void quicksort(int number[10],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
}

int main(){
   int i, count, number[10];

   printf("no of elements to be added ==  ");
   scanf("%d",&count);
   for(i=0;i<count;i++)
   printf("Enter %d elements: ",count);
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);

   quicksort(number,0,count-1);

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

{
clock_t start,end;
double cpu_time_used;
start=clock();
end=clock();
cpu_time_used=((double)(end-start)) / CLOCKS_PER_SEC;
printf("time used is %f",cpu_time_used);
}
}

  


	

