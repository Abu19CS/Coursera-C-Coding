#include <stdio.h>
#include <stdlib.h>

void print_file(FILE *fp)
{
    int c;
    rewind(fp);
    while ((c=getc(fp))!=EOF){
        putc(c,stdout);
    }
}
void double_space(FILE *fp, FILE *fp2)
{
    int c;
    rewind(fp);
    while ((c=getc(fp))!=EOF){
        putc(c, fp2);
        if (c=='\n')
            putc('\n', fp2);
    }
}

int main(int argc, char *agrv[])
{
    FILE *fp, *fp2;
    if (argc!=3){
        printf("Out of range");
        exit(1);
    }

    fp = fopen(agrv[1],"r+");
    fp2 = fopen(agrv[2],"w+");
    print_file(fp);
    double_space(fp,fp2);
    print_file(fp2);
    return 0;
}