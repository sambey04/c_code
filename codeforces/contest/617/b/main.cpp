#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   long long t,num,ans=0,no=0,x;
cin >> t;

for(long long a=0;a<t;a++)
{
cin >> num;
ans=num;
while(num/10>0)
{
ans=ans+num/10;
	num=num%10+num/10;

}

cout << ans<< "\n";

}


    return 0;
}
