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
    int count=1,i=0,j=0;
for(i=1;i<=m;i++)
        for(j=1;j<=m;j++)
        {
            if(abs(1-i) + abs(1-j) >= abs(1-count))
            {   count++; cout << i << " " <<j << " " << m << "\n";}
else 
{
cout << "fail" << "\n";

    m++;
    count =0;
    fun(m);

}}
cout << "count=="<< count << "\n";
return m;
}
