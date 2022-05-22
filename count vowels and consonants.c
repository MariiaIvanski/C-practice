
int main(){

    char mystr[] = "qaAa";
    char *ptr1;
    ptr1 = mystr;
    
int itsvow;
int itscons;
int i;

itsvow = 0;
itscons = 0;

for (i = 0; ptr1[i] != '\0'; i++)
{
if(ptr1[i] == 'A' || ptr1[i] == 'E' || ptr1[i] == 'I' || ptr1[i] == 'O' || ptr1[i] == 'U' || ptr1[i] == 'a' || ptr1[i] == 'e' || ptr1[i] == 'i' || ptr1[i] == 'o' || ptr1[i] == 'u')
{
    itsvow++;
}
else
{
    itscons++;
}
}

printf("Number of vowels: %d , Number of consonants: %d \n" ,itsvow, itscons);
return 0;

}