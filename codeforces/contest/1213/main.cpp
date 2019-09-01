//https://codeforces.com/contest/1213
//
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int x,n,test=0;

cin >> n ;
for(int i=0;i<n;i++)
{
cin >> x;
if(x%2==0)
test++;
}

if(test>n-test)
	cout << n-test;
	else
	cout << test;



    return 0;
}
