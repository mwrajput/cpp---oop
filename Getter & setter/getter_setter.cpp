#include <iostream>
using namespace std;

class Hero{
    //properties - data member
    private:
    int health = 0;

   
    public:

    char level;
    
    int getHealth(){
        return health;
    }

    void setHealth(int h){
        health = h;
    }

    char getLevel(){
        return level;
    }

    void setLevel(char ch){
        level = ch;
    }



};



int main(){

// Creation of object
    Hero superman;

    int inputHealth;
    // cout << "Enter health for Superman: ";
    // cin >> inputHealth; // Read input into a temporary variable
    inputHealth = 100;
    superman.setHealth(inputHealth); // Set the health using the setter method  

    // Get the health using the getter method  
    cout << "Health is " << superman.getHealth() << endl;


// --------------------------------------------------------------

    char inputLevel;

    inputLevel = 'A'; 
    superman.setLevel(inputLevel);

    cout << "Superman is " << superman.getLevel() << " Hero" << endl;


    return 0;

}


// 1. Padding is introduced in memory allocation to ensure proper alignment of data within structures. CPUs have specific memory alignment requirements for different types of data. When you have a structure containing different data types, the compiler might insert "padding bytes" between members to align them according to the CPU's requirements. 

// 2. Greedy alignment refers to the practice of arranging the members of a structure or class in such a way that padding is minimized. By placing members with larger alignment requirements before those with smaller alignment requirements, you can potentially reduce the amount of padding required.
// In languages like C++, where memory layout has a significant impact on performance due to cache lines and memory access patterns, arranging members to minimize padding can lead to better memory utilization and potentially improved runtime efficiency.