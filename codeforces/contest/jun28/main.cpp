// A fast IO program 
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
int n,k,m;
    cin >> n >> m >> k;

 if(n<=k && n<=m)
     cout << "Yes";

 else 
     cout << "No";



}
