#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int fd = 0;

    printf("please enter file name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR); 
    if (fd == -1)
    {
        printf("unable to open the file\n");

    }
    else  
    {
        printf("file is succesfully opened with Fd %d\n",fd);
    }
    

    return 0;
}