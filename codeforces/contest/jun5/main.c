#include <bits/stdc++.h>
using namespace std;
#define fio      cin.sync_with_stdio(false) ; cin.tie(0);cout.tie(0) ;
int32_t main()
{
   fio;

    int t;
    cin >> t;
    long long n[19];
   long long k[19];

  long long count=0,a=0;

    for( a;a<t;a++)
    {
    cin >> n[a] >> k[a];
    //cout << "in ram";
    }

//cout << "ram \n";
    for(a=0;a<t;a++)
    {
    while(n[a]!=0 ){
        if(n[a]%k[a]==0   )
    {
    if(n[a]==1 && k[a]==1){
        n[a]--;
    count++;
    }
    else{
        count++;
    n[a]=n[a]/k[a];
//cout << "value when divide= "  << n[a] << " count " << count<< "\n"; 
    }
    }
    else
    {
    count=count+n[a]%k[a];
        n[a]=n[a]-n[a]%k[a];
//cout << "value in else =" << n[a] <<" coutn=="<< count << "\n";
    }}
    cout << count << "\n";
   count=0;
//cout << "hello";
    }

}
