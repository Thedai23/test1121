#include<stdio.h>
#include<unistd.h>
#include<sys/fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdlib.h>
#include<string.h>

int pram check(int argc,char *srcfile int pronum);
int block cur(char *srcfile,int pronum);
int process create(char*srcfile ,char *destfile ,int blocksize,int pronum);
int process wait(void);
