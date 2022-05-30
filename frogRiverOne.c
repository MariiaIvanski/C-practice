int solution(int X, int A[], int N);

int main(){
    int arr[] = {1, 3, 1, 4, 2, 3, 5, 4};
    int length = 7;
    int max = 5;

    int jump = solution(max, arr, length);
    printf("time to jump: %d", jump);
}

int solution(int X, int A[], int N){
    int i;
    int temp = 0;
    for(i=0; i<N; i++){
        if(A[i] == X){
            temp = i;
            break;
        }
        return temp;
    }
}