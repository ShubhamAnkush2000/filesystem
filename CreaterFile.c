#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int fd = 0;

    printf("please enter file name that you want to create\n");
    scanf("%s",Fname);

    fd = creat(Fname,0777); 
    if (fd == -1)
    {
        printf("unable to create the file\n");

    }
    else  
    {
        printf("file is succesfully created with Fd %d\n",fd);
    }
    

    return 0;
}