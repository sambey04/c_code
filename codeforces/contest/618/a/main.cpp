#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long t,num,sum=0,ans=0,n;
cin >> t;
for(int a=0;a<t;a++)
{
cin >> n;

for(int b=0;b<n;b++)
{
	cin >> num;
if(num==0)
{	
	sum=sum+1;
ans++;
}
	else 
	sum=sum+num;

}
if(sum==0)
	cout << ans+1<<"\n";
else 
cout << ans<<"\n";
ans=0;
sum=0;
}






    return 0;
}
