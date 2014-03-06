#include <string>
using namespace std;

class hello{
	private: 
		string word;
	public:
		hello();
		hello(string);
		void setWord(string);
		string getWord();
		void sayHello();
};
