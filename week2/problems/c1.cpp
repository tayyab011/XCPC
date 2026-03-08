#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

 int t;
 cin>>t;
 map<pair<string,string>,bool>mp;
 while (t--)
 {
 string s1,s2;
 cin>>s1>>s2;
mp[{s1,s2}]=true;
 }
cout<<mp.size();
}