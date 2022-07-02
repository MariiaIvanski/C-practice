#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int str_compare(const char *input, const char *menu);

char *get_order(const char *input)
{
    const char *menu[] = {"Burger", "Fries", "Chicken", "Pizza", "Sandwich", "Onionrings", "Milkshake", "Coke"};
    char *ret = malloc(2 * strlen(input) * sizeof(char));
    int count[8] = {0};
    int i = 0;
    int j = 0, k = 0;

    while (*input != '\0')
    {
        for (i = 0; i < 8; ++i)
        {
            if (str_compare(input, menu[i]) == 0)
            {
                ++count[i];
                input += strlen(menu[i]);
            }
        }
    }

    for (i = 0; i < 8; ++i)
    {
        for (k = 0; k < count[i]; ++k)
        {
            strcpy(&ret[j], menu[i]);            
            j += strlen(menu[i]);
            ret[j] = ' ';
            ++j;
        }
    }

    if (j < 1)
    {
        return NULL;
    }
    ret[j - 1] = '\0';
    return ret;
}

int str_compare(const char *input, const char *menu)
{
    int i = 0;

    for (i = 0; menu[i] != '\0'; ++i)
    {
        if (input[i] != tolower(menu[i]))
        {
            return 1;
        }
    }
    return 0;
}

