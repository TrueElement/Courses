#include "generateObjects.hpp"


generateObjects::generateObjects() {
    current_id = 0;
}

std::vector<Bogie> * generateObjects::generate(int n, int b) {
    std::vector<Bogie> * to_return = new std::vector<Bogie>();
    for(int i = 0; i < n; i++) {
        
    }

    return to_return;
}

int generateObjects::getNextID() {
    current_id += 1;
    return current_id;
}

generateObjects::~generateObjects() {

}


