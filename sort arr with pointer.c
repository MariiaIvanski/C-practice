int bubblesort(int *ptr, int length);
void printarray(int *ptr, int length);


int main(){
    int arr[] = {5, -3, 7, 9};
    int len = 4;
    int *ptr;
    ptr = arr;

    bubblesort(ptr, len);
    printarray(ptr, len);
    
}

int bubblesort(int *ptr, int length){
    int i, j;
    for(i=0; i<length; i++)
    {
        for(j=0; j<(length-i-1); j++)
        {
            if(ptr[j] > ptr[j+1])
            {
                int temp = ptr[j];
               ptr[j] = ptr[j+1];
                ptr[j+1] = temp;
            }
        }
    }

}

void printarray(int *ptr, int length){
    int i;
    for(i=0; i<length; i++){
    printf("%d \n", ptr[i]);    
    }
    
}