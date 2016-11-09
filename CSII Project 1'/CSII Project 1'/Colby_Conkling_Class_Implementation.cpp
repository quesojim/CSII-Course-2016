#include <iostream>
#include "Colby_Conkling_Header.h"
using namespace std;

//Default Constructor

String::String() {
	
	data = "null";
	length = 0;
}

//Constructor
String::String(char* c) {

	data = c;
	size();

}

//Copy Constructor
String::String(const String &s){
	data = s.data;
	length = s.length;
	
}

//Destructor
String::~String() {

	//delete[] data;

}

//Find size of array
int String::size()
{
	//Count until null terminator is found in array
	int i = 0;
	while (data[i] != '\0') {
		i++;
	}

	length = i;
	return i;
}

//Overload the [] opeator
char String::operator[] (const int &s) {
	size();
	if (s > length) {
		subscriptError();
	}

	return data[s];

}

//Overload the + Operator
String String::operator+(String &x) {
	
	size();
	int size = x.size() + length;
	char* s = new char[size + 1];
	int i = 0;
	int j = 0;

	for (i = 0; i < length; i++) {
		s[i] = data[i];
	}

	for (i; j < x.size(); i++) {
		s[i] = x.data[j];
		j++;
	}
	//Set null terminator at end
	s[size] = '\0';
	String z = String(s);
	return z;

}

//Overload the == Operator
bool String::operator==(String &x) {

	for (int i = 0; i < length; i++) {
		if (data[i] != x.data[i]) {
			return false;
		}
	}
	return true;
}

//Overload the < Operator
bool String::operator<(String &x) {
	//Compares the length of the two Strings 
	if (length < x.size()) {
		return true;
	}

	return false;
}

//Overload the > Operator
bool String::operator>(String &x) {
	//Compares the length of the two Strings 
	if (length > x.size()) {
		return true;
	}

	return false;
}

//Handles Invalid Subscripts
void String::subscriptError() {

	cout << "Invalid Subscript.  Out of range." << endl;

}
