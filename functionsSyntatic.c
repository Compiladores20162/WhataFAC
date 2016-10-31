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
      //fgets(contentType, 300, TypeVariables);
      fgets(contentName, 300, simbolsTable);
      if(feof(simbolsTable))
        break;
      printf("%s",contentName);
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
  if(fp == NULL)
      printf("\n\n\nNão abriu!\n\n\n");

  char type[10] , name[50] , caracter;
  int barraN_ascii = 10;

  while(!feof(fp)){
    fscanf(fp , "%s %s" , type , name);
    if (strcmp(content , name) == 0){
      if (strcmp(type,"int") == 0){
        printf("%%d\"" );
      } else if (strcmp(type,"double") == 0){
          printf("%%lf\"" );
      } else if (strcmp(type,"char") == 0)
          printf("%%s\"");

      printf(", &%s);\n" , name);
      break;
    }
    caracter = fgetc(fp);
    while( caracter != barraN_ascii ){
      if(feof(fp)){
        break;
      }
      caracter = fgetc(fp);
    }
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
