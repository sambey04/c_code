#include <bits/stdc++.h> 
#include<cmath>
#include<math.h>
using namespace std; 
  
int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n,m,i,j,count=1;
    cin >> n;
    m=sqrt(n);
    for(i=1;i<=m;i++)
        for(j=1;j<=m;j++)
          if(abs(1-i) + abs(1-j) >= abs(1-count))
             {
                 cout << i << " " << j << "\n";
        count++;     
             
             }

if( count-1 > n)
{
    for(i=1;i<=m;i++)
        for(j=1;j<=m;j++)
          if(abs(1-i) + abs(1-j) >= abs(1-count))
             {
                 cout << i << " " << j << "\n";
             
             }}
else{ 
m++;
cout << "else";

}   } 
