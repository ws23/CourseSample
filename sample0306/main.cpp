#include <iostream>
#include "hello.h"
using namespace std;

int main(){
	/* 'hello' is a class, 'world' is an object
	 * you can think this declare is we declare a variable 'world' that is 'hello' type. 
	 * */
	hello world;

	/* declare an object and give the initialization value */
	hello ini("world");

	/* to see the constructure funciton*/
	cout << "1. " << world.getWord() << endl;
	cout << "2. " << ini.getWord() << endl;
	
	/* use the public method 'sayHello' */
	world.sayHello();
	ini.sayHello();

	/* change the value of world */
	world.setWord("NDHUCSIE");
	ini.setWord("everybody");

	/* sayHello again */
	world.sayHello();
	ini.sayHello();

	return 0;
}
