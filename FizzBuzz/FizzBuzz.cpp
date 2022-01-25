#include <iostream>
void fizz(int num);

void fizz(int num) {
	if (num % 3 == 0)
		std::cout << "Fizz";
	if (num % 5 == 0)
		std::cout << "Buzz";
	if (num % 3 != 0 && num % 5 != 0)
		std::cout << num;
	std::cout << "\n";
}
int main() {
	int i = 1;
	while (i <= 100) {
		fizz(i);
		i++;
	}
}