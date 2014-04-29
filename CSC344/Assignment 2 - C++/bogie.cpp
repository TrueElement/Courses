#include "bogie.hpp"

Bogie::Bogie() {
    loc = std::make_pair(0,0);
    id = 0;
}

Bogie::Bogie(int b, int id) {
     this->b = b;
     this->id = id;
}

std::string Bogie::getIDString() {
    std::stringstream ss;
    char base_c_str[100];
    itoa(id, base_c_str, b);

    return ss.str();
}
int Bogie::getID() {
    return id;
}

int Bogie::getX() {
    return 0;
}

int Bogie::getY() {
    return 0;
}

Bogie::~Bogie() {

}






