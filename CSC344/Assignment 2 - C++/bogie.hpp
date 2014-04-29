#ifndef BOGIE_H
#define BOGIE_H
#include <utility>
#include <string>
#include <sstream>
#include <stdlib.h>

class Bogie {
    public:
        Bogie();
        Bogie(int b, int id);
        std::string getIDString();
        int getID();
        int getX();
        int getY();
        ~Bogie();
    private:
        int id;
        int b;
        std::pair<int,int> loc;
};
#endif
