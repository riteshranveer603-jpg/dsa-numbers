#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int l=0;
    int h=n-1;
    int ans=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==target){
            ans=mid;
            h=mid-1;
        }else if(target>arr[mid]){
            l=mid+1;
        }
        // else{
        //     h=mid-1;
        // }
            
    }
    cout<<ans;
    return 0;
}