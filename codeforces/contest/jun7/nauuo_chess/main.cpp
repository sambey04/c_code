#include<bits/stdc++.h>
#include<cmath>
#include<math.h>
using namespace std;
int fun(int m);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m,i,j,res;
    cin >> n;

    m=sqrt(n);
res=fun(m);

cout << res;
}
    
 int fun(int m){
    int count=0,i=0,j=0;
for(i=1;i<m;i++)
        for(j=1;j<m;j++)
        {
            if(abs(1-i) + abs(1-j) >= abs(i-j))
            {   count++; cout << i <<j << "\n";}
else 
{
cout << "fail";
    m++;
    fun(m);

}}
cout << "count=="<< count << "\n";
return m;
}
