#include <stddef.h>
#include <assert.h>

size_t StringLength(const char *str){
size_t ret = 0;
    
    assert(str);
    
    while(*str != '\0'){
     ++str;
     ++ret;
    }
    
    return ret;
}