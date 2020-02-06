#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long xx,t,n,temp1,temp2,xcor,ycor=0,aa,MAX,no1,bb;
string ans;
bool ram=false;
cin >> t;
for(int no=0;no<t;no++)
{
cin >> n;
long long arr[n][n];

for(int no1=0;no1<n;no1++)
{
cin >> arr[no1][0]>>arr[no1][1];
}

for (int i = 0; i < n ; i++) {

    for (int o = 0; o < n ; o++) {

        if ( arr[ i ][0] < arr[ o ][0] ) {

            temp1 = arr[ i ][0];
            temp2 = arr[ i ][1];

            arr[ i ][0] = arr[ o ][0];
            arr[ i ][1] = arr[ o ][1];

            arr[ o ][0] = temp1;
            arr[ o ][1] = temp2;

        }

    }

}
aa=arr[0][0];

while(aa>0){
	//cout << "R";
	ans=ans+"R";
aa--;
}

for(no1=0;no1<n-1;no1++)
{

if(arr[no1][0]!=arr[no1+1][0])
{

//cout << arr[no1][0]<<arr[no1][1]<<"\n";
aa=arr[no1+1][0]-arr[no1][0];
xx=arr[no1+1][0]-arr[no1][0];
bb=arr[no1+1][1]-arr[no1][1];
MAX=arr[no1][1];


while(ycor<MAX)
{
//cout << "U";

	ans=ans+"U";
ycor++;

}

while(aa>0)
{
//	cout << "R";
aa--;

	ans=ans+"R";
}
}
if(xx<0||bb<0)
{ram=true;	
	break;

}}

MAX=arr[no1][1];

while(ycor<MAX)
{
//cout << "U";
ycor++;

	ans=ans+"U";
}
if(ram==true)
	cout << "NO"<<"\n";
	else
cout<<"YES"<<"\n" << ans<<"\n";

ram=false;
ycor=0;
ans="\0";
}
return 0;
}

