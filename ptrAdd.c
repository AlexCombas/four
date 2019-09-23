#include <stdio.h>

void add (int, int, int*);

int main (int argc, char *argv[]) {
        int a, b, sum;
        printf ("Please enter two ints: ");
        if (scanf ("%d %d", &a, &b)){};
        add (a, b, &sum);
        printf ("%d + %d = %d\n", a, b, sum);
        return 0;
}

void add (int x, int y, int *sum) {
        *sum = x+y;
        printf ("Added numbers!\n");
}
