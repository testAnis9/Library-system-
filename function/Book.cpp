#include "Book.h"
#include <iostream>
#include <string.h>
using namespace std;
	
	//---------Implamention Setter 
	int  Book::counterBook = 1000;
	Book::Book(){}
	Book::Book(int v, string t, string pD,string n, string ph, string e):author(n,ph,e){
			id = counterBook;
			counterBook++;
			version = v;
			title = t;
			publishing_data = pD;
			// author.set_ID();
		}
	void Book::set_title(string t){
		title = t;
		}
	void Book::set_publishing_data(string p){
		publishing_data = p;
		}
	void Book::set_version(int v){
		version = v;
		}
	//---------Implamention Getter 

	int Book::get_id(){
		return id;
		}
	string Book::get_title(){
		return title;
		}
	string Book::get_publishing_data(){
		return publishing_data;
	}
	int Book::get_version(){
		return version;
		}
	int Book::get_authorId(){
		return authorId;
	}
	Author Book::get_author(){
        return author;
	} 	
	void Book::operator = (Book b){
		b.set_version(version);
		// b.set_authorId(authorId);
		b.set_title(title);
		b.set_publishing_data(publishing_data);
	}
	