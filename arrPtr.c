#include <stdio.h>

int main (int argc, char *argv[]) {
        int array[] = {6, 2, -4, 8, 5, 1};
        int *ptr, *ptr2;

        printf("Array cointains %d %d, ... %d\n", array[0], array[1], array[5]);
        printf("These are stored at\n%p %p %p\n", &array[0], &array[1], &array[5]);
        printf("Array is %p\n", array);


        ptr = array;
        ptr2 = &array[0];

        *ptr = 1;
        *(ptr+1) = 5;
        *(ptr+2) = 9;

        *array = 11;
        *(array +1) = 55;
        *(array +2) = 99;

        ptr++;
        *ptr = 555;


        return 0;
}
