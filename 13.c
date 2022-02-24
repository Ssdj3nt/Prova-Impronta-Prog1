/*
	Sviluppare una function C che, data come parametro di input una stringa che
 	rappresenta un testo in italiano, determina e restituisce come parametri di
	output la parola di lunghezza minima contenuta nel testo e la sua lunghezza. 
	Nel testo le parole sono separate da un unico spazio. 
*/

void traccia13(char *testo, char *parola_min, int *min){
	*min=strlen(testo);
	char *tmp=strtok(testo, " ");
	while(tmp!=NULL){
		if(strlen(tmp)<*min){
			*min=strlen(tmp);
			strcpy(parola_min, tmp);
		}
		tmp=strtok(NULL, " ");
	}
}
