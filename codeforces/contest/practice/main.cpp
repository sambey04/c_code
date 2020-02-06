    #include <bits/stdc++.h>
#include <string.h>     
using namespace std;
     
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
unsigned long long int  s,len=0,ans=0,ans1=0,j;
     string k;
     cin >> k;
	     len=k.length();

   cout <<"len"<< len<<"\n";
   // string s1=to_string(s); 
    //cout<< s1[0];
    j=len-1;
    for(int ram=0;ram<len;ram++)
    {
    if(k[ram]=='1')
    	ans=ans+j;
    j--;
     
    }

    //if(k[1]=='1'||k[0]=='1')
//	    ans++;
    cout << ans/2; 
    return 0;
    }
