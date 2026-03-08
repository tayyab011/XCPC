
   
#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin>>t;
while (t--)
{
    stack<pair<char,int>>boro,choto;
    string s;
    cin>>s;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i]>='A' && s[i]<='Z')
    {
       if (s[i]=='B')
       {
        if (!boro.empty())
        {
           boro.pop();
        }
        
       }else{
        boro.push({s[i],i});
       }
       
    }
    

if (s[i]>='a' && s[i]<='z')
    {
       if (s[i]=='b')
       {
        if (!choto.empty())
        {
           choto.pop();
        }
        
       }else{
        choto.push({s[i],i});
       }
       
    }


  }
  

  string s1(s.size(),'*');
while (!boro.empty())
{
   s1[boro.top().second]=boro.top().first;
   boro.pop();
  

}
while (!choto.empty())
{
   s1[choto.top().second]=choto.top().first;
   choto.pop();

}

for (auto i :s1)
{
  if (i!='*')
  {
    cout<<i;
  }
 
}
 cout<<endl;
}

}