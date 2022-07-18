#include <assert.h>
#include <stddef.h>

int StringCompare(const char *str1, const char *str2){
    assert(str1 != NULL);
	assert(str2 != NULL);
    
 while(*str1 == *str2 && *str1 != '\0')
 {
     ++str1;
     ++str2;
 }
    
   return (*str1 - *str2); 
}