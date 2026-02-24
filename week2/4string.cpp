
#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin>>n;
string s;
for (int i = 0; i < n; i++)
{
   char c;
   cin>>c;
   s.push_back(c);
}
cout<<s<<endl;
cout<<s.front()<<endl;
cout<<s.back()<<endl;
//push_back ,pop_back ,empty ,clear
//substring
string s1="tayyab";


cout<<s1.substr(1,3)<<endl;
}