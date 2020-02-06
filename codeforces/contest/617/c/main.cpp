#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,t,no1,no2,poi=0,temp1,temp0,arr[100000][2];
    string x;

cin >> t;
for(int a=0;a<t;a++)
{
cin >> n;
cin >> x;
double s[n];
for(int a=0;a<n;a++)
{
if(x[a]=='L')
	s[a]=-1;

if(x[a]=='R')
	s[a]=1;


if(x[a]=='U')
	s[a]=0.3;


if(x[a]=='D')
	s[a]=-0.3;
}

for(no1=0;no1<n-1;no1++){
	for( no2=no1+1;no2<n;no2++)
	{
		cout <<no1<<" "<<no2<<"\n";
	if(s[no1]+s[no2]==0)
	{
	
		cout<<"in " <<no1<<" "<<no2<< "sum "<<s[no1]+s[no2] <<"\n";
	
		arr[poi][0]=no1;
	
		arr[poi][1]=no2;
	poi++;
	if(no2-no1==1)
		break;
	}
	}}

for(no1=0;no1<n-1;no1++)
	for(no2=no1+1;no2<n;no2++)
	{
if(arr[no1][1]-arr[no1][0]>arr[no2][1]-arr[no2][0])	
{
	temp1=arr[no1][1];
        temp0=arr[no1][0];
 
	arr[no1][1]=arr[no2][1];
	arr[no1][0]=arr[no2][0];

	arr[no2][1]=temp1;
	arr[no2][0]=temp0;


}
	}

cout << arr[0][1]<<" "<<arr[0][0]<<"\n";

}
    return 0;
}
