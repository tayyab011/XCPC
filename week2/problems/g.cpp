#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

 int t;
 cin>>t;
 map<string,int>mp;
 int s=0;

 while (t--)
 {
string s;
cin>>s;
mp[s]++;
if (mp[s]==1)
{
 cout<<"OK"<<endl;
}else{
    cout<<s<<mp[s]-1<<endl;
}


 }

}