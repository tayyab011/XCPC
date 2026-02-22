
#include<bits/stdc++.h>
using namespace std;

int main(){
long long int n;
cin>>n;
vector<long long int>ar(n);
 for (long long int i = 0; i < n; i++)
{
   cin>>ar[i];
} 
long long int ans=0;
for(int i = 0; i < n-1; i++){
        if(ar[i] > ar[i+1]){
            ans += ar[i] - ar[i+1];
            ar[i+1] = ar[i];
        }
    }
cout<<ans<<endl;

}