#include<iostream>
#include<set>
#include<cmath>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    set<long long> s;
    while(n!=1 && s.count(n)==0){
        s.insert(n);
        long long int sum=0;
        
            while(n>0){
                int ld=n%10;
                sum+=ld*ld;
                n=n/10;
            }
            n=sum;
        }
    if(n==1){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    return 0;
}