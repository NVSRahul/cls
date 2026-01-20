#include <unistd.h>

int main(void) {

	// The 11 bit Alias
	write(1, "\x1b[H\x1b[2J\x1b[3J", 11);
	return 0;
}
