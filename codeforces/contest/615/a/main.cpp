#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long t,sum,n,arr[3];
cin >> t;
for(int no=0;no<t;no++)
{

 
	cin >> arr[0]>>arr[1] >> arr[2] >> n ;
sort(arr,arr+3);
sum=arr[2]-arr[0]+arr[2]-arr[1];
//cout << arr[0] <<arr[1]<<arr[2];

//cout << "sum= "<<sum << " n= "<<n<<"\n";

if(sum<=n)
{
sum=n-sum;

if(sum%3==0)
	cout << "YES"<<"\n";
else
	cout << "NO"<<"\n";
}
else
cout << "NO"<<"\n";

//cout << "no= "<<no<<"\n";
}
    return 0;
}
