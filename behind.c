#include <stdio.h>
#include <limits.h>

void behind (int*, int);

int main (int argc, char *argv[]) {
        int array[10];
        int N, i;

        if (scanf("%d", &N)){};

        for (i=0; i<N; i++) {
                if (scanf("%d", &array[i])){};
        }

        behind(array, N);

        for (i=0; i<N; i++) {
                printf("%d\n", array[i]);
        }
        return 0;
}

void behind(int *ptr, int num) {
        int i, largest, diff;
        largest = INT_MIN;
        for (i=0; i<num; i++) {
                if (ptr[i] >= largest) {
                        largest = ptr[i];
                }
        }

        for (i=0; i<num; i++) {
                diff = largest - ptr[i];
                ptr[i] = diff;
        }
}
