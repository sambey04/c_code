#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
double ans=0;
       int q,num=0,n;
cin >> q;

    for(int a=0;a<q;a++)
    {
    cin >> n;
    for(int b=0;b<n;b++)
    {
    cin >> num;
    ans=ans+num;
    
    }
int ram=ceil(ans/n); 
    cout<<ram << "\n";
  
    ans=0; 
    }






    return 0;
}
