#include <stdio.h>
int main() {
    double array[10];
    double s = 0;
    for(int i = 0; i < 10; i++) {
        scanf("%lf", &array[i]);
        s += array[i];
    }
    printf("%.3lf\n", s / 10);
    return 0;
}
