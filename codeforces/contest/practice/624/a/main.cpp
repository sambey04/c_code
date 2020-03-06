#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t,a,b,ev;
cin >> t;

for(long no=0;no<t;no++)
{

cin >> a >> b;
ev=abs(a-b);
if(a>b && ev%2==0)
{
cout << "1"<<"\n" ;
}
else if(a>b && ev%2!=0)
{
cout << "2"<<"\n";

}
else if(a<b && ev%2==0)
{
cout << "2"<<"\n";

}

else if(a<b && ev%2!=0)
{
cout << "1"<<"\n";
}

else 
	cout << "0" <<"\n";

}

    return 0;
}
