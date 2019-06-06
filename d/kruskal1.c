#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int i,j,k,a,b,u,v,n,ne=1,i1=0;
int min,mincost=0,cost[9][9],par[9];
int find(int);
int uni(int,int);
	clock_t start, end;
     double cpu_time_used;



 main()
{
     start = clock(); 
 printf("\n kruskal \n");
 printf("\n Enter no of vertices \n");
 scanf("%d",&n);
 printf("\n Enter adjacency matrix \n");
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
  {
   scanf("%d",&cost[i][j]);
   if(cost[i][j]==0)
    cost[i][j]=999;
  }
 }
 
 while(ne<n)
 {
  for(i=1,min=999;i<=n;i++)
 {
 for(j=1;j<=n;j++)
  {
  if(cost[i][j]<min)
  {
  min=cost[i][j];
  a=u=i;
  b=v=j;
  }
  }
  }
  u=find(u);
  v=find(v);
  if(uni(u,v))
  {
  // printf("n%d edge (%d,%d) =%dn",ne++,a,b,min);
   ne++;
	  mincost +=min;
  }
  cost[a][b]=cost[b][a]=999;
 }
 printf("\n Minimum cost = %d \n",mincost);
 
}
int find(int i)
{
 while(par[i])
  i=par[i];
 return i;
}
int uni(int i,int j)
{
 if(i!=j)
 {
  par[j]=i;
  return 1;
}





     end = clock();
     cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

printf("time used is %f",cpu_time_used);
 return 0; 
}
