#include<stdio.h>


int main()

{
float arr[100];
int n=0;
float total=0;
char x= 'a';
float new =0;

	while(x!= 'x')
	
	{
		x='a';
		printf("\n enter y to create new process and x to exit");
scanf("%c",&x);

	if(x== 'y'){
	printf("enter burst time\n");
	
	scanf("%f",&arr[n]);
		printf("\n total processes == %d total avg time =%f",n,new);
	total = total + arr[n];
		n++;
new =total/n;
	}


	}

}
