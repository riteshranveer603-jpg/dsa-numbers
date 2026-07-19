#include<iostream>
using namespace std;
int main(){
    long long int n;
    cout<<"Enter a number: ";
    cin>>n;
    long long int square=n*n;
    long long int temp=n;
    int cnt=0;
    while(temp>0){
        cnt++;
        temp/=10;
    }
    long long int divisor=1;
    for(int i=0;i<cnt;i++){
        divisor*=10;
    }
    if(square%divisor==n){
        cout<<"The number is an automorphic number.";
    }
    else{
        cout<<"The number is not an automorphic number.";
    }
}