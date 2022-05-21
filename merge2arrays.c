void bubbleSort(int arr3[], int d_length);
void printArray(int arr3[], int d_length);

int main()
{
    int arr1[] = {0, 6, 5, 3, 4};
    int arr2[] = {2, 1, 8, 9, 7};
    int length = 5;
    int d_length = 10;
    int arr3[10];

   int i, j;

   for(i=0; i< length; i++){
       arr3[i] = arr1[i];
       printf("%d ", arr3[i]);
   }

   for (j=0; j < length; j++){
       arr3[j+length] = arr2[j];
       printf("%d ", arr3[j+length]);
   }
   
   printf("\n");
   
bubbleSort(arr3, d_length);
printArray(arr3, d_length);

}

void bubbleSort(int arr3[], int d_length){
int k, l;
    for (k=0; k < (d_length - 1); k++){

            for ( l = 0; l < (d_length - k -1); l++ ){
                    if (arr3[l] < arr3[l+1]) {
                        int temp = arr3[l];
                        arr3[l] = arr3[l+1];
                        arr3[l+1]= temp;
                    }
                }
    }
}

void printArray(int arr3[], int d_length) {
    int i;
  for ( i = 0; i < d_length; ++i) {
    printf("%d ", arr3[i]);
  }
}