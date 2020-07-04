#ifndef FS_MYLIB_H
#define FS_MYLIB_H

FILE * mul_fs_fopen(FILE *filePointer,char * fsPath,char * fsMode);
void mul_fs_fseek(FILE *filePointer,char *fsPath,int offset,int whence);
void mul_fs_fwrite(FILE *filePointer,char *fsPath, char *fsData);
void mul_fs_fread(FILE *filePointer,char *fsPath,char * dataToread,int sizeofdata);
void mul_fs_fclose(FILE *filePointer);

#endif