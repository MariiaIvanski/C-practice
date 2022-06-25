#include <stdlib.h>

int find_outlier(const int *values, size_t count)
{
size_t i;
int is_odd;
if(((values[0] % 2 == 0) && (values[1] % 2 == 0)) || ((values[1] % 2 == 0) && (values[2] % 2 == 0)) || ((values[0] % 2 == 0) && (values[2] % 2 == 0)) )
    {
        is_odd = 1;
            } else {
            is_odd = 0;
}

for(i = 0; i < count; ++i)
{
if(values[i] %2 == is_odd || values[i] %2 == -is_odd)
{
return values[i];
}    
}
return 0;
}

