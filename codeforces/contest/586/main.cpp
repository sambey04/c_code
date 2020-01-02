#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,k=0,z=0,one=0,zero=0;
cin >> n;
string var;

cin >> var;

for(int num=0;num<n;num++)
{
if(var[num]=='z')
	zero = zero +1;
else if(var[num]=='n')
	one = one +1;

}
while(z<one)
{
cout << "1 "; 
z++;
}
while(k<zero)
{
cout << "0 ";
k++;
}
    return 0;
}
