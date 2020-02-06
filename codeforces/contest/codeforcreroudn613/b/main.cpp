#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,no,test,ram=0,organicsum=0,arr[100000];
  int t;
    cin >> t;
for(int k=0;k<t;k++)
{
    cin >> n;

for(no=0;no<n;no++)
{

cin >> test;

if(test<0)
{	arr[ram]=organicsum;
ram++;
}
organicsum = organicsum+test;


}
//cout << ram;

for(no=0;no<=ram;no++)
{
if(arr[no]>=organicsum)
{
 cout << "NO" << "\n";

//cout << "arr: " << arr[no] << "\n";
 break;
}

}

if(arr[no]<organicsum)
	cout << "YES" << "\n";
ram=0;
organicsum=0;

}


    return 0;
}
