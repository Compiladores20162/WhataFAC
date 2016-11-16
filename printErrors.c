#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
  int haveError = 0;

  haveError = verifyLogErrors();
  if(haveError == 0){
    printf("\nCódigo compilado com sucesso!\n");
  }else{
    system("make clean -w");
    printf("\nFalha ao compilar.\n");
  }
  return 0;
}
int verifyLogErrors(){
  FILE *fp;
  char c;
  fp = fopen("logOfErrors.txt","r");
  if(fp == NULL){
    return 0;
  }else{
    do{
      c = fgetc(fp);
      printf("%c", c);
    }while(c!=EOF);
    return -1;
  }

  fclose(fp);

  return 0;
}