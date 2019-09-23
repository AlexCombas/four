#include <stdio.h>

int main (int argc, char *argv[]) {
        int a[] = {234, 655, 843};
        int b[] = {12, 62};
        int c[] = {3456, 3467, 23, 276};
        int *arrays[] = {a, b, c};

        *arrays[0] = 99;
        *(arrays[0] +1) = 2;
        arrays[0][2] = 3;

        *arrays[1] = 4;
        *(arrays[1] +1) = 5;

        *arrays[2] = 6;
        *(arrays[2] +1) = 7;
        arrays[2][2] = 8;
        arrays[2][3] = 9;

        unsigned long arrays_size = (sizeof(arrays)/sizeof(arrays[0]));
        printf("total array: %lu\n", arrays_size);

        printf("%p\n", a);
        printf("%p\n", arrays[0]);
        printf("%d\n", a[0]);
        printf("%d\n", arrays[0][0]);

        printf("%lu\n", sizeof(a));
        printf("%lu\n", sizeof(arrays[0]));

        //printf("%lu\n", sizeof(a)/sizeof(a[0]));
        //printf("%lu\n", sizeof(arrays[0])/sizeof(arrays[0][0]));

        printf("\n");



/*
        printf("%lu\n", sizeof(b)/sizeof(b[0]));
        printf("%lu\n", sizeof(arrays[1])/sizeof(arrays[1][0]));
        printf("\n");
        printf("%lu\n", sizeof(c)/sizeof(c[0]));
        printf("%lu\n", sizeof(arrays[2])/sizeof(arrays[2][0]));
        unsigned long i, j;
        for (i=0; i<arrays_size; i++) {
                unsigned long size = (sizeof(arrays[i])/sizeof(arrays[i][0]));
                for (j=0; j<size; j++) {
                        printf("%d", arrays[i][j]);
                }
                printf("\n");
        }
*/
        return 0;
}
