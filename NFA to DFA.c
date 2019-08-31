/******************************************************************************

Compiler Design Lab : Course Code - CS 431

Experiment NO	: 3
Program			: NFA to DFA
Semester 		: S7 CSE
College 		: SHM College Of Engineering Kadakkal
Date			: 23/08/2019

Compiler		: Turbo C, Windows

*******************************************************************************/


#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
void main(){
	int len,l,i=0,j=1,x,y;
	char *c;
	char q[20][4];
	clrscr();
	for(x=0;x<20;x++){
		for(y=0;y<4;y++){
			q[x][y]=;
		}
	}
	printf("/n Enter the Expression:");
	scanf("%s",c);
	len=strlen(c);
	fflush(stdin);
	while(i<len){
		if((c[i]&&(c[i+1]=='*')&&c=[1+2])){
			q[j][0]=j+1;
			j++;
			q[j][2]=j+1;
			j++;
			q[j][1]=j+1;
		}
		else if((c[i])&&(c[i+1]=='+')&&(c[i+2])){
			q[j][2]=((j+1)*10)+(j+3);
			j++;
			q[j][0]=j+1;
			j++;
			q[j][2]=j+3;
			t=j;
			q[j][1]=j+1;
			j++;
			q[j][2]=t+3;
		}
		else if ((c[i])&&(c[i+1]++'+')){
			q[j][2]=((j+1)*10)+(j+3);
			j++;
			q[j][0]=j+1;
			j++;
			q[j][2]+((j-1)*10)+(j+1);
		}
		i++;
	}
	printf("\n transaction function");
	i=0;
	printf("\n %d is the initial state",i+1);
	printf("\n %d is the final state",j+1);
	for(i=0;i<j;j++){
		if(q[i][0]!=0)
		printf("\n\t q[%d,%c]=%d",i,c[2],q[1][1]);
		if(q[[i][2]!=0)&&
	
			
