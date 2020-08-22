#include <iostream>
#include <string>

int main() {
	for (int i = 1; i <= 100; i++) {
		std::string str = "";
		if (i % 3 == 0) { str += "Fizz"; }
		if (i % 5 == 0) { str += "Buzz"; }
		if (str == "") { str += std::to_string(i); }
		std::cout << str << "\n";
	}
}