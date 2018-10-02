#include <iostream>
#include <string>

#include "TestLib.h"
#include "TestLib2.h"

using namespace std;

extern "C" const char *hxRunLibrary ();
extern "C" void hxcpp_set_top_of_stack ();

int main() {
	
	cout << "Hello world! " << endl;
	
	hxcpp_set_top_of_stack ();
	
	const char *err = NULL;
 	err = hxRunLibrary ();
	
	if (err) {
		
		printf("Error: %s\n", err);
		return -1;
		
	}
	
	TestLib_obj::hello ();
	TestLib2_obj::hello ();
	return 0;
	
}