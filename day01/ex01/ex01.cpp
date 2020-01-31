#include <string>
#include <iostream>

/*
 * With fsanitize=leak on Arch Linux :
 * ==279787==ERROR: LeakSanitizer: detected memory leaks
 *
 * Direct leak of 32 byte(s) in 1 object(s) allocated from:
 *    #0 0x555d88c00ae9 in operator new(unsigned long) (/home/tom/programmation/42/piscine_cpp/day01/ex01/a.out+0xf6ae9)
 *    #1 0x555d88c039eb in memoryLeak() (/home/tom/programmation/42/piscine_cpp/day01/ex01/a.out+0xf99eb)
 *    #2 0x555d88c03b73 in main (/home/tom/programmation/42/piscine_cpp/day01/ex01/a.out+0xf9b73)
 *    #3 0x7fb6da029152 in __libc_start_main (/usr/lib/libc.so.6+0x27152)
 *
 * SUMMARY: AddressSanitizer: 32 byte(s) leaked in 1 allocation(s).
 */
void memoryLeak()
{
	std::string* panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
}

/*
 * No leak detected !
 */
void memoryLeakCorrected()
{
	std::string* panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}

int main(void)
{
	memoryLeakCorrected();
	return (0);
}
