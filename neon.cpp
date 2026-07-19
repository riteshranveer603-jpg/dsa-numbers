#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int sqr=1LL*n*n;
    long long sum =0;
    if(n==0){
        cout<<"yes";
        return 0;
    }
    if(n<0){
        cout<<"no";
        return 0;
    }
    while(sqr>0){
        int ld=sqr%10;
        sum+=ld;
        sqr=sqr/10;
    }
    if(sum==n){
        cout<<"yes";
    }else cout<<"no";
    return 0;
}