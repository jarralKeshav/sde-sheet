#include<bits/stdc++.h>
using namespace std;

class Abstraction{

    private:
    int a,b;

    public:

    void set(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"a: "<<a<<"\n";
        cout<<"b: "<<b<<"\n";
        
    }
};

int main(){

    Abstraction obj;
    obj.set(100,200);
    obj.display();

    return 0;
}