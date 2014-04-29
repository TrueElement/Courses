#ifndef GENERATE_OBJECTS_H
#define GENERATE_OBJECTS_H
#include <vector>
#include "bogie.hpp"

class generateObjects {
    public:
        generateObjects();
        std::vector<Bogie> * generate(int n, int b);
        ~generateObjects();
    private:
        int current_id;
        int getNextID();
};
#endif
