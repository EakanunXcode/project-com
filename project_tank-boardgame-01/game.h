#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include<iomanip>

using namespace std;

class Army{
       int hpmax; 
        string name;		
		int hp;
		int atk;
		int def;  
        int heal;
        int skillatk;
        bool changeturn;
    public:
    void createchar(string); //เรื่มต้นค่า status
    void newturn(); //เปลี่ยนตา
	
};


void Army::createchar(string type){ 
	if(type == "Tank"){
		hpmax = 300;
		atk = 50+(rand()%11);
		def = 50;
	}else if(type == "Artillery"){
		hpmax = 60;
		atk = 20+(rand()%81);
		def = 5;
	}else if(type == "Commander"){
		hpmax = 200;
		atk = 20+(rand()%11);
		def = 0;
    }else if(type == "Soilder"){
		hpmax = 100;
		atk = 25+(rand()%11);
		def = 10;
        skillatk = 50+rand()%151;
    }
	hp = hpmax;
    changeturn = false;
}
