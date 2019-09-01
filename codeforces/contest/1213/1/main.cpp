#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      int t,n,ans=0,z=1;
	    long  a[150000];	 
    
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
   while(1)
   {
	   if(z>n)
		   break;
	   else if(a[y]<a[z]){
           ans++;
	   z=y+1;
	   break;
   
   }
	   z++;
   }
   } 
    
    }
    cout << ans;
    
    
    return 0;
}
