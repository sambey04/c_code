#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

long long A,B,t,x,c;
long long a,b,ans=0;
cin >> t;
for(long long  k=0;k<t;k++)
{
cin >> A >> B;
//a=1;
//b=2;
for(a=1;a<=A;a++)
	for(b=1;b<=B;b++){
   string s1 = to_string(a); 
    string s2 = to_string(b); 
  
    // Concatenate both strings 
    string s = s1 + s2; 
  
    // Convert the concatenated string 
    // to integer 
    c = stoi(s);

    if(a+b+a*b==c)
	ans++;
	
	}
cout << ans<<"\n";
ans=0;
}





    return 0;
}
