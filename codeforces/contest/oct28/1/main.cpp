#include<bits/stdc++.h>
using namespace std;
int k=0,j=0,n=0,itr=0;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a;
	char arr[26];
int t,mark=0;
	cin >> t;
	for(mark;mark<t;mark++)
	{	cin >> a;

while(k<t){

for(k;k<t;k++)
{
	while(n<itr)
{
if(a[k]==arr[n])	
	k++;
n++;
}	

	for(k=j+1;j<t;j++){
if(a[k]==a[j])
if(a[j]!=a[j+1]){
	arr[n]=a[j];
	printf(a[n]);
itr++;
}}
}


}
/*
 int num = sizeof(arr)/sizeof(arr[0]); 
  
    sort(arr, arr+num); 
  
    for (int in = 0; in < num; ++in) 
        cout << (int) arr[in]; 

*/
}

	return 0;


}
