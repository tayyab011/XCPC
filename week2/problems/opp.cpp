#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>>t;
deque<string> dq;
set<string> st;
while(t--)
{
    string s;
    cin>>s;

    if(st.count(s))
    {   auto i=find(dq.begin(), dq.end(), s);
        dq.erase(i);
    }
    dq.push_front(s);
    st.insert(s);
}

for(auto x : dq)
    cout<<x<<endl;
}