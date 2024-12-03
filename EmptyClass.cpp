#include <iostream>
using namespace std;



class EmptyClass{

    //properties
    
};

int main(){
    cout <<"A person can define an empty class, and the size of that empty class object will generally be 1 byte in C++. This is because, even though the class doesn't have any properties or methods, the compiler still needs to allocate some memory to represent the object.\n";

    // creation of object
  
    EmptyClass e1;

    cout << "\nSize of EmptyClass object: " << sizeof(e1) << " bytes\n";

}