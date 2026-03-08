
   
#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
multiset<int>st;
for (int i = 0; i < n; i++)
{
   int x;
   cin>>x;
   st.insert(x);
}
auto it  = st.find(5);
st.erase(it);

for (auto it :st)
{
   cout<<it<<" ";
}
cout<<endl;
cout<<st.count(1);
}