/*
	Sviluppare una function C che, data come parametro di input una stringa che
	rappresenta un testo in italiano, determina e restituisce
 	come parametri di output la parola di lunghezza massima contenuta nel testo
	e la sua lunghezza. Nel testo le parole sono separate da
 	un unico spazio. 
*/
void traccia12(char *testo, char *parola_max, int *max){
	*max=0;
	char *tmp=strtok(testo, " ");
	while(tmp!=NULL){
		if(strlen(tmp)>*max){
			*max=strlen(tmp);
			strcpy(parola_max, tmp);
		}
		tmp=strtok(NULL, " ");
	}
}
