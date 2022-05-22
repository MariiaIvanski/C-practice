

int main()
{
    char mystr[] = "Hello!";
    int length = strlen(mystr);
    char *ptr;
    ptr = &mystr;
int i;
for (i=0; i < length; i++)
{
    ptr[i] = ptr[i+1];
    printf("%c", ptr[i]);
}
}

