#include <iostream>
using namespace std;

class Hero{

    public:
    //properties - data member
    char name[100];
    int health = 0;
    int level = 0;
};



int main(){
    cout <<"here we just define a class\n";

    // creation of object
    Hero superman ;
    cout<<"Health is " << superman.health << endl;
    cout<<"Level is " << superman.level << endl;
    


}