#include <stdio.h>

void setToZero(short **);
int main (int argc, char *argv[]) {
        short a[3] = {1245, 1924, 234};
        short b[2] = {24, 256};
        short *t[2] = {a, b};
        setToZero(t);
        return 0;
}
void setToZero(short ** t) {
        t[0][0] = 0;
        t[0][1] = 0;
        t[0][2] = 0;
        t[1][0] = 0;
        t[1][1] = 0;


/*        *(*t) = 0;
        *((*t) +1) = 0;
        *((*t) +2) = 0;
        *(*(t+1)) = 0;
        *(*(t+1) +1) = 0;
        */
}
