//Colby Conkling
#include <fstream>
#include <stdio.h>
using namespace std;

//Create counter to count number of objects created and deleted
template <typename T>
struct counter
{
	counter()
	{
		objects++;
	}

	virtual ~counter()
	{
		--objects;
	}
	static int objects;
};

template <typename T> int counter<T>::objects(0);

class String : counter<String> {

private:
	char* data;
	int length = 0;
	void subscriptError();  //Handles Invalid Subscripts

public:
	String(); //Default Constructor
	String(char*);	//Constructor
	String (const String &); //Copy Constructor (Default)
	~String(); //Destructor
	String operator+(String &); //Overload the + Operator
	char operator[] (const int &s);//Overload the [] Operator
	bool operator==(String &);  //Overload the == Operator
	bool operator<(String &);
	bool operator>(String &);
	int size();
	int count() {
		return counter<String>::objects;
	}

	//Befriend the ostream class
	friend ostream& operator <<(ostream& stream, String ob) {
		return stream << ob.data;
	}

	//Befriend the istream class
	friend istream& operator >>(istream& stream, String ob) {
		return stream >> ob.data;
	}
	
};
