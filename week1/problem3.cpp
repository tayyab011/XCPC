
   
#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
set<char>s3;
for (int i = 0; i < s.size(); i++)
{
   s3.insert(s[i]);
}
string s2="abcdefghijklmnopqrstuvwxyz";
bool str=true;
string s4="";
for (char c:s3)
{
   s4+=c;
}
for (int i = 0; i <s2.size(); i++)
{
   if (s4[i]!=s2[i])
        {
            str = false;
            cout << s2[i];
            break;
        }
   
}
if (str)
{
   cout<<"None"<<endl;
} 

}