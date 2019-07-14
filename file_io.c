#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fs;
	int ch;

	fs=fopen("fc.txt","r");
	//ft=fopen("fc1.txt","w");

	if(fs==NULL){
		puts("Can not create target file");
		exit(1);
	}
	int co=0;
	while(1){
		ch=fgetc(fs);
		if(ch==EOF)
			break;
		else{
			printf("%d\n",ch);
			if(ch!=10)
                co=co+(ch-48);
		}
	}
	printf("%d",co);
	fclose(fs);
	return 0;
}
