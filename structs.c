// ju -- https://bw1.eu -- 26-Dez-18  -- structs.c 
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
//#include "funktionen.h" // eig. Bibliothek
struct ledTyp{
	char name[20];
	int color;
	bool state;
};
#define GREEN 1;
#define RED 1;
int main(void){
	// structs - Strukturen
	printf("structs - Strukturen\n");

  struct ledTyp led1;// = {"led1", GREEN, 1};//, led2;

	strcpy(led1.name, "led1");
	led1.color = GREEN;
	led1.state = 1; // ON

	printf("%s %d %d", led1.name, led1.color, led1.state);

	return 0;
}
