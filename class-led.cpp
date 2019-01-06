// ju -- https://bw1.eu -- 26-Dez-18  -- class-led.cpp
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cstring>
//#include "funktionen.h" // eig. Bibliothek
using namespace std;
class Led{// Klassenname
	public:
		char name[20];		
		int color;
		bool state;
		void switch_(bool state){ 
			zustand = state; 
		}					
		int ausgabe_switch_(){ 
			return zustand; 
		}	
  private:	
		int zustand;	
};
#define GREEN 1;
#define RED 1;				
int main(){				
	class Led led1;	
	// Zufriff led1
	strcpy(led1.name,"led1");	
	led1.color = GREEN;	
	led1.switch_(1);	

	// Ausgabe
	cout << fixed << setprecision(1)
			 << "Name: "   << led1.name << " - "
       << "Color: " << led1.color << " - "
			 << "State: " << led1.ausgabe_switch_() << endl;	
	
  //getchar();
	return 0;
}	

