#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int a,q,n;

 cin >> q ;
 
 for(int num=0;num<q;num++)
 {	 cin >> n;
int s[n];

         for(int num1=0;num1<n;num1++)
	 {
	 cin >> s[num1];
	 a=a+s[num1];
	 }
for(int num1=0;num1<n;num1++)
    {
	    for(int num2=num1;num2<n;num2++)
	    {
    if(s[num1]==s[num2])
    {	  s[num1]=s[num1]*2;  
    s[num2]=0;
    
    }	    
	    }
    if(s[num1]%2048==0)
	    cout<< "yes" << "\n";
    
else cout << "no" << "\n";
    }
 }
 
 
    return 0;
}
