
   
#include<bits/stdc++.h>
using namespace std;

int main(){
int n,k;
cin>>n>>k;
vector<int>ar(n);
int mx=INT_MIN;
for (int i = 0; i < n; i++)
{
   cin>>ar[i];
if (ar[i]>mx)
{
   mx=ar[i];
}

}
if(mx==0 && k==0) {
    cout<<1<<endl;
    return 0;
}
vector<int>ar2;
for (int i = 0; i <=mx; i++)
{
    if(i==k)continue;
  ar2.push_back(i);
   
}
cout<<ar2.size()-ar.size()<<endl;
}