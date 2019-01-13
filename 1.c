#include <stdio.h>
#include <math.h>
int calculateSquareEquality(int a, int b, int c){
    int D;
    D =  b * b - 4 * a * c; // Считаем дискриминант
    if (D > 0){
        return 1;
    } else if (D == 0){
        return 0;
    } else {
        return -1;
    }

}
/*
int main(int argc, const char* argv[]) {
    int a, b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("%d",calculateSquareEquality(a,b,c));
    return 0;
}
 */