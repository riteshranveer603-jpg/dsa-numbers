#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<int> v;
    while(n>0){
        int ld=n%2;
        v.push_back(ld);
        n=n/2;
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    return 0;
}