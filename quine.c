#include <stdio.h>

// TODO: What is fucking me is that C printf always expand the \n characters
// So self referencing is expanding the \n instead of just printing them
// In Go this is much easier thanks to %q that quotes the string literally
static char * code = "#include <stdio.h>\n\nstatic char * code = \"%s\"\n\nint main(void) {\n\tprintf(code,code);\n\treturn 0;\n}\n";

int main(void) {
	printf(code, code);
	return 0;
}
