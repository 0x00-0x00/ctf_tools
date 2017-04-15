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

    char* encoded = b64_encode( (unsigned char*) argv[1], strlen(argv[1]));
    fprintf(stdout, "Encoded: %s\n", encoded);
    return 0;
}
