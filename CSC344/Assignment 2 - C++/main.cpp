#include <iostream>
#include <string.h>
#include <vector>
#include "bogie.hpp"
#include "generateObjects.hpp"

void processArguments(int argc, char **argv);
std::vector<Bogie> * generate(int n, int b);
void print(std::vector<Bogie> * objects);

int main(int argc, char **argv) {
    processArguments(argc, argv);
    return 0;
}

void processArguments(int argc, char **argv) {
    bool n_found = false;
    bool b_found = false;

    if(argc == 1) {
        std::cout << "Arguments Required." << std::endl;
    } else {
            for(int i = 0; i < argc; i++) {
                if(strcmp(argv[i],"-n") == 0) {
                    n_found = true;
                } else if(strcmp(argv[i], "-b") == 0) {
                    b_found = true;
                }
            }
    }

    if(n_found == false) {
        std::cout << "Missing required argument - -n" << std::endl;
    }

    if(b_found == false) {
        std::cout << "Missing required argument - -b" << std::endl;
    }
}

std::vector<Bogie> * generate(int n, int b) {
    generateObjects *gen;
    std::vector<Bogie> *to_return = new std::vector<Bogie>();
    if(n > 0 && b > 0) {
        gen = new generateObjects();
        to_return = gen->generate(n,b);
    }
    return to_return;
}

void print(std::vector<Bogie> *objects) {
    unsigned int i = 0;
    for(i = 0; i < objects->size(); i++) {
    
    }
}
