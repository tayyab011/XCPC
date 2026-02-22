#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

pair<string,int>student{"karim",10};
/*1 type cout */
cout<<student.first<<" "<< student.second<<endl; 
// 2 type cout auto [name,roll]=student;
/* cout<<name<<roll<<endl; */


//3 pair s array

pair<string,int>students[5];
/* for (int i = 0; i < 5; i++)
{
   cin>>students[i].first>>students[i].second;
} */
/* for (auto [x,y]:students)
{
    cout<<x<<y
} */
for (auto i:students)
{
  cout<<i.first <<" "<<i.second<<endl;
}



// touple

tuple<string,int,string>t{"rohim",10,"01711536240"};
cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t);


//advance pair nested loop
pair<string,pair<int,string>>p{"tayyab",{1,"01644"}};
string name=p.first;
int roll=p.second.first;
string num=p.second.second;
cout<<name<<" "<<roll<<" "<<num;
}