#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

        // creation of map

        unordered_map<string, int> m;

        pair<string, int> p ={"scorpio" , 9};
        m.insert(p);
        cout<<m.at("scorpio")<<endl;
        m["audi"]=10;
        cout<<m["audi"]<<endl;

        if(m.find("audi")!=m.end()){
            cout<<"Found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }

        for(auto i: m){
            cout<<i.first<<"->"<<i.second<<endl;
        }


    return 0;
}