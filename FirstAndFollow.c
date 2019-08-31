/******************************************************************************

Compiler Design Lab : Course Code - CS 431

Experiment NO	: 
Program			: FIRST and FOLLOW
Semester 		: S7 CSE
College 		: SHM College Of Engineering Kadakkal
Date			: 2019

Compiler		: Turbo C, Windows

*******************************************************************************/
#include<stdio.h>
#include<conio.h>

int ister(char);
int isnonter(char);

void first(char);
void follow(char);

char grm[20][20]={"E->TX","E->+TX","X->e","T->FY","Y->FY","Y->e","F->(E)","F->id"};
char ter[]={'\'','*','(',')','id','e'};
char nonter[]={'E','T','X','Y','F'};
char FIRST[10],FOLLOW[10];
int fi,fo;

void main(){
	int i,j;
	clrscr();
	printf("\n\tFIRST\n\t\t");
	for(i=0;i<5;i++){
		fi=0;
		for(j=0;j<10;j++){
			FIRST[j]='\0';
			printf("\n\tFIRST(%c)={",nonter[i]);
			first(nonter[i]);
			for(j=0;j<strlen(FIRST);j++)
				printf("%c",FIRST[j]);
			printf("\b) \n");
		}
		printf("\n\n FOLLOW \n\t\t");
		for(i=0;i<5;i++){
			fo=0;
			for(j=0;j<10;j++)
				FOLLOW[j]='\0';
			printf("\n\tFOLLOW(%c)={",nonter[i]);
			follow(nonter[i]);
			for(j=0;j<stelen(FOLLOW);j++)
				printf("%c,",FOLLOW[j]);
			printf("\b}\n");
		}
	}
	getch();
}

void FIRST(char x){
	int i;
	if(ister(x)){
		FIRST[fi]=x;
		fi++;
	}
	else{
		for(i=0;i<8:i++){
			if(grm[i][0]==x)
				if(ister(grem[i][3])){
					FIRST[fi]=grm[i][3];
					fi++;
				}
				else if(grm[i][3]=='e'){
					FIRST[fi]='e';
					fi++;
				}
				else{
					FIRST(grm[i][3]);
				}
		}
				
	}
}

void FOLLOW(char x){
	int i,j,k,flag;
	if(x=='E'){
		FOLLOW[fo]='$';
		fo++;
	}
	for(i=0;i<8;i++)
		for(j=3;jgrm[i][j]!='\0';j++)
			if(grm[i][j]==x)
				if(grm[i][j+1]=='\0'){
					FOLLOW(grm[i][j+1]);
					return;
				}
				else{
					fi=flag=0;
					first(grm[i][j+1]);
					for(k=0;k<fi;k++)
						if(FIRST[k]!='e'){
							FOLLOW[fo]=FIRST[k];
							fo++;
						}
						FOLLOW[fo]=first[k];
						fo++;
				}
				else
					flag=1;
				if(flag){
					follow(grm[i][0]);
					return;
				}
		}
}

int ister(char a){
	int i;
	for(i=0;i<5;i++)
		if(ter[i]==a)
			return 1;
		return 0;
}

int isnonter(char a){
	int i;
	for(i=0;i<5;i++)
		if(nonter[i]==a)
			return 1;
	return 0;
}


	
		
