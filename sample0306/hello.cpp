#include "hello.h"
#include <iostream>
using namespace std;

hello::hello(){
	word = "";
}

hello::hello(string s){
	word = s;
}

void hello::setWord(string s){
	word = s;
}

string hello::getWord(){
	return word;
}

void hello::sayHello(){
	cout << "Hello, " <<  word << "!!" << endl;
}
