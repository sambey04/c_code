#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long t,x,y,a,b,mina,minb;
 cin >> t;
 for(long he=0;he<t;he++)
 {
 cin >> x >> y>> a >> b;
a++;
b++;

if(x/2>=a)
       mina=abs(x-a);
else
	mina=a-1;
if(y/2>=b)
       minb=abs(y-b);
else
	minb=b-1;

cout << x<<"y " << y <<"mina "<< mina <<"minb "<< minb<<"\n";

if(mina*x>minb*y)
	cout << mina*y<<"\n";
else 
	cout << minb*x<<"\n";
 }







    return 0;
}
