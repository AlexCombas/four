#include <stdio.h>

void reverse(int*);

int main (int argc, char *argv[]) {
        int i;
        int arr[6];
        for (i=0; i<6; i++) {
                if (scanf ("%d", &arr[i])){};
        }
        reverse (arr);
        for (i=0; i<6; i++) {
                printf ("%d ", arr[i]);

        }
        printf ("\n");

        return 0;
}

void reverse(int ptr[]) {
        int tmp[6];
        int i, x;
        for (i=0; i<6; i++) {
                tmp[i] = ptr[i];
        }
        x=5;
        for (i=0; i<6; i++) {
                ptr[i] = tmp[x];
                x--;
        }
}
