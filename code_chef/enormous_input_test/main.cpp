#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k,test=0,count=0;
float a;
    cin >> n >> k;
    float arr[n];
        while(test<n)
        {
        cin >> arr[test] ;
       a=arr[test]/k;
        int b = (int)a;
      //  cout << a << "--" << b;
      if(a==b)
      {
      count++;
      }
        test++;
        }
cout  << count ;

}
