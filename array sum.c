
int sumElem(int *arr, int n);

int main(){
int arr[3]= {5, 3, 12};
int n = 3; 

sumElem(arr, n);
}

int sumElem(int *arr, int n){
    int sum, i;
    sum = 0;
    
    for (i = 0; i < n; i++)
    {
    sum += arr[i];
    }
    printf("The sum is: %d \n", sum);
}