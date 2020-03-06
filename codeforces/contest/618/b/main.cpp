#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long t,n,num,sum=0,midn,k,sum2=0,sumd=0,MIN;
long long arr[100000];
cin >> t;
for(long a=0;a<t;a++)
{
cin >> n;
for(long b=0;b<2*n;b++)
{
	cin >> num;
arr[b]=num;
sum = sum + num;
}
sort(arr,arr+2*n);

midn=n;


for(long c=0;c<midn;c++)
sumd=sumd+arr[c];

cout<<"sum "<< sum <<"sumd "<< sumd<<"midn "<<midn<<"\n";


if(abs(sumd+arr[midn]-sum/2)>abs(sumd-arr[midn-1]-sum/2))
{
cout << "h1";
	MIN=abs(sumd-sum/2);
k=midn;
	while(abs(sumd-sum/2)<MIN)
{
	MIN=abs(sumd-sum/2);
sumd=sumd-arr[k];
k--;
}
}


if(abs(sumd+arr[midn]-sum/2)<abs(sumd-arr[midn-1]-sum/2))
{
	cout <<"h";
	MIN=abs(sumd-sum/2);
k=midn;
	while(abs(sumd-sum/2+arr[k])<=MIN)
{

	MIN=abs(sumd-sum/2);
	sumd=sumd+arr[k];
	k++;
}
}

cout << " k "<<k<<"sumd "<<sumd<<"\n";	
	
	for(long c=k;c<2*n;c++)
sum2=sum2+arr[c];
cout << "sum2 "<<sum2<<"\n";

cout << abs(sum2-sumd) <<"\n";
}

    return 0;
}
