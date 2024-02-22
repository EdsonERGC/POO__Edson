#include <"Persona.cpp">
#include <iostream>

using namespace std;

class Estudiante : Persona{
	//atributo de estudiante sera privado
	
	private : string carnet;
	// constructor
	
	public :
		estudiante(){
		}
	estudiante(string nom, string ape, string dir, int tel, string nac,string ca) : persona (nom,ape,dir,nac,){
		carnet = ca;
		
		
		void leer(){
			cout<<nombres<<endl;
			
			
		}
		
	}
};
