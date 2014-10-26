#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc,char **argv){
FILE *f;
char str[1004],pre[1004]; int n; char* o,*oo, *ooo,*u,*e;
if (argc < 2) {printf("аргументов мало\n"); return -1;}
f=fopen(argv[1],"r");
if (f==NULL) {printf("Файл не открылся\n"); return -2;}
pre[0]=str[0]='\0';
fgets(pre,1000,f);
if (pre[0]=='\0') {printf("Файл пуст"); return -3;}
pre[strlen(pre)-1]='\0';
o=strdup("0"); oo=strdup("00"); ooo=strdup("000"); e = strdup("");
for (n=1; fgets(str,1000,f); n++)
{
	str[strlen(str)-1]='\0';
	if (strcmp(str,pre)) {
		if (n>9999) {printf("Нужно больше нулей\n"); return -4;}
		if (n<1000) u=o;
		if (n<100) u=oo;
		if (n<10) u=ooo;
		printf("%s%d\t%s\n",u,n,pre); u=e;
		n=0; 
		strcpy(pre,str); pre[strlen(str)]='\0';
	}

}
		if (n>9999) {printf("Нужно больше нулей\n"); return -4;}
		if (n<1000) u=o;
		if (n<100) u=oo;
		if (n<10) u=ooo;
		printf("%s%d\t%s\n",u,n,pre);
fclose(f);free(o); free(oo); free(ooo); free(e);
return 0;
}
