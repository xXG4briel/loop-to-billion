#include <stdio.h>
#include <time.h>

int main() {
    int billion = 1000000000;
    clock_t start_time = clock();

    for (int i = 0; i < billion; i++) {
    }

    clock_t end_time = clock();
    double elapsed_time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
    printf("%.3f segundos\n", elapsed_time);

    return 0;
}
