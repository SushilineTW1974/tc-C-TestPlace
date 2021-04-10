/*
 * main.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "funktionen.h"

#define NAME "thomascoding"

int main(int argc, char *argv[]){

	//argc: Argument counter
	//argv: Argument value
	printf("Argument counter \"argc\" : %d\n", argc);

	for(int i = 0 ; i < argc ; i++){
		printf("Argument Value Ausgabe: argc[%d] - Value: %s\n", i, argv[i]);
	}


// Funktionsaufruf
textAusgabe("Powered by ");
printf("%s\n",NAME);

return 0;
}

