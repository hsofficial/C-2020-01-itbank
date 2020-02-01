#include <stdio.h>

void main() {
	printf("TTT\tNNN\n");
	// t>tab
	printf("bbb\b\n");
	// b>backspace
	printf("aaa\a\n");
	// a>alarm (beep)
	printf("rrr\rrrrr\n");
	// r> CR(return to starting point of line)
	printf("comma\"aaa\"\n");
	printf("slash\\\n");
	// \", \\ , ... > disable feature letters
}