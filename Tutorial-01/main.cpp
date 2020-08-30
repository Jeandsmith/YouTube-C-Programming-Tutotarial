#include <iostream>
#include <vector>

using namespace std;

int main(){
	//  Primitive Types
	//  int
	//  char
	//  bool
	//  float
	//  double
	//  void
	//  wchar_t
	
	cout << "The size of int is: " << sizeof(int) << " byte."  << endl;
	cout << "The size of int is: " << sizeof(char) << " byte." << endl;
	cout << "The size of int is: " << sizeof(bool) << " byte." << endl;
	cout << "The size of int is: " << sizeof(float) << " byte." << endl;
	cout << "The size of int is: " << sizeof(double) << " byte." << endl;
//	cout << sizeof(void) << endl;
	cout << "The size of int is: " << sizeof(wchar_t) << " byte." << endl;

	// Type modifiers
	cout << sizeof(unsigned int) << endl;	//Only positive integers
	cout << sizeof(long) << endl;			// double the storage size of int type to 8 byte. 
	cout << sizeof (short) << endl;			// Allow for half the storage of an int
	cout << sizeof(signed int) << endl;		// Sameas regular int. Allow negative and positive value

	// User defined
	typedef int tomato;

	tomato my_mother_tomatoes = 50;

	cout << "My mother has: " << my_mother_tomatoes << endl; 

	// Matrix declaration
	typedef std::vector<std::vector<int>> matrix;

	matrix new_matrix = matrix(10, std::vector<int> (10));

	cout << "Size of the vector: " << sizeof(new_matrix)  << " bytes." << endl;

	// ENUMS - Enumerations
	enum SHIP_STATS {ENGINE_MAX_FUEL = 5000, MAX_HEALTH = 100, SHIELD = 100};

	cout << "Engine Fuel: " << SHIP_STATS::ENGINE_MAX_FUEL << endl;

	return 0;
}
