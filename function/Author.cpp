#include "Author.h"
#include <iostream>
using namespace std;
	//------Setter funcion
	int Author::counterAuthor = 100;
	Author::Author(){}
	void Author::set_ID(){
		id = counterAuthor;
		counterAuthor++;
	}
	Author::Author(string n, string ph, string e){
		name = n;
		phone = ph;
		email = e;
		id = counterAuthor;
		counterAuthor++;
	}
	void Author::set_phone(string ph){
		phone = ph;
		}
	void Author::set_name(string n){
		name = n;
		}
	void Author::set_email (string e){
		email = e;
		}
	void Author::operator=(Author a){
		name = a.get_name();
		phone = a.get_phone();
		email = a.get_email();
	}
	//------Getter funcion
	int Author::get_id(){return id;}
	string Author::get_name(){return name;}
	string Author::get_phone(){return phone;}
	string Author::get_email(){return email;}
