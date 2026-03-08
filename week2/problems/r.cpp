#include <bits/stdc++.h>
using namespace std;


int main(){

ios::sync_with_stdio(false);
cin.tie(nullptr);
long long int t;
cin>>t;
while (t--)
{
    long long int n,x;
    cin>>n>>x;
    vector<long long int>ar(n);
    for (long long int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    long long int sure =0,parthokko=0;
    vector<long long int>arr;
    for (long long int i = 0; i < n; i++)
    {
        if (ar[i]>=x)
        {
           sure++;
           parthokko+=ar[i]-x;
        }else{
            arr.push_back(x-ar[i]);
        }
        
    }
    sort(arr.begin(),arr.end());
for (auto i:arr)
{
    if (parthokko>=i)
    {
        parthokko-=i;
sure++;
    }else{
        break;
    }
    
}
   cout<<sure<<endl;
    
}

}
