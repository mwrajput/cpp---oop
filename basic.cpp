#include <iostream>
// #include "hero.cpp"

using namespace std;

class Hero{

    //properties
    char name[100];
    int health;
    int level;
};

class EmptyClass{

    //properties
    
};

int main(){
    cout <<"here we just define a class\n";

    // creation of object
    Hero h1;
    EmptyClass e1;

    // cout<<"Size : " << sizeof(h1);
    cout<<"Size : " << sizeof(e1);

}