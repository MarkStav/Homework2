#include <stdio.h>
#include <math.h>
int setArray(int* array, int length){
    int count = 0;
    for ( int i = 0; i < length; i++) {
        if (array[i] % 2 == 1)
            count++;
    }
    if (count == 0)
        return 0;
    else {
        for ( int i = 0; i < length; i ++){
            if ( array[i] % 2 == 1)
                array[i] *= 2;
        }
        return 1;
        }

}
/*
int main(int argc, const char* argv[]) {
    int length;
    printf("Введите длину массива:  ");
    scanf("%d",&length);
    int arr[length];
    printf("Введите элементы массива:  ");
    for ( int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }
    if (setArray(arr,length) == 1){
        for ( int i = 0; i < length; i ++)
            printf("%d  ",arr[i]);

    }
    return 0;
}
 */
