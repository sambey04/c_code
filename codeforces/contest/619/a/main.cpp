#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long t,len,a2=0;
     string a,b,c;
    cin >> t;
    for(int a1=0;a1<t;a1++)
    {
    cin >> a >> b >> c; 
    len=a.length();
for(a2=0;a2<len;a2++)
{
if(a[a2]!=c[a2] && b[a2]!=c[a2])
{
	cout << "NO"<<"\n";
	break;
}
}
if(a[a2]==c[a2] || b[a2]==c[a2])
    cout << "YES"<<"\n";
    a2=0;
    }



    return 0;
}
