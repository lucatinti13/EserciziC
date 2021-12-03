/*
Ho scritto un articolo per un giornale. Ho usato il formato solo testo.
L'articolo è stato accettato!
Per stamparlo mi viene però richiesto di ri-organizzarlo in righe di non più di 30 caratteri 
affinchè possa essere inserito come colonna in una pagina della prossima uscita del giornale.

Scrivi un programma che accetti due parametri:

    il nome del file contenente l'articolo originale
    il numero massimo di caratteri per riga

Il programma deve emettere sullo standard output le righe riorganizzate secondo quanto richiesto
e restituire, come valore di ritorno, il numero totale delle stesse.
*/

/*
git add .
git commit -m "aggiornamento"
git push        		(poi inserire le credenziali se necessario)
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {											
				/*char nome_file[30];*/
	char riga_corrente[80];
	FILE *fh;
	if(argc<2){
		printf("Passare il nome file come argomento\n");
		exit(-1);
	}
	fh=fopen(argv[1], "r");
				/*fh=fopen(nome_file, "r");*/
	if(fh==NULL){
		printf("Passare un nome file esistente\n");
		exit(-2);
	}
	while (fgets(riga_corrente,sizeof(riga_corrente),fh) != NULL){	
		printf("%s", &(riga_corrente[9])); 
	}									
	fclose(fh);								
	
	return(0);	
			
}


/* FGETS
fgets()  reads  in  at most one less than size characters from stream and stores them into
       the buffer pointed to by s.  Reading stops after an EOF or a newline.   If  a  newline  is
       read,  it  is  stored into the buffer.  A terminating null byte ('\0') is stored after the
       last character in the buffer.

fgets() returns s on success, and NULL on error or when end of file occurs while no  char‐
       acters have been read.

*/