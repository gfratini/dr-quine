#include <stdio.h>

char *s = "#include <stdio.h>%c%cchar *s = %c%s%c;%c%c/*%c  hey, i'm a comment!%c*/%cvoid print_src()%c{%c%cprintf(s, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 10, 9, 10, 9, 10, 10);%c}%c%cint main()%c{%c%c/*%c%c  hey, i'm another comment!%c%c*/%c%cprint_src();%c}%c";

/*
  hey, i'm a comment!
*/
void print_src()
{
	printf(s, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 10, 9, 10, 9, 10, 10);
}

int main()
{
	/*
	  hey, i'm another comment!
	*/
	print_src();
}
