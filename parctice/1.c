#include<stdio.h>

void array_func();

int main()
{
static int arr[5];
int n;

for(n=0;n<5;n++)
scnaf("%d",&arr[n]);

const int *i=arr[55555];

arrary_func(i);
}

array_func(int i)
{
int n;
int arr[5]=i;

for(n=0;n<5;n++)
printf("%d",arr[n]);


}
