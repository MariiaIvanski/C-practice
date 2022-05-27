int findNumber(int A[], int N);

int main(){
    int A[] = {9, 3, 9, 3, 9, 7, 9};
    int N = 7; 
    
findNumber(A, N);
return 0;
}

int findNumber(int A[], int N){
    int i, odd = 0;
    for(i=0; i<N; i++){
    odd ^= A[i];
}
        return odd;
    

return 0;
}