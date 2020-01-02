#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 int t,hour,h,m,minu;
 cin >> t;
 for(int a=0;a<t;a++)
 {	
	 cin >> h >> m ;
         hour=24-h;
	 minu=m-60;
         cout << hour*60 - m << "\n";

 
 
 }
 
 
 
 
 
 
    return 0;
}
