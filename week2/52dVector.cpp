
#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int r,c;
cin>>r>>c;
vector<vector<int>>ar(r,vector<int>(c));
for (int i = 0; i < r; i++)
{
   for (int j = 0; j < c; j++)
   {
   cout<<ar[i][j]<<" ";
   }
   cout<<endl;
}


int n;
cin>>n;
vector<string>ve;
for (int i = 0; i < n; i++)
{
    string s;
    cin>>s;
    ve.push_back(s);
}
for (int i = 0; i < n; i++)
{
/*   cout<<ve[i]<<" "; */
for (int j = 0; j < ve[i].size(); j++)
{
    cout<<ve[i][j]<<" ";
}
cout<<endl;
}


}