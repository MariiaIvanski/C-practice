
struct Results {
  int * A;
  int N; // Length of the array
};

struct Results solution(int A[], int N, int K){
    int i;
    int k;
    int last;
    struct Results Beta;
    K %= N;

    for (k=0; k<K; k++)
    {
        last = A[N-1];
        for (i=0; i< N - 1; i++)
        {
            A[N-1-i] = A[N-2-i];
        }
        A[0] = last;
    }
     
     
    Beta.A = A;
    Beta.N = N;
    
    return Beta;
};