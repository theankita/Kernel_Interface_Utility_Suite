#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<sys/stat.h>

//  ./statx       FileName      
//    argv[0]     argv[1]
//    argc = 2

/*
    Accept file name from command line
    Call access to check existance of file
    Call stat system to get file meta data
    Display the meta data
*/


int main(int argc, char *argv[])
{
    if(argc != 2)
    {
      printf("Error : Insufficiant arguments\n");
      printf("Use command as : ./statx SourcFileName DestinationFileName\n");
      return -1;
    }
    
    if(access(argv[1], F_OK) == 0)
    {
        struct stat sobj;
        int iRet = 0;

        iRet = stat(argv[1], &sobj);

        if(iRet == -1)
        {
            printf("Error : Unable to fetch statical information\n");
            return -1;
        }
    }
    else
    {
        printf("Error : File not found \n");
        return -1;
    }

    printf("File name : %s \n", argv[1]);
    printf("File size : %ld\n", (long)sobj.st_size);
    printf("Inode number : %ld \n",(long)sobj.st_ino);
    
    
    return 0;
}

