#include <stdio.h>
#include <math.h>

void printArrayShort(int *array, int length) {
    int *x;
    x = array;
    short *y;
    y = (short *) array;
    for (int i=0; i < 2*length; i++) {
        printf("%d ", *(y + i));
    }
}

int main(int argc, const char* argv[]) {
    int array[] = {65537,65536,456454,586789,58678};
    int length = sizeof(array)/sizeof(int);

    for (int i=0; i < length; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
    printArrayShort(array,length);

    return 0;
}

