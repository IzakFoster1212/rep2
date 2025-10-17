#include <stdio.h>
int main(int argc, char** argv) {
    float numb[10];
    for(int i=9; i>=0; i--) {
        scanf("%f\n", &numb[i]);
    }
    for(int i=0; i<10; i++) {
        printf("%.3lf ", numb[i]);
    }
}
