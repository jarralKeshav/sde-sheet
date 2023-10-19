#include<bits/stdc++.h>
using namespace std;



class Stud{
    public:
    string name;



    Stud(){
        name = "keshav inside default\n";
    }

    Stud(string s){
        cout<<"Inside paremeterized constuctor\n";
        name = s;

    }

    void display();
}obj;

void Stud::display(){
    cout<<"Name: "<<name;
}


int main()
{
    Stud std;
    std.display();

    std.display();

    Stud std2("Keshav ");
    std2.display();

    return 0;
}