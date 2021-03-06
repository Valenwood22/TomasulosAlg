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
    int rob;
    int instId;
    bool canWrite = false;

    instObj(std::string inst, int reg1, int reg2, int reg3, int instId)
    {
        this->inst = inst;
        this->reg1 = reg1;
        this->reg2 = reg2;
        this->reg3 = reg3;
        this->index = -1;
        this->rob = -1;
        this->isPlaceHolder = false;
        this->CCToFinish = this->getCCToFinish(inst);
        this->instId = instId;
    }
    
    int getCCToFinish(std::string inst) {
        if (inst.compare("ADD") == 0) {
            return 3;
        }
        else if(inst.compare("SUB") == 0) {
            return 3;
        }
        else if(inst.compare("MUL") == 0) {
            return 11;
        }
        else if(inst.compare("DIV") == 0) {
            return 41;
        }
        else {
            std::cout << "Inavalid Inst name";
            return 101;
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