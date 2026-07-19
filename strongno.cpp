#include<iostream>
using namespace std;
int facto(int n){
    if(n<0){
        return -1;
    }
    else if(n==0){
        return 1;
    }
    else{
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
        }
    return fact;
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum=0;
    int temp=n;
    while(temp>0){
        int digit=temp%10;
        sum+=facto(digit);
        temp/=10;
    }
    if(sum==n){
        cout<<"The number is a strong number.";
    }
    else{
        cout<<"The number is not a strong number.";
    }
    return 0;
}