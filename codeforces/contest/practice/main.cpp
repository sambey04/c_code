#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long MAX,MIN,MAXt,MINt,arr[100000][2],n;
int t;
cin >> t;
for(int i=0;i<t;i++)
{
cin >> n;
for(int j=0;j<n;j++)
{
cin >> arr[j][0];
cin >> arr[j][1];

	if(arr[0][0]<arr[0][1] && j==0)
	{	MAX=arr[0][0];
	MIN=arr[0][1];
	}

if(arr[j][0]<=arr[j][1])
{
MAXt=arr[j][0];
MINt=arr[j][1];
//cout << "ar"<< arr[j][0] << "\n"<< "arr"<<arr[j][1] << "\n";
}
else
{
MAXt=arr[j][1];
MINt=arr[j][0];
}

//cout<< "MAXo " << MAXt << "\n";
if(MAXt>MAX)
	MAX=MAXt;
//cout<< "MAX " << MAX << "\n";
	if(MINt<MIN)
	MIN=MINt;

//cout << "MIN " << MIN << "\n";
}

if(n==1 || MAX-MIN<0)
	cout<< "0" << "\n";
	else
	cout << MAX-MIN << "\n";

}
    return 0;
}
