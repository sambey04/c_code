#include <bits/stdc++.h>
using namespace std;
#define fio      cin.sync_with_stdio(false) ; cin.tie(0);cout.tie(0) ;
int32_t main()
{
   fio;

    int t;
    cin >> t;
    long long n[19];
    int k[19];
   int count=0,a=0;
    for( a;a<t;a++)
    {
    cin >> n[a] >> k[a];
    cout << "in ram";
    }

cout << "ram \n";
    for(a=0;a<t;a++)
    {
    while(n[a]!=0){
        if(n[a]%k[a]==0)
    {
    count++;
    n[a]=n[a]/k[a];
   // cout << "value when divide "  << n[a] << " count " << count<< "\n"; 
    }
    else
    {
        n[a]--;
    count++;
    }}
    cout << count << "\n";
   count=0;
    }

}
