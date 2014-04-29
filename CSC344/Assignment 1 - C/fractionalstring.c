#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void fractionalstring(char *str, int start, int end);

int main(int argc, char **argv) {
    int start, end;
    char *str;
    if(argc > 4) {
        start = atoi(argv[1]);
        end = atoi(argv[2]);
        str = argv[3];

    } else {
        printf("%s\n", "Program Requires Three Arguments:");
        printf("\t%s\n", "1. String to operate on");
        printf("\t%s\n", "2. Character to start at");
        printf("\t%s\n", "3. Character to end at");
    }
    return 0;
}

void fractionalstring(char *str, int start, int end) {
    int i = 0;
    int buffer_size = end - start;
    for(i = start; i < end; i++) {

    }
}
