#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // added the two lines below 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
int q,a,count=0;
long long n;

cin >> q;
for(a=0;a<q;a++)
{
cin >> n;

while(true){
if(n==1)
  {
   cout << count << "\n";
break;
  }
else if(n%2==0)
  {
    n=n/2;
    count++;
//cout << "div by 2 n==" << n << "\n";
  }

else if(n%3==0 )
 {
     n=(n*2)/3;
     count++;
//cout << "div by 3 n==" << n << "\n";
 }
else if(n%5==0)
  {
      n=(n*4)/5;
      count++;
//cout << "div by 5 n==" << n << "\n";
  }
else{
    cout << -1 << "\n";
break;
    }

}
count=0;

}

} 
