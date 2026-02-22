#include <bits/stdc++.h>
using namespace std;


int main(){

ios::sync_with_stdio(false);
    cin.tie(nullptr);
int n,x;
cin>>n>>x;
set <int> s;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    s.insert(k);
}
int ans=0;
for(int i=0;i<x;i++){
    if(s.find(i)==s.end())ans++;
}
if(s.find(x) != s.end()) ans++;
cout<<ans<<endl;
   return 0;
}