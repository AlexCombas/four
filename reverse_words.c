#include <stdio.h>

int main (int argc, char *argv[]) {
        char words[68][41];
        for (int i=0; i<68; i++) {
                if (scanf("%s ", words[i])){};
        }

        for (int i=67; i>=0; i--) {
                printf("%s ", words[i]);
        }
        printf("\n");

        return 0;
}
