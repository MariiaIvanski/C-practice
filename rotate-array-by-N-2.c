#include <stdio.h>
#include <stdlib.h>

int rotateArr(int *array1, int length, int N);
void printArr(int *array1, int length);

int main(){
    int arr1[]= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = 10;
    int N = 5; 

rotateArr(arr1, length, N);
printArr(arr1, length);

}

int rotateArr(int *array1, int length, int N){
    int i;
    int *array2 = malloc(length*sizeof(int));

    N %= length;

    for (i= N; i >= 0; --i){
        array2[length - i - 1] = array1[N - i - 1];
    }
    for (i=0; i < length - N; ++i){
        array2[i] = array1[N+i];
    }
    
    for(i=0; i<length; ++i){
        array1[i] = array2[i];
    }
    
    free(array2);
    }

void printArr(int *array1, int length){
int i;
for(i=0; i< length; ++i){
    printf("%d ", array1[i]);
}
}