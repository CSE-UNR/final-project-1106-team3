//Name: Matthew Orozco & Giancarlo Estupinan
//Date: 12/4/24
//Purpose: Prompt User to complete a madlib

#include <stdio.h>

#define FILE_NAME "madlib1.txt"
#define LINES 21
#define ADJ 2
#define NOUN 7 
#define VERB 1
#define CHAR_LIMIT 15

//function prototypes
void printMadlib(FILE* fpt, int numLines);
void checkPrompt(FILE* fpt, int numLines, char *adj, char *noun, char *vrb);
//void printAdj(char adjReplace);

//main
int main (){
	int numLines = LINES, i;
	char adj[ADJ][CHAR_LIMIT], vrb[VERB][CHAR_LIMIT], noun[NOUN][CHAR_LIMIT];
	FILE* fpt;
	fpt = fopen(FILE_NAME, "r");
	if(fpt == NULL){
		printf("error\n");
		return 0;
	}
	printMadlib(fpt, numLines);
	
	//User Input
	
	printf("\n");
	printf("Please input %d Verb(s).\n", VERB);
	
	for (i = 0; i < VERB; i++){
		scanf("%s", &vrb[i]);
		//printf("%s\n", vrb[i]);
	}
	
	printf("\n");
	printf("Please input %d Adjective(s).\n", ADJ);
	
	for (i = 0; i < ADJ; i++){
		scanf("%s", &adj[i]);
		//printf("%s\n", adj[i]);
	}
	
	printf("\n");
	printf("Please input %d Noun(s).\n", NOUN);
	
	for (i = 0; i < NOUN; i++){
		scanf("%s", &noun[i]);
		//printf("%s\n", noun[i]);
	}
	
	//Replacing
	
	fpt = fopen(FILE_NAME, "r");
	checkPrompt(fpt, numLines, *adj, *noun, *vrb);
	
	
	
	
	
	fclose(fpt);
	return 0;
}

//functions

void printMadlib(FILE* fpt, int numLines){
	int i;
	char line[75];
	for(i = 0; i < numLines; i++){
		fgets(line, sizeof(line), fpt);
		printf("%s", line);
	}
}

void checkPrompt(FILE* fpt, int numLines, char *adj, char *noun, char *vrb){
	char firstChar[75];
	int i, x = 0, y = 0, z = 0;
	for(i = 0; i < numLines; i++){
		fgets(firstChar, sizeof(firstChar), fpt);
		if(firstChar[0] == 'A'){
			//printf("Adjective on line %d\n", i + 1);
			
			//something wrong here im trying to figure out what
			
			//printAdj(adj[x]);
			
			printf("%s\n", &adj[x]);
			x++;
		} else if(firstChar[0] == 'N'){
			//printf("Noun on line %d\n", i + 1);
			printf("%s\n", &noun[y]);
			y++;
		} else if (firstChar[0] == 'V'){
			//printf("Verb on line %d\n", i + 1);
			printf("%s\n", &vrb[z]);
			z++;
		} else {
			printf("%s", firstChar);
		} 
		
	} 
		  
}

/*void printAdj(char adjReplace){
	printf("%s\n", &adjReplace);
}*/

//Potentially useful stuff
/*
function for each word type returning to variable?????

monster energy plsss

my soul

*/

