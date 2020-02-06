#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long t,zer=0,one=0,ans=0,ji=0,yes=0,n,x,ji1=0;
string s;
    cin >> t;
    for(int a=0;a<t;a++)
    {
    cin >> n >> x >> s;
    for(int b=0;b<n;b++)
    {
    if(s[b]=='0')
	    zer++;
    else
	    one++;
    }
    ans=zer-one;
    if(ans==0)
	    cout << "-1"<<"\n";
  else if(ans<0)
	    cout << "0"<<"\n";

    else if(x%ans==0){
    for(int ram=0;ram<n;ram++)
    {
    if(s[ram]=='1')
	    ji++;
    if(s[n-ram]=='1')
	    ji1++;
   if(s[n-ram]=='0')
	    ji1--;
    if(s[ram]=='0')
	    ji--;
    if(ji==0 || ji1==0)
	    yes++;
    }}

      else if(x%ans!=0) 
    for(int ram=0;ram<n;ram++)
    {
    if(s[ram]=='1')
	    ji++;
    else 
	    ji--;
    if(ji==-1)
	    yes++;
    }
if(ans>0)
cout << yes<<"\n";

    yes=0;
    ji=0;
    ji1=0;
    zer=0;
    one=0;
    }




    return 0;
}
