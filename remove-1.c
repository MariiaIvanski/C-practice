

int main(){
    int arr[15];
    int position, i, size;

    printf(" Input the size of the array (up to 15): \n");
    scanf("%d", &size);

    printf("Input %d elements in the array:\n",size);
       for(i=0; i<size; i++)
            {
	      printf("element %d : ",i);
	      scanf("%d",&arr[i]);
	    }

    printf(" Input which # element to remove: \n");
    scanf("%d", &position);

    for(i = (position - 1); i<size; i++){
        arr[i] = arr[i+1];
    }
        size--;

            for (i=0; i < size; i++){
                printf("element %d : %d \n", i, arr[i]);
            }
}