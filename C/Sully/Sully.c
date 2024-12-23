#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
int i = 5;
i -= 1;
if (i < 0)
return 0;
char *code = "#include <fcntl.h>%c#include <stdio.h>%c#include <stdlib.h>%cint main()%c{%cint i = %d;%ci -= 1;%cif (i < 0)%creturn 0;%cchar *code = %c%s%c;%cchar exec[40];%csprintf(exec, %ccc Sully_%%d.c -o Sully_%%d && ./Sully_%%d%c, i, i, i);%cchar filename[10];%csprintf(filename, %cSully_%%d.c%c, i);%cFILE *sully_i = fopen(filename, %cw%c);%cfprintf(sully_i, code, 10, 10, 10, 10, 10, i, 10, 10, 10, 10, 34, code, 34, 10, 10, 34, 34, 10, 10, 34, 34, 10, 34, 34, 10, 10, 10, 10, 10);%cfclose(sully_i);%csystem(exec);%c}%c";
char exec[40];
sprintf(exec, "cc Sully_%d.c -o Sully_%d && ./Sully_%d", i, i, i);
char filename[10];
sprintf(filename, "Sully_%d.c", i);
FILE *sully_i = fopen(filename, "w");
fprintf(sully_i, code, 10, 10, 10, 10, 10, i, 10, 10, 10, 10, 34, code, 34, 10, 10, 34, 34, 10, 10, 34, 34, 10, 34, 34, 10, 10, 10, 10, 10);
fclose(sully_i);
system(exec);
}
