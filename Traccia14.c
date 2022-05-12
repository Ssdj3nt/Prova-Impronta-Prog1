/*
	Sviluppare una function C che, data come parametro di input una stringa che
	rappresenta un testo in italiano, determina e restituisce come parametri di 
	output la parola di lunghezza minima contenuta nel testo e la posizione di 
	inizio della parola nella stringa. Nel testo le parole sono separate da un 
	unico spazio.  
*/

void traccia14(char *testo, char *parola_min, int *pos){
	char *tmp=strtok(testo, " "), posizione;
	int min=strlen(frase);
	while(tmp!=NULL){
		if(strlen(tmp)<min){
			min=strlen(tmp);
			strcpy(parola_min, tmp);
			posizione=tmp;
		}
		tmp=strtok(NULL, " ");
	}
	*pos=(int)posizione-(int)testo;
}
