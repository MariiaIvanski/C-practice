


int solution(int X, int A[], int N){
    int i, j = 1;
    

   int *arr2 =  calloc(sizeof(int), X + 1);

    for(i=0; i < N; ++i )
    {
        if(A[i] <= X)
        {
           arr2[A[i]] = 1;
             
        }
        for(j = 1; j <= X; ++j )
        {
            if(arr2[j] != 1)
            {
              break;
            }
        } 
        if(j == X + 1)
        {
            return i;
        } 
        
    
    }
    
   return -1;


}