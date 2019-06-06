#include<iostream>
using namespace std;

int main()
{
int n;

    cin >> n;
string arr[n];
    for(int a=0;a<n;a++)

    {

        cin >> arr[a];

    }

for(int a=0;a<n;a++)
{

        if(arr[a].length()>10)
{
    cout << arr[a].substr(0,1) << arr[a].length()-2 << arr[a].substr((arr[a].length()-1),arr[a].length()) << "\n";
}
else
cout << arr[a] << "\n";
}
}
