

int main(){
    int arr[] = {5, -3, 7, 9};
    int len = 4;
int i;
int max = arr[0];
int min = arr[0] ;

    for (i=1; i<len; i++){
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("max: %d, min: %d\n", max, min);
}