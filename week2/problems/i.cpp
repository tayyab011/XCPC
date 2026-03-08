

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

 int t;
 cin>>t;
 map<string,bool>chat;
 vector<string>val(t);
for (int i = 0; i < t; i++)
{
  cin>>val[i];
}
for (int i = t-1; i >=0; i--)
{
   if (chat.count(val[i])==false)
   {
      cout<<val[i]<<endl;
      chat[val[i]]=true;
   }
   
 
}
 
}