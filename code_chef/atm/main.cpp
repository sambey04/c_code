#include<iostream>
#include<iomanip>
//using namespace std;
int main()
{
       int X;
	double Y;
	std::cin >> X >> Y;
//cin >> d;
//if(X<0 || X >= 2000 || Y>=0|| Y<=2000)
//exit(0);

if(X>Y || X%5!=0)
	std::cout << Y;

else{
Y=Y-X-0.50;
  std::cout<<std::fixed<<std::setprecision(2)<<Y;
}

return 0;
}
