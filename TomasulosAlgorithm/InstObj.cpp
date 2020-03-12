#include <string>
#include <iostream>

class instObj
{
    // Access specifier 
public:

    // Data Members 
    std::string inst;
    int reg1;
    int reg2;
    int reg3;

    instObj(std::string inst, int reg1, int reg2, int reg3)
    {
        this->inst = inst;
        this->reg1 = reg1;
        this->reg2 = reg2;
        this->reg3 = reg3;
    }
    

    // Member Functions() 
    std::string print()
    {
        std::string s = this->inst + " R" + std::to_string(this->reg1) + " R" + std::to_string(this->reg2) + " R" + std::to_string(this->reg3);
        return s;
    }
};

//int main() {
//
//    // Declare an object of class geeks 
//    instObj inst1 = instObj("Add", 1,1,1);
//
//    // accessing member function 
//    inst1.printname();
//    return 0;
//}