#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* duplicar(char* s) {
    int n = strlen(s);
    char* d = (char*) malloc ((n+1)*sizeof(char));
    
    int i;
    for (int i=0; s[i] != '\0'; i++) {
        d[i] = s[i];
    }

    return d;
}

int main (void)
{

char s[] = "teste";

printf("String original %s\n", s);
printf("String duplicada %s\n", duplicar(s));






return 0;
}
