#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]){

	int objectNumber[8]; //initialize the SCP ID input
	char SCPID[10];	//initialze the string version of the ID
	char URL[256] = "xdg-open https://scp-wiki.wikidot.com/scp-"; //basic version of the command that opens the URL
	char fullURL[10]; //initialize what will the the full URL
	

	sprintf(SCPID,"%s", argv[1]); //assign the console argument to SCPID

	strcat(URL, SCPID); //finish the command by adding the SCP ID

	system(URL); // call the finished command
}
