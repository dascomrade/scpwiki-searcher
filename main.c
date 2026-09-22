#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]){

	int objectNumber[8]; //initialize the SCP ID input
	char SCPID[10];	//initialze the string version of the ID
	char URL[256] = "xdg-open https://scp-wiki.wikidot.com/scp-";
	char fullURL[10];
	

	sprintf(SCPID,"%s", argv[1]);

	strcat(URL, SCPID);

	system(URL);
}
