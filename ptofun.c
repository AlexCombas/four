#include <stdio.h>

void timesTwo(int*);

int main (int argc, char *argv[]) {
        int n;
        printf ("Please enter an integer: ");
        if (scanf ("%d", &n)){};
        printf ("In main: you entered %d.\n", n);
        timesTwo (&n);
        printf ("In main: the value of n is %d.\n", n);
        return 0;
}

void timesTwo (int *numptr) {
        printf("In func: the num is %d\n", *numptr);
        *numptr *= 2;
        printf("In func: the num is %d\n", *numptr);
}
