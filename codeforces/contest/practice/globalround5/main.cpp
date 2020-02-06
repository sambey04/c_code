#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 int NULL1=1167,no1=0,n,test,attitude=0,arr[100000][2];
 

 cin >> n;
 for(int no=0;no<n;no++)
 {
	//[1] is for even 
 cin >> test;
 if(test%2==0)
 {
 arr[no][1]=test/2;
 arr[no][0]=NULL1;
 }
 else{
 arr[no][0]=test/2;
 arr[no][1]=NULL1;
 }
attitude=attitude+test/2;
//cout << test/2 << "\n";

 }
 while(attitude!=0 && attitude>0)
 {
if(arr[no1][0]!=NULL1 )
{
 if(arr[no1][0]<0)
 {arr[no1][0]--;

 attitude--;
 }}

 no1++;
 //cout << "ram";
 }

 while(attitude!=0 && attitude<0)
 {
	if(arr[no1][0]!=NULL1 ){
 if(arr[no1][0]>0)
 {	 arr[no1][0]++;
// else 
//	 arr[no1][0]++;

 attitude++;
 }}

 no1++;
 //cout << "ram";
 }
 no1=0;
 for(int no=0;no<n;no++){
if(arr[no][0]!=NULL1)
cout << arr[no][0] << "\n";
else
	cout << arr[no][1] << "\n";
 }
//cout<<"attitude " << attitude;
 
 
 
 
 
 
    return 0;
}
