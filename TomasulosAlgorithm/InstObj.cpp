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
    int CCToFinish;
    int index;
    bool isPlaceHolder;

    instObj(std::string inst, int reg1, int reg2, int reg3)
    {
        this->inst = inst;
        this->reg1 = reg1;
        this->reg2 = reg2;
        this->reg3 = reg3;
        this->index = -1;
        this->isPlaceHolder = false;
        this->CCToFinish = this->getCCToFinish(inst);
    }
    
    int getCCToFinish(std::string inst) {
        if (inst.compare("ADD") == 0) {
            return 2;
        }
        else if(inst.compare("SUB") == 0) {
            return 2;
        }
        else if(inst.compare("MUL") == 0) {
            return 10;
        }
        else if(inst.compare("DIV") == 0) {
            return 40;
        }
        else {
            std::cout << "Inavalid Inst name";
            return 100;
        }

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