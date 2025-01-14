#include<bits/stdc++.h>
using namespace std;

class Animal{
//   state
    private:
    int weight;
  public:  
    int n;
    string a;
    bool p;

    // behaviour
    void eat(){
        cout<<"He eats kids"<<endl;
    }
    void sleep(){
        cout<<"Her eats baby"<<endl;
    }
    // TO ACCESS PRIVATE MODIFIER
    int getWeight(){
        return weight;
    }
    void setWeight(int w){
        weight=w;
    }

};

int main(){
//     Animal ra;
//     ra.n= 221;
//     ra.a = 331;

// cout<<"n is:"<<ra.n<<endl;
// cout<<"Size of: "<<ra.a<<endl;
// ra.eat();
// ra.sleep();
//     ra.setWeight(99);
//     cout<<"weight"<<ra.getWeight()<<endl;

// Dynamic Memory

Animal* Arpit= new Animal;

        Arpit->n=17;
        Arpit->a="kutta";
        cout<<Arpit->a;

        




    return 0;
}