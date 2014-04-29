
#include <stdio.h>
#include <string.h>

void toupper_custom(char *str);
void tolower_custom(char *str);
void swapcase(char *str);

int main(int argc, char** argv) {
    if(argc > 1) {
        if(strcmp(argv[1], "-u") == 0) {
            toupper_custom(argv[2]);
        } else if(strcmp(argv[1], "-l") == 0) {
            tolower_custom(argv[2]);
        } else if(strcmp(argv[1], "-s") == 0) {
            swapcase(argv[2]);
        } else {
            toupper_custom(argv[1]);
        }
    } else {
        printf("%s", "This Program Requires Arguments.");
    }
    return 0;
}


void toupper_custom(char *str) {
    int len = strlen(str);
    int i = 0;
    for(i = 0; i < len; i++) {
        if(str[i] >= 97 && str[i] <= 122) {
            str[i] -= 32;
        }
    }
    printf("%s", str);
}

void tolower_custom(char *str) {
    int len = strlen(str);
    int i = 0;
    for(i = 0; i < len; i++) {
        if(str[i] >= 65 && str[i] <= 90) {
            str[i] += 32;
        }
    }
    printf("%s", str);
}

void swapcase(char *str) {
    int len = strlen(str);
    int i = 0;
    for(i = 0; i < len; i++) {
        if(str[i] >= 65 && str[i] <= 90) {
            str[i] += 32;
        } else if(str[i] >= 97 && str[i] <= 122) {
            str[i] -= 32;
        }
    }
    printf("%s", str);
}

