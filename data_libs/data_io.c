#include "data_io.h"

#include <stdio.h>

void input(double *data, int n) {
    for (int i = 0; i < n; i++) {
        if (scanf("%lf", &data[i]) != 1) printf("n/a");
    }
}

void output(double *data, int n) {
    for (int i = 0; i < n; i++) {
        printf("%0.2f", data[i]);
        if (i < n - 1) printf(" ");
    }
}