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
