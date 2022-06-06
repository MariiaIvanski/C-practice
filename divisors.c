#include <stddef.h>

//  assign divisors to *array
//  set *z to *array length

void divisors(unsigned n, size_t *z, unsigned *array) {

    int i;
    *z=0;
  
  for(i=2; i<=(n/2); ++i)
    {
    if(n%i == 0)
      {
      array[*z] = i;
      ++*z;
    }
  }

}