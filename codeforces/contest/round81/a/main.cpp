#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long t,l,no;
 cin >> t;
 for(int a=0;a<t;a++)
 {
 cin >> no;
if(no%2==0)
{
	l=no/2;
	while(l!=0)
	{
	cout << 1;
	l--;
	}}
	else 
{		no=no-3;
	cout << "7";
	l=no/2;
	while(l!=0)
	{
	cout << "1";
	l--;
	}
}
cout << "\n";
 }






    return 0;
}
