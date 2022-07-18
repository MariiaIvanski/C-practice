#include <assert.h>
#include <stddef.h>

int StringToInteger(const char *x)
{
    int ret = 0, sign = 1;
    assert(x != NULL);
    
    if(*x == '-')
    {
    sign = -1;
        ++x;
    }

    for (;*x >= '0' && *x <= '9'; ++x)
    {
        ret = ret * 10 + *x - '0';
    }
    
    return ret * sign;
}