#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void snack();
void body();
void printsn();
int i ,j ,height=20 , width=40;
int x,y,obx,oby,SNACK;

int main(){
	snack();
	body();
}

void printsn(){
	
	if (kbhit){
		switch( getch()){
			case 'W' :
			 SNACK = 1 ;
			 break;
		}
		switch( getch()){
			case 'S' :
			 SNACK = 2 ;
			 break;
		}
		switch( getch()){
			case 'A' :
			 SNACK = 3 ;
			 break;
		}
		switch( getch()){
			case 'D' :
			 SNACK = 4 ;
			 break;
		}
		
	}
}
void snack(){
	x = height/2;
	y = width/2;
	
	do{
		obx = rand()%20;
	}while( obx == 0 );
	do{
		oby = rand()%40;
	}while( oby == 0);
}

void body(){
	for( i=0 ; i < height ; i++){
		for( j=0 ; j < width; j++){
			if( i == 0 || i == height - 1 || j == 0 || j == width-1){
			printf("*");
		}else{
			if( i == x && j == y){
				printf("00");
			}
			else if ( i == obx  && j == oby ){
				printf("@");
			}else{
				printf(" ");
			}	
		}
		}
		printf("\n");
	}
	
}
