//
#include <bits/stdc++.h>
using namespace std;



int main()
{

ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;	
	cin >> t;
	for(int n;n<t;n++){
  long str,inte,poi,ans=1;
cin >> str >> inte >> poi ;
if(str<inte)
{
if(inte-str>=poi)
cout << 0 << "\n";
else if(inte-str<poi){
	poi=poi-(inte-str);
str=str+(inte-str);
//cout << "poi=" << poi;
//cout << "shit" << "str==" << str << "poi" <<poi << "\n";
}}


if(str>=inte){
if(str-inte>poi)
	cout<< poi+1 << "\n"  ;
else if(str-inte<poi && str!=inte)
	cout << (str+poi)-((str+poi+inte)/2) <<  "\n"  ;
else if(str-inte<poi && str==inte){
int hello=ceil(poi/2.0);
	cout << hello << "\n"   ;


}
	else if(str-inte==poi)
         cout << poi << "\n"  ;
}




}


    return 0;



}


