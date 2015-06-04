// Requeriments: megatools

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char const *argv[]) {
    if(argc > 1) {
        for(int i = 1; i < argc; i++) {
            char *command = (char *)malloc(snprintf(NULL, 0,"megadl '%s' &",argv[i]) + 1);
            sprintf(command,"megadl '%s' &",argv[i]);
            system(command);
        }
    } else {
        printf("Usage: ./megas link1 link2 link3 link4 linkn\n");
    }

    return 0;
}