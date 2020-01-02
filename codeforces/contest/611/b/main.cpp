#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 long long t,n,k,cpk,left,k1;
 cin >> t;
 for(long num=0;num<t;num++)
 {
 cin >> n >> k;
 cpk=n/k;
 left=n-k*cpk;
k1=k/2;
 if(n<k)
	 cout << n << "\n";
 else if(n%k==0)
	 cout << cpk*k << "\n";

else if(left>=k1)

	cout << cpk*k + k1  << "\n";
 else 
	 cout << cpk+k + left << "\n";


 }
 
 
 
    return 0;
}
