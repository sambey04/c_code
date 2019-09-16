#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      int t,n,ans=0,z=1;
	     int a[150010];	 
    
    cin >> t;
    for(int x=0;x<t;x++)
    {
	    cin >> n;
    for(int y=0;y<n;y++)
    {
    cin >> a[y];
    
    }
   for(int y=0;y<n;y++)
   {
	   //cout <<"value of y=" <<y << "\n";
	   z=y+1;
   while(1)
   {
	   if(z>=n)
		   break;
	   else if(a[y]>a[z])
   {
           ans++;
	   //z=y+1;
//cout << "dead \n";
	   break;
   
   }
	   z++;
//	   cout << "value of z is=" << z << "\n";
//	   cout << "value of a[]=" << a[y] << "\n";
   }
   } 
    
    cout << ans << "\n";
    ans=0;
    }
    
    
    return 0;
}
