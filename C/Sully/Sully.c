#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
int i = 5;
#ifdef DEC
i -= 1;
#endif
if (i < 0)
return 0;
char *code = "#include <fcntl.h>%c#include <stdio.h>%c#include <stdlib.h>%cint main()%c{%cint i = %d;%c#ifdef DEC%ci -= 1;%c#endif%cif (i < 0)%creturn 0;%cchar *code = %c%s%c;%cchar exec[45];%csprintf(exec, %ccc -D DEC Sully_%%d.c -o Sully_%%d && ./Sully_%%d%c, i, i, i);%cchar filename[10];%csprintf(filename, %cSully_%%d.c%c, i);%cFILE *sully_i = fopen(filename, %cw%c);%cfprintf(sully_i, code, 10, 10, 10, 10, 10, i, 10, 10, 10, 10, 10, 10, 34, code, 34, 10, 10, 34, 34, 10, 10, 34, 34, 10, 34, 34, 10, 10, 10, 10, 10);%cfclose(sully_i);%csystem(exec);%c}%c";
char exec[45];
sprintf(exec, "cc -D DEC Sully_%d.c -o Sully_%d && ./Sully_%d", i, i, i);
char filename[10];
sprintf(filename, "Sully_%d.c", i);
FILE *sully_i = fopen(filename, "w");
fprintf(sully_i, code, 10, 10, 10, 10, 10, i, 10, 10, 10, 10, 10, 10, 34, code, 34, 10, 10, 34, 34, 10, 10, 34, 34, 10, 34, 34, 10, 10, 10, 10, 10);
fclose(sully_i);
system(exec);
}
