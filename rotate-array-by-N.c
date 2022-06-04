int rotateArr(int *array1, int *array2, int length, int N);
void printArr(int *array2, int length);

int main(){
    int arr1[]= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = 10;
    int N = 44; 
    int arr2[10];

rotateArr(arr1, arr2, length, N);
printArr(arr2, length);

}

int rotateArr(int *array1, int *array2, int length, int N){
    int i;

    N %= length;

    for (i= N; i >= 0; --i){
        array2[length - i - 1] = array1[N - i - 1];
    }
for (i=0; i < length - N; ++i){
    array2[i] = array1[N+i];
}
}

void printArr(int *array2, int length){
int i;
for(i=0; i< length; ++i){
    printf("%d ", array2[i]);
}
}