#include <unistd.h>

int main(void) {
	// The Magic Sequence:
	// \x1b     -> The ESC (Escape) character
	// [H       -> Move cursor to Home (top-left)
	// [2J      -> Clear the entire visible screen
	// [3J      -> Clear the scrollback buffer (the "true clean")
	
	// 11 is the exact length of the string inside the quotes
	write(1, "\x1b[H\x1b[2J\x1b[3J", 11);
	return 0;
}
