#include<stdio.h>
int ram(int no);
int main()
{
	int num;
scanf("%d",&num);
printf("%d",ram(num));
}

int ram(int no)
{
int ans=1;

if(no==1)
return ans;

ans=no*ram(no-1);

}
