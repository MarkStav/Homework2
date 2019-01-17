#include <stdio.h>
#include <math.h>
int calculateSquareEquality(int a, int b, int c, float *x1, float *x2){
    int D;
    D =  b * b - 4 * a * c; // Считаем дискриминант
    if (D > 0){
        *x1 = (-b + sqrt(D))/ (2.0 * a);
        *x2 = (-b - sqrt(D))/ (2.0 * a);
        return 1;
    } else if (D == 0){
        *x1 = -b / (2.0 * a);
        *x2 = *x1;
        return 0;
    } else {
        return -1;
    }
    
}

int main(int argc, const char* argv[]) {
    int a, b,c,res;
    float x1, x2;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    res = calculateSquareEquality(a,b,c, &x1, &x2);
    if (res == 1){
        printf("Уравнение имеет 2 корня: %.2f, %.2f." , x1,x2);
    } else if (res == 0){
        printf("Уравнение имеет 1 корень: %.2f.", x2);
    } else {
        printf("Уравнение не имеет корней.");
    }
    return 0;
}
