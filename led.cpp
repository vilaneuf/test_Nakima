#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    int gpio_l = 129; 	//led  gpio 5_1 de J6 -> (5-1)*32 + 1 = 129
    int gpio_b = 119; 	//suposem que el buto es extern, i que indica amb un 1 logic que sha apretat
			//but gpio 4_23 de J6 -> (4-1)*32 + 23 = 
    string value;
    ifstream button("/sys/class/gpio/gpio119/value");
    ofstream led("/sys/class/gpio/gpio129/value");	//suposem que direction ja es output
    if(button.is_open()){
   	getline(button, value);		//funcio agafa linia de fitxer,
					// mirar si hi ha alguna per llegir el mateix byte 
   	while( value != "0"){
            getline(button, value);

        }
    button.close();
    }
    if(led.is_open()){
        led <<"1";
        led.close();
    }
    	


}
