#include <stdio.h>

int main() {
    for (int i = 1; i <= 20; i += 1) {
        printf("%d/n", i);
        if (i <20) {
            printf(", ");
        }
    }
    printf("/n");
    return 0;
}