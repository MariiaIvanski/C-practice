int isEven(int array[], int length);

int main(){
    int arrMixed[] = {1, 3, 23, 44, 12, 9};
    int length = 6;

isEven(arrMixed, length);

}

int isEven(int array[], int length){
int i, even = 0, odd = 0;
int arrOdd[6];
int arrEven[6];


for ( i= 0; i< length; i++){
    if(array[i]%2 == 0){
        arrEven[even] = array[i];
        even++;
    } else {
        arrOdd[odd] = array[i];
        odd++;
    }
}


for (i = 0; i < even; i++){
    printf("Even element %d : %d\n", i, arrEven[i]);
}



for (i = 0; i < odd; i++){
    printf("Odd element %d : %d\n", i, arrOdd[i]);
}

}