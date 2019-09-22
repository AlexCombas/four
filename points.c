#include <stdio.h>

int main (int argc, char *argv[]) {
        int i = 1;
        int *ptr = &i;
        printf("i    =   %d\n*ptr =   %d\n\n", i, *ptr);
        *ptr = 55;
        printf("i    =   %d\n*ptr =   %d\n\n", i, *ptr);
        i = 999;
        printf("i    =   %d\n*ptr =   %d\n\n", i, *ptr);
        return 0;
}
