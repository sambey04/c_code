#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long double t,n,d,d1,x;
cin >> t;

for(long long a=0;a<t;a++)
{
cin >> n >> d;
d1=d;
for( x=0;x<=n;x++)
{
	long long ram=d1/(x+1)+0.99999+x;
if(ceil(d1/(x+1))+x<=n || d<=n ){
	cout << "YES"<<"\n";
break;
}}
//if(d<=n)
//	cout << "YES"<< "\n";

if(ceil(d1/(x+1))+x>n && d>n )
cout << "NO"<<"\n";

x=0;

}



    return 0;
}
