
struct Results {
  int * A;
  int N; // Length of the array
};

struct Results solution(int A[], int N, int K){
    int i;   
    struct Results Beta;
    K %= N;

    int *arrtemp;
    arrtemp = malloc(N*sizeof(int));
    for(i=0; i<N; i++)
    {
        arrtemp[i] = A[i];
    }

    for(i=0; i<N; i++)
    {
        int j;
        j = i + K;
        j %= N;
        A[j] = arrtemp[i];
    }
   
     free(arrtemp);
    Beta.A = A;
    Beta.N = N;
    
    return Beta;
};