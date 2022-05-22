int StrLen(char *str)
{
    int i;
    for (i=0; *str != "\0"; i++, str++) {
    }
    return i - 1;
}

int main(){
    char mystr[] = "w3resource";
    char *ptr = mystr;

    StrLen(mystr);
}