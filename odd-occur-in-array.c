int findNumber(int arr[], int length);

int main(){
    int arr[] = {9, 3, 9, 3, 9, 7, 9};
    int length = 7; 
    
findNumber(arr, length);
return 0;
}

int findNumber(int arr[], int length){
    int i, j, k= -1;
    for(i=0; i<length; i++){
    for(j=i+1; j<length; j++){
        if(arr[i] == arr[j]){
            arr[i] = k;
            arr[j] = k;
            break;
        }
    }    
}

for(i=0; i<length; i++){
    if(arr[i] != k){
        return arr[i];
    }
}
return 0;
}