#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{
 // added the two lines below 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
long d1,d2,d,temp;
long arr[3];
   
    cin >> arr[0] >> arr[1] >> arr[2] >> d ;
int i,j;
for(i=0;i<3;i++)
	{		
		for(j=i+1;j<3;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
//for(i=0;i<3;i++)
//		cout<<arr[i]<<"\t";

d1=arr[1]-arr[0];
d2=arr[2]-arr[1];
if(d1==0 && d2>=d)
{
cout << d;
}
  
else if(d1==0 && d2<d)
{
cout << d+d-d2;
}

else if(d1<d && d2==0)
{
cout << d+d-d1;
}
   
else if(d1>=d && d2==0)
{
cout << d;
}
else if(d1>=d && d2>=d)
{
cout << "0";
}
else if(d1<d && d2>=d)
{
cout << d-d1;
}
else if(d1==0 && d2==0)
{
    cout << 2*d;
}
else if(d1>=d && d2<d)
{
cout << d-d2;
}
else
{
cout << 2*d-(d1+d2);
}

}
