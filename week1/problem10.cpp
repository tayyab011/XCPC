#include <bits/stdc++.h>
using namespace std;


int main(){

ios::sync_with_stdio(false);
    cin.tie(nullptr);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int cnt1=0,cnt=0;
    for(int x:a){
        if(x==1)cnt1++;
        else cnt++;
    }
    cout<<((cnt1+1)/2)+cnt<<endl;
}
   return 0;
}