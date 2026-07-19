#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int binary;
    cin>>binary;
    int power=0;
    int sum=0;
    while(binary>0){
        int ld=binary%10;
        if(ld!=0 && ld!=1){
            cout<<"error";
            return 0;
        }
        sum+=ld*pow(2,power);
        power++;
        binary=binary/10;
    }cout<<sum;

    return 0;
}