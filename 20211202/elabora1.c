/*quando invocheremo il nostro programma con 
elabora tutti_i_miei_comandi.txt
il valore di argv[0] sarà "elabora"
il valore di argv[1] sarà "tutti_i_miei_comandi.txt"
*/


int main(int argc, char *argv[]) {	//commento
	char nome_file[30];
	strcpy(nome_file, argv[1]);
	printf("%s\n", nome_file);
}