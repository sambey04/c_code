#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t,n,ans=0,xx,num,even=0;

cin >> t;
for(int a=0;a<t;a++)
{
cin >> n;
for(int b=0;b<n;b++)
{
	cin >> num;
if(num%2==0)
	even++;

	ans=ans+num;

}

xx=n-even;
if(ans%2!=0)
cout << "YES"<<"\n";
else if(even>0 && xx>0)
	cout << "YES"<<"\n";
else 
cout << "NO"<<"\n";

ans=0;
even=0;

}





    return 0;
}
