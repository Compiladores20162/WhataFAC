#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
  int haveError = 0;

  haveError = verifyLogErrors();
  if(haveError == 0){
    printf("-> Código compilado com sucesso!\n");
  }else{
    system("make clean -w");
    printf("\n-> Falha ao compilar.\n");
  }
  return 0;
}
int verifyLogErrors(){
  FILE *fp;
  char c;
  fp = fopen("logOfErrors.txt","r");
  printf("\n");
  if(fp == NULL){
    return 0;
  }else{
    do{
      printf("%c", c);
      c = fgetc(fp);
      if(c == '\n'){
        printf("\n");
      }
    }while(c!=EOF);
    return -1;
  }

  fclose(fp);

  return 0;
}