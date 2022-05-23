int bubblesort(int array[], int length);


int main(){
    int arr[] = {5, -3, 7, 9};
    int len = 4;

    bubblesort(arr, len);
    
}

int bubblesort(int array[], int length){
    int i, j;
    for(i=0; i<length; i++)
    {
        for(j=0; j<(length-i-1); j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
printf("the min number is %d, \nthe max number is %d\n", array[0], array[length-1]);
}