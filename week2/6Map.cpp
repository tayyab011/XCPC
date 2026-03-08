
   
#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
map<int,int>mp; //key ,value // it is sorted form 
mp.insert({11,20});
mp.insert({2,60});
mp.insert({3,6});
mp.insert({5,10});
cout<<mp[10]<<endl;;
cout<<mp[2]<<endl;;
for (auto i :mp)
{
   int key=i.first ,value=i.second;
   cout<<key<<" "<<value<<endl;
}


//what if when i find a val in map?
auto it =mp.find(26); // eikhne find wala num er ghor return hocche. pore oita theke -> eivabe kore key value paiteisi

if (it ==mp.end())
{
  cout<<"key not found"<<endl;
}else{
    cout<<it->first<<" "<<it->second<<endl;
}
cout<<mp[26]<<endl;
cout<<mp[6]<<endl;
for (auto i :mp)
{
   int key=i.first ,value=i.second;
   cout<<key<<" "<<value<<endl;
}
cout<<"---------------------"<<endl;
//if i need to erase any key i should have to use erase func
mp.erase(26);
for (auto i :mp)
{
   int key=i.first ,value=i.second;
   cout<<key<<" "<<value<<endl;
}

cout<<"---------------------"<<endl;
//task1 ekhn key ta mp e ase ki na jod theke thake tahole erase korba
auto ite =mp.find(5);
if (ite !=mp.end()) //NOTE[ na paile iterator ekebare end e eitai dhore nite hoy]
{
  mp.erase(5);
}
for (auto i :mp)
{
   int key=i.first ,value=i.second;
   cout<<key<<" "<<value<<endl;
}
cout<<"---------------------"<<endl;
auto itt=mp.lower_bound(2); //value thkle oitai dibe na thkle immediat boro value diye dibe
auto itt1=mp.upper_bound(3); //value thkle o oitar che boro valuer itr dibe na 
//thkleo oitar che boro valur itr return korbe

   cout<<itt->first<<" "<<itt->second<<endl;
   cout<<itt1->first<<" "<<itt1->second<<endl;

}