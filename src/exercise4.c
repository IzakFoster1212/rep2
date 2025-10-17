#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    double x = atof(argv[1]);
    int a = atoi(argv[2]);
    double array[10];
    for(int i = 0; i < 10; i++) {
        scanf("%lf", &array[i]);
    }
    for(int i = 9; i > a; i--) {
        array[i] = array[i-1];
    }
    array[a] = x;
    for(int i = 0; i < 10; i++) {
        printf("%lf ", array[i]);
    }
    printf("\n");
    return 0;
}
