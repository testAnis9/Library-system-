#include "Author.h"
#include <iostream>
using namespace std;
class Book : public Author{
private:
	static int counterBook;
	int id, version, authorId;
	string title, publishing_data;
	Author author;
public:
	//---------Setter function
	Book();
	Book(int v, string t, string pD,string n, string ph, string e);
	void set_title(string);
	void set_publishing_data(string);
	void set_version(int);
	void operator = (Book b);
	//---------Getter function
	int get_id();
	int get_version();
	int get_authorId();
	string get_title();
	string get_publishing_data();
	Author get_author(); 	
};