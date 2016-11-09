//Colby J. Conkling
//11-8-2016
//University of Central Arkansas CSII

#include <iostream>
#include "Colby_Conkling_Header.h"
using namespace std;

int main() {
	//Testing

	String a = String("Hello");
	String b = a; //Copy Constructor Test
	cout << "a contains: " << a << endl;  //Befriend ostream test
	cout << "Size of a: " << a.size() << endl;  //Size method test
	cout << "b contains: " << b << endl;
	String c = String("Professor");	//Uses Default Constructor
	cout << "c contains: " << c << endl;
	cout << "The second letter of a is: " << a[1] << endl;  //Test overload of the [] operator for indexing
	String d = a + c; //Test of the overridden + operator
	cout << "d contains: " << d << endl;
	cout << "Number of objects created so far: " << a.count() << endl; //Test counter for number of objects created
	bool y = a == c;
	cout << "a == c (1 = TRUE, 0 = FALSE): " << y << endl;  //Test overload of the == operator for comparison
	y = a > c;
	cout << "a > c (1 = TRUE, 0 = FALSE): " << y << endl;  //Test overload of the < operator for comparison
	y = a < c;
	cout << "a < c (1 = TRUE, 0 = FALSE): " << y << endl;  //Test overload of the > operator for comparison
	
	system("pause"); //Prevent window from closing
	return 0;
}