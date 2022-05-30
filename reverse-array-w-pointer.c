int reverseArray(int *ptr, int length);

int main(){
    int arr[]= {2, 3, 4, 5, 6};
    int length = 5;
    int *ptr;
    ptr = arr;

reverseArray(ptr, length);

}

int reverseArray(int *ptr, int length){
    int i; 
    int temp;

    for (i=0; i <= length/2; i++){
        temp = ptr[i];
        ptr[i] = ptr[length-i-1];
        ptr[length-i-1] = temp;
    }

     for(i=0; i<length; i++){
    printf("element %d : %d \n", i, ptr[i]);    
    }
}