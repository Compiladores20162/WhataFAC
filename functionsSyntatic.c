#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_variables(){

  FILE *simbolsTable;
  char contentType[50];
  char contentName[300];

  simbolsTable = fopen("SimbolsTable.txt", "r");

    if(simbolsTable == NULL)
      printf("Não abriu um arquivo de entrada de variaveis\n");

    while(!feof(simbolsTable)){
      //fscanf(simbolsTable,"%s",contentName);
      //fgets(content, 300, TypeVariables);
      fgets(contentName, 300, simbolsTable);
      if(feof(simbolsTable))
        break;

      //Dont print structs
      if (contentName[0] == 's' && contentName[1] == 't' && contentName[2] == 'r' && contentName[3] == 'u' && contentName[4] == 'c' && contentName[5] == 't')
      {
        while(strcmp(contentName, "} ;\n") != 0)
        {
          fgets(contentName, 300, simbolsTable);
        }
        fgets(contentName, 300, simbolsTable);
      }
      printf("\t%s",contentName);
    }
  fclose(simbolsTable);
}



char* getTillLineBreak(char* sentense)
{
  char* new_sentense;
  int count;

  new_sentense =(char*) calloc(strlen(sentense), sizeof(char));

  for(count = 0; count<strlen(sentense); count++)
  {
    if (sentense[count] == '\n')
    {
      sentense = new_sentense;
      return sentense;
    }
    else
      new_sentense[count] = sentense[count];
  }
}


void saveNameVariables (char content[50])
{
  FILE *fp;

  fp = fopen("SimbolsTable.txt", "a+");
  if(fp == NULL)
      printf("\n\n\nNão abriu!\n\n\n");

  int qtdLetras = 0;
  while(content[qtdLetras] != ' '){
    fprintf(fp, "%c", content[qtdLetras]);
    qtdLetras++;
  }
  fclose(fp);
}




void defineDataType(char content[50])
{
  FILE *fp;
  fp = fopen("SimbolsTable.txt" , "r+");
  int areFinal = 0;
  if(fp == NULL)
      printf("\n\n\nNão abriu!\n\n\n");

  char type[10] , name[50] , caracter;
  int barraN_ascii = 10 , achou = 0;
  while(!feof(fp)){
    fscanf(fp , "%s %s" , type , name);
    if (strcmp(content , name) == 0){
      achou = 1;
      if (strcmp(type,"int") == 0){
        printf("%%d\"" );
        printf(", &%s);\n" , name);
      } else if (strcmp(type,"double") == 0){
          printf("%%lf\"" );
          printf(", &%s);\n" , name);
      } else if (strcmp(type,"char") == 0){
          printf("%%s\"");
          printf(", &%s);\n" , name);
        }
    }
    do{
      if(feof(fp)){
        areFinal = 1;
        break;
      }
      caracter = fgetc(fp);

    }while( caracter != barraN_ascii);
    if(areFinal == 1 || achou == 1){
      break;
    }
  }
  if (achou == 0){
    insertError("Variavel nao foi declarada!\n");
  }
  fclose(fp);
}

void saveFloatDataVariables (double numero)
{
  FILE *fp;

  fp = fopen("SimbolsTable.txt", "a+");
  if(fp == NULL)
      printf("\n\n\nNão abriu!\n\n\n");


  fprintf(fp, " = %lf", numero);

  fprintf(fp, ";\n");
  fclose(fp);
}

void saveIntDataVariables (int numero)
{
  FILE *fp;

  fp = fopen("SimbolsTable.txt", "a+");
  if(fp == NULL)
      printf("\n\n\nNão abriu!\n\n\n");


  fprintf(fp, " = %d", numero);

  fprintf(fp, ";\n");
  fclose(fp);
}

void printPointComma(){
  FILE *fp;

  fp = fopen("SimbolsTable.txt", "a+");
  if(fp == NULL)
      printf("\n\n\nNão abriu!\n\n\n");

  fprintf(fp, " ;\n");
  fclose(fp);
}

void printOpenBrackets(){
  FILE *fp;
  fp = fopen("SimbolsTable.txt", "a+");
  if(fp == NULL)
      printf("\n\n\nNão abriu!\n\n\n");

  fprintf(fp, " {\n");
  fclose(fp);
}

void printCloseBrackets(){
  FILE *fp;
  fp = fopen("SimbolsTable.txt", "a+");
  if(fp == NULL)
      printf("\n\n\nNão abriu!\n\n\n");

  fprintf(fp, "\n}");
  fclose(fp);
}


void printStruct()
{
  FILE *fp;
  char content[100];

  fp = fopen("SimbolsTable.txt", "r+");
  if(fp == NULL)
      printf("\n\n\nNão abriu!\n\n\n");

  printf("\n\n");
  while(!feof(fp))
  {
    fgets(content, 100, fp);
    // printf("%s\n", content);

    if (content[0] == 's' && content[1] == 't' && content[2] == 'r' && content[3] == 'u' && content[4] == 'c' && content[5] == 't')
    {
      printf("%s\n", content);
      while(strcmp(content, "} ;\n") != 0)
      {
        fgets(content, 100, fp);
        printf("%s", content);
      }
      printf("\n\n");
    }
  }
}

void insertError(char error[100]){
  FILE *fp;
  fp = fopen("logOfErrors.txt","a+");
  if(fp == NULL)
    printf("Erro ao abrir o arquivo!\n");

  fprintf(fp,"%s", error);

  fclose(fp);
}
int verifyErrors(){
  FILE *fp;
  fp = fopen("logOfErrors.txt","r+");
  if(fp == NULL){
    printf("Erro ao abrir o arquivo!\n");
    return 0;
  }

  char c;
  do{
    c = fgetc(fp);
    printf("%c", c);

  }while(c!=EOF);

  fclose(fp);

  return -1;
}