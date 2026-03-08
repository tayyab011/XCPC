#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

 int t;
 cin>>t;
 set<string>ul;
 while (t--)
 {
 string s1,s2;
 cin>>s1>>s2;
 string rs=s1+ " "+s2;
ul.insert(rs);
 }
 cout<<ul.size();
}