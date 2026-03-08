#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
map<string,int>mp;
string s;
cin>>s;
for (int i = 0; i <= n-2; i++)
{
    string s1;
   s1.push_back(s[i]);
  
   s1.push_back(s[i+1]);
 mp[s1]++;
}
int mn=INT_MIN;
string s1;
for (auto i :mp)
{
   if (i.second>mn)
   {
    mn=i.second;
    s1=i.first;
   }
   
}
cout<<s1<<endl;
}