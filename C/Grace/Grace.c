#include <stdio.h>
#include <fcntl.h>

/*
  hey, i'm a comment, yes, again!
*/
#define RUN(x)int main() { x }
#define S "#include <stdio.h>%c#include <fcntl.h>%c%c/*%c  hey, i'm a comment, yes, again!%c*/%c#define RUN(x)int main() { x }%c#define S %c%s%c%c#define CODE FILE* kid = fopen(%cGrace_kid.c%c, %cw%c); fprintf(kid, S, 10, 10, 10, 10, 10, 10, 10, 34, S, 34, 10, 34, 34, 34, 34, 10, 10);%cRUN( CODE )%c"
#define CODE FILE* kid = fopen("Grace_kid.c", "w"); fprintf(kid, S, 10, 10, 10, 10, 10, 10, 10, 34, S, 34, 10, 34, 34, 34, 34, 10, 10);
RUN( CODE )
