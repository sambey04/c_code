#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

int t,n,k1,k2,MAX=0,MAX1=0,k1val,num1;
cin >> t;
for(int num=0;num<t;num++)
{
cin >> n >> k1 >> k2 ;
for(int num1=0;num1<k1;num1++)
{	cin >> k1val;

if(MAX<k1val)
MAX=k1val;
}
num1=0;
for(num1=0;num1<k1;num1++)
{	cin >> k1val;

if(MAX<k1val)
MAX1=k1val;
}
if(MAX>MAX1)
	cout << "YES" << "\n";
	else
	cout << "NO" << "\n";


}

    return 0;
}
