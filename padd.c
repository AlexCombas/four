#include <stdio.h>

void myFunction(int*, double*, char*);

int main (int argc, char *argv[]) {
        int i = 42;
        int *iAdr = &i;
        double a = 3.14;
        double *aAdr = &a;
        char c = 'g';
        char *cAdr;
        cAdr = &c;
        printf("i = %d and its address is %p\n", i, iAdr);
        printf("a = %lf and its address is %p\n", a, aAdr);
        printf("c = %c and its address is %p\n", c, cAdr);
        myFunction(iAdr, aAdr, cAdr);
        return 0;
}

void myFunction(int *iptr, double *dptr, char *cptr) {
        printf("function recieved memory addresses:\n%p %p %p\n", iptr, dptr, cptr);
}
