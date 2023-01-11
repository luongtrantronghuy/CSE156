#include <stdio.h>

int main(int argc, char *argv[])  {
    for(int i = 0; i < argc; i++){
        printf("Arg is %s\n", argv[i]);
    }
    return 0;
    // Try getopt
}