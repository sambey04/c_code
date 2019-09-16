#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 
 int n,m,var=0,maximum, size, c, location = 1;
 long ans=0;
cin >> n >> m;
 
string arr[n];
int ar[5];
ar[0]=ar[1]=ar[2]=ar[3]=ar[4]=0;
int point[m];
for(int num=0;num<n;num++)
{
cin >> arr[num];
}
for(int last=0;last<m;last++)
{
cin >>  point[last];


}


for(int take=0;take<m;take++)
{
for(int num=0;num<n;num++)
{
string shit=arr[num];
//cout << shit[take] << "\n";

if(shit[take]=='A')
ar[0]=ar[0]+1;
else if(shit[take]=='B')
ar[1]=ar[1]+1;
else if(shit[take]=='C')
ar[2]=ar[2]+1;
else if(shit[take]=='D')
ar[3]=ar[3]+1;
else if(shit[take]=='E')
ar[4]=ar[4]+1;

maximum=ar[0];
  for (int c = 0; c < 5; c++)
  {
    if (ar[c] > maximum)
    {
       maximum  = ar[c];
       location = c+1;
    }
  }
}
//cout << "max=" << maximum << "\n";
ans=ans+maximum*point[take];
//cout << ar[3];
ar[0]=0;
ar[1]=0;
ar[2]=0;
ar[3]=0;
ar[4]=0;

}
 
 
 
 
cout << ans; 
 
 
    return 0;
}
