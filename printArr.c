#include <stdio.h>

void printArray(int*, int);
void squarArray(int*, int);

int main(int argc, char *argv[]) {
        int array[] = {6, 2, -4, 8, 5, 1};
        int N = 6;
        printArray(array, N);
        squarArray(array, N);
        printArray(array, N);
        return 0;
}

void printArray (int *ptr, int size) {
        int i;
        for(i=0; i<size; i++) {
                //printf("%d ", *(ptr+i));
                printf("%d ", ptr[i]);
        }
        printf("\n");
}

void squarArray(int *ptr, int size) {
        int i;
        for (i=0; i<size; i++) {
                ptr[i] = ptr[i] * ptr[i];
        }
}
