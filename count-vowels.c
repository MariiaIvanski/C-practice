int isVowel(char arr1[], char arr2[]);

int main(){
    char vowels[] = "aeouiAEOUI";
    char mystr[] = "string";
    char *ptr1;
    char *ptr2;
    ptr1 = vowels;
    ptr2= mystr;
    int voweltotal;

voweltotal = isVowel(ptr1 , ptr2);
printf("total vowels: %d", voweltotal);

}

int isVowel(char ptr1[], char ptr2[]){
int i, j, total;

total = 0;
for (i=0; ptr2[i] != '\0'; i++)
{
for (j = 0; ptr1[j] != '\0'; j++)
{
    if (ptr2[i] == ptr1[j]){
        total++;
    }
}
}
return total;
}