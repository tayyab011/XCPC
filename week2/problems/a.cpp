#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    int l=0, r=n-1;
    int s=0, d=0;

    while(l <= r){

      
        if(ar[l] > ar[r]){
            s += ar[l];
            l++;
        }else{
            s += ar[r];
            r--;
        }

       
        if(l > r) break;


        if(ar[l] > ar[r]){
            d += ar[l];
            l++;
        }else{
            d += ar[r];
            r--;
        }
    }

    cout<<s<<" "<<d<<endl;
}