#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int temp=n;
	int rev=0;
	while(temp>0){
	    int ld=temp%10;
	    rev=rev*10+ld;
	    temp=temp/10;
	}
	if(n==rev){
	    cout<<"equal";
	}else cout<<"not";
	return 0;
}