#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


long long n;
string str;
cin >>n;
cin >> str;
int ans=0;
char x;
for(int a=0;a<n;a++){
 x=(char)str[a];
//cout << x;
	if(x=='L')
		ans=ans+1;
	else 
		ans=ans+1;

		}
cout << ans+1;


    return 0;
}
