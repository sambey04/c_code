//working 
#include<bits/stdc++.h>
using namespace std;
#define fio      cin.sync_with_stdio(false) ; cin.tie(0);cout.tie(0) ;

int32_t main()
{
    fio;

    int t,a=0;
long long n,k,count;

    cin >> t;
    
    for(a;a<t;a++)
    {
        count=0;
    cin >> n >> k;
    
    while(n!=0){
    
        if(n==1 && k==1)
        {n--; count++;} 
        
        else if(n%k==0  )
    { count=count + n%k +1;
        n=n/k;
//        cout << "n/k==" << n << "\n";
    }
    
        else {
count = count + n%k ;
    n=n-n%k; 
    //cout << "n value =" << n << "\n"; 

//cout  << count[a] << "\n";
        
        }
    }
    cout << count << "\n";
    }
//a=0;
  //  for(a;a<t;a++)
    //    cout << count[a] << "\n";

    return 0;
}



