#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// return must be an allocated string to be freed by the tester

char *likes(size_t n, const char *const names[n]) {

  int l = n;
  char *ch = NULL;
  
switch (l)
{
case 0:
ch = malloc( (strlen("no one likes this") + 1) * sizeof(char));
sprintf(ch, "no one likes this");
    break;

case 1:
ch = malloc( (strlen(" likes this") + (strlen(names[0])) + 1) * sizeof(char));
sprintf(ch, "%s likes this" , names[0]);
    break;
    
case 2: 
ch = malloc( (strlen("  and like this") + (strlen(names[0])) + (strlen(names[1])) + 1) * sizeof(char));
sprintf(ch, "%s and %s like this", names[0], names[1]);
    break;

case 3:
ch = malloc( (strlen(",    and like this") + (strlen(names[0])) + (strlen(names[1])) + (strlen(names[2])) + 1) * sizeof(char));
sprintf(ch, "%s, %s and %s like this", names[0], names[1], names[2]);
    break;

default:
ch = malloc( (strlen(",  and 2 others like this") + (strlen(names[0])) + (strlen(names[1])) + 1) * sizeof(char));
sprintf(ch, "%s, %s and %d others like this", names[0], names[1], (n-2));
    break;
}

return ch;

}