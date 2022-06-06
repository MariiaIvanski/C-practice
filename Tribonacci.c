#include <stdlib.h>

//  return a dynamically allocated `long long` array of results

long long *tribonacci(const long long signature[3], size_t n) {

  size_t i;
  long long *ptr_arr;
  ptr_arr = malloc(n * sizeof(long long)); 

  if(n == 0){
    return NULL;
  }
  else if (ptr_arr != NULL){
        for(i=0; i<3; ++i){
          ptr_arr[i] = signature[i];
        }
        for(i=3; i < n; ++i){
          ptr_arr[i] = (ptr_arr[i-1] + ptr_arr[i-2] + ptr_arr[i-3]);
        }
  
}  
  for (i=0; i<n; ++i){
      return &ptr_arr[i];
    } 
  free(ptr_arr);
}