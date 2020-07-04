#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>


FILE * mul_fs_fopen(FILE *filePointer,char * fsPath,char * fsMode){
    filePointer=fopen(fsPath,fsMode);
    if(!filePointer){
        printf("FilePointer is failed to open | Creating new file\n");
        filePointer=fopen(fsPath,fsMode);
    }
    return(filePointer);
}

void mul_fs_fseek(FILE *filePointer,char *fsPath,int offset,int whence){
        if(!filePointer)
        {
            filePointer = mul_fs_fopen(filePointer,fsPath,"w+");
            printf("File pointer is null in fseek\n");
        } 
        fseek(filePointer,offset,whence);
        printf("ms_fs_fseek : Success\n");
}
void mul_fs_fwrite(FILE *filePointer,char *fsPath, char *fsData){
        if(!filePointer)
        {
            filePointer = mul_fs_fopen(filePointer,fsPath,"w+");
            printf("File pointer is null in fwrite\n");
        } 
        fputs(fsData,filePointer);
        printf("ms_fs_fwrite : Success\n");

}

void mul_fs_fread(FILE *filePointer,char *fsPath,char * dataToread,int sizeofdata){
    if(!filePointer)
        {
            filePointer = mul_fs_fopen(filePointer,fsPath,"r+");
            printf("File pointer is null in fread\n");
        } 
        fgets(dataToread,sizeof(dataToread),filePointer);
        printf("ms_fs_fread : Success\n");
}

void mul_fs_fclose(FILE *filePointer){
     if(filePointer)
        fclose(filePointer);
        printf("ms_fs_fclose : Success\n");
}

