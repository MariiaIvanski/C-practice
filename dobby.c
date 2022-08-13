#include <stdlib.h> /* malloc */
#include <string.h> /* strcpy, strlen */
#include <assert.h> /* assert */
#include <stdio.h> /* puts */

typedef char ELF;
void FreeDobby(char *sock);

int main()
{	
	char sock[] = "Socks are Dobby’s favorite, favorite clothes, sir!";
	FreeDobby(sock);
	
	return 0;
}


void FreeDobby(char *sock)
{
	size_t sock_length;
	ELF *dobby = NULL;
	
	assert(NULL != sock);
	
	sock_length = strlen(sock) + 1;
	dobby = (ELF *) malloc (sock_length * sizeof(ELF));
	strcpy(dobby, sock);
	
	puts(dobby);
	
	free(dobby);
	
	dobby = NULL;
	
	if(NULL == dobby)
	{
		puts("Master has given Dobby a sock. Master has presented Dobby with clothes. Dobby is free!");
	}
}
