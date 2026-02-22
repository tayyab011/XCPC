
   
#include<bits/stdc++.h>
using namespace std;

int main(){
string s,t;
cin>>s>>t;
int su=0;
for (int i = 0; i < max(s.size(),t.size()); i++)
{
    if (s[i]!=t[i])
    {
       su++;
    }
    
}
cout<<su<<endl;
}