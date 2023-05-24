#include<iostream>
#include<map>

using namespace std;

int main(){

    map<int,string> m;

    m[1] = "Akhil";
    m[5] = "kumar";
    m[9] = "Puran";

    m.insert({7,"chutki"});

    cout<<"Before erase "<<endl;

    for( auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    m.erase(7);

    cout<<"After erase "<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl<<endl;

    auto it = m.find(5);

    for(auto i = it; i!=m.end(); i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
}