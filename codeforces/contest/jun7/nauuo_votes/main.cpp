#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y,z;

    cin >> x >> y >> z;
if(x>y+z)
    cout << "+";
else if(y>x+z)
    cout << "-";
else if(z==0 && x==y)
    cout << "0";
else if(x==0 && y==0 && z==0)
    cout << "0";
else 
    cout << "?";


}
