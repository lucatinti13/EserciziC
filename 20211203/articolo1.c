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


int main(int argc, char *argv[]) 
{											
	int dimensione;
	int lunghezza articolo					   
	char riga [256];
	char articolo_base[5000];
	char *pCh = articolo_base;
	FILE *file;
	int x=0;
	if(argc<2)
	{
		printf("Non ci sono abbastanza parametri, controlla di aver messo il nome del file\n");
		exit(-1);
	}
	if(argv<3)
	{
		printf("Non ci sono abbastanza parametri, controlla di aver messo il numero massimo di caratteri per riga\n");
		exit(-2);
	}
	dimensione = atoi(argv[2]);
	file=fopen(argv[1],"r");
	if(file==NULL)
	{
		printf("Il file %s non esiste nella posizione indicata\n"),argv[1];
		exit(-3);
	}
	/*
		[...\n...\n...\n....\n\0] --> [..................\0] --> [.......]\n
	*/
	
	while(fgets(riga,sizeof(riga),file) != NULL)
	{	
		int scritti;
		if (riga[strlen(riga)-1] == '\n')
		if (riga[strlen(riga)-1] == '\0')
		scritti = sprintf(pCh, "%s", riga); 				/*la sprintf scrive su un buffer mentre la printf scrive su uno standard output*/
		pCh += scritti;
	}		
	//oppure si scrive anche pCh = articolo_base;
	pCh = &(articolo_base[0]);						  
	lunghezza_articolo = strlen(articolo_base);
	while(pCh < (articolo_base + lunghezza_articolo))
	{
	printf("%.30s\n", pCh);
	pCh += dimensione;
	x++;		/* oppure si scrive anche x += 1 */
	}
		
	fclose(file);								
	
	return x;	
			
}


/* FGETS
fgets()  reads  in  at most one less than size characters from stream and stores them into
       the buffer pointed to by s.  Reading stops after an EOF or a newline.   If  a  newline  is
       read,  it  is  stored into the buffer.  A terminating null byte ('\0') is stored after the
       last character in the buffer.

fgets() returns s on success, and NULL on error or when end of file occurs while no  char‐
       acters have been read.

*/