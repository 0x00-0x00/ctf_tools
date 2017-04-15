#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "b64.h"

int main(int argc, char *argv[])
{
    if(argc < 2) {
        fprintf(stderr, "Uso: %s STRING", argv[0]);
        exit(1);
    }

    unsigned char* decoded = b64_decode(argv[1], strlen(argv[1]));
    fprintf(stdout, "Decoded: %s\n", decoded);
    return 0;
}
