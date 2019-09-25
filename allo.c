#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

int32_t * allocateIntArray (int32_t);
double findAverage(int32_t *, int32_t);

int main (void) {
        int32_t num;
        int32_t *array;
        double average;
        printf("How many grates would you like to enter? ");
        if (scanf("%" PRId32 "", &num)){};
        array = allocateIntArray (num);
        printf("Please enter %" PRId32 " grades: ", num);
        for (int32_t i=0; i<num; i++) {
                if (scanf("%" PRId32 "", array+i)){};
        }
        average = findAverage(array, num);
        printf("The average age is %.2lf\n", average);
        free(array);
        return 0;
}

int32_t * allocateIntArray (int32_t n) {
        int32_t *ptr = (int32_t *) malloc(n * sizeof(int32_t));
        return ptr;
}

double findAverage(int32_t *a, int32_t n) {
        double average = 0.0;
        for (int32_t i=0; i<n; i++) {
                average += a[i];
        }
        average /= n;
        return average;
}
