int findSecondMax(int arr[], int size);

int main(){
    int arr[15];
    int i, size;

    printf(" Input the size of the array (up to 15): \n");
    scanf("%d", &size);

    printf("Input %d elements in the array:\n",size);
       for(i=0; i<size; i++)
            {
	      printf("element %d : ",i);
	      scanf("%d",&arr[i]);
	    }

     

     printf("The 2nd largest number is %d", findSecondMax(arr, size));

}

int findSecondMax(int arr[], int size){
    int i, temp, temp2;
    
for(i=1; i<size; ++i)
{
    temp = arr[0];
    if(arr[i] > temp)
    {
    temp = arr[i];
            } 
}

        for(i=1; i<size; ++i)
        {
            temp2 = arr[0];
            if(arr[i] > temp2 && temp2 != temp){
                temp2 = arr[i];
            } 
        }
        return temp2;
}