#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include "fs_main.h"


int main(){
    char data[8];

    FILE *file = NULL;
    char * env_path = "./test.txt";
    int result;

    // file = mul_fs_fopen(file,env_path,"w+");
    // mul_fs_fwrite(file,env_path,"Environment = ");
    // mul_fs_fwrite(file,env_path,"PREPROD");
    // if(!file)
    //     file = mul_fs_fopen(file,env_path,"w+");
    // mul_fs_fseek(file,env_path,14,SEEK_SET);
    // mul_fs_fread(file,env_path,data,8);        
    // mul_fs_fclose(file);


    if(fs_file_write_operation(file,env_path,"preprod"))
        printf("File updated : Success\n");
    if(fs_file_read_operation(file,env_path,14,SEEK_SET,data,8))
        printf("File Data : %s\n",data);
    return 0;

}