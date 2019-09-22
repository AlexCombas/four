#include <stdio.h>

int main (void) {
        int i = 42;
        int *iAdr;
        iAdr = &i;
        double d = 3.14;
        double *dAdr = &d;
        char c = 'g';
        char *cAdr = &c;
        printf("Address i = %p\nValue   i = %d\n\n", iAdr, *iAdr);
        printf("Address d = %p\nValue   d = %lf\n\n", dAdr, *dAdr);
        printf("Address c = %p\nValue   c = %c\n\n", cAdr, *cAdr);
        return 0;
}
