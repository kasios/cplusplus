#include <iostream>
#include <vector>
#include <map>

// http://jessicarbrown.com/images/ft-cpp-loop.gif
int main()
{
    
    // non-c++11 syntax:
    
    // 1. create a for loop that prints numbers 1 to 5
	std::cout << "Ejercicio 1: " << std::endl;

	for(int i = 1; i <= 5; i++) {
		std::cout << i << std::endl;
	}

	std::cout << "-------------" << std::endl;
	std::cout << "Ejercicio 2: " << std::endl;

    // 2. create a for loop that iterates through a vector of strings and print
    // them
    
	std::vector<std::string> vec;
	vec.push_back("uno");	
	vec.push_back("dos");
	vec.push_back("tres");
	vec.push_back("cuatro");
	vec.push_back("cinco");

	for(int i = 0; i < (int)vec.size(); i++) {
		std::cout << vec[i] << std::endl;
	}

	std::cout << "-------------" << std::endl;
	std::cout << "Ejercicio 3: " << std::endl;

    // 3. create a for loop that gets a map of <string, float> and returns a
    // new map of of (char*, int)
    
	std::map<std::string, float> theMap;

	theMap.insert (std::make_pair("zero", 0));
	theMap.insert (std::make_pair("uno", 1));
	theMap.insert (std::make_pair("dos", 2));
    
	std::map<char*, int> newMap;
    	std::map<std::string, float>::iterator it = theMap.begin();
	for(; it!=theMap.end(); ++it) {
        	char* pChar = new char[it->first.size() + 1];
        	std::copy(it->first.begin(),it->first.end(), pChar);
		pChar[it->first.size()] = '\0'; // Don't forget the terminating 0
        	newMap.insert (std::make_pair( pChar, (int)it->second));
        	std::cout << it->first << ", " << it->second << std::endl;
    	}

	std::cout << "-------------" << std::endl;
	std::cout << "Ejercicio 4: " << std::endl;

    // 4. create a for loop that gets a map of <string, float> and updates the
    // same map so that it adds "yeah!" to each string and rounds the float
    // number. transform it in place.

	it = theMap.begin();
	for(; it!=theMap.end(); ++it) {

        	//newMap.insert (std::make_pair( it, (int)it->second));
       		//std::cout << it->first << ", " << it->second << std::endl;
	}

	std::cout << "-------------" << std::endl;
	std::cout << "Ejercicio 5: " << std::endl;

    //----------------------------------------------------------------------
        
    // 5. transform every previous exercise to ranged for loops. use as much
    // c++11 syntax as you can
    
	std::cout << "-------------" << std::endl;
	std::cout << "Ejercicio 6: " << std::endl;

    // 6. write a for loop that prints a pyramid of height N, like this:    
    //	
    //	               **
    //	              ****
    //	             ******
    //	            ********
    //	           **********
    //	          ************
    
}

//Recursive function that create a piramid with height N.
std::string crearPiramide (int size, int totalSize) {
	return crearPiramide(size - 1,totalSize);
}
