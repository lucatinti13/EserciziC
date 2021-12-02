/*quando invocheremo il nostro programma con 
elabora tutti_i_miei_comandi.txt
il valore di argv[0] sarà "elabora"
il valore di argv[1] sarà "tutti_i_miei_comandi.txt"
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {											//commento
	char nome_file[30];
	char riga_corrente[80];
	FILE *fh;
																			//char *pch;
	strcpy(nome_file, argv[1]);
	fh=fopen(nome_file, "r");
	while (fgets(riga_corrente,sizeof(riga_corrente),fh) != NULL){			// pch=fgets(riga_co}rrente,sizeof(riga_corrente),fh);
		printf("%s", &(riga_corrente[9]));					//& e 9 - dammi l'indirizzo del carattere con l'avanzamento									//if (pch==NULL) 
	}									
	fclose(fh);								
																		
			
}


/* FGETS
fgets()  reads  in  at most one less than size characters from stream and stores them into
       the buffer pointed to by s.  Reading stops after an EOF or a newline.   If  a  newline  is
       read,  it  is  stored into the buffer.  A terminating null byte ('\0') is stored after the
       last character in the buffer.

fgets() returns s on success, and NULL on error or when end of file occurs while no  char‐
       acters have been read.

*/