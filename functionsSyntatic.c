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

  fprintf(fp, ";\n");
  fclose(fp);
}

void increaseQuantityOfCloses(){
  FILE *in;
  FILE *out;
  char content[50];
  int new_value = 0;

  in = fopen("quantityOfCloses.txt", "r+");
  if(in == NULL){
      new_value = 0;
  }else{
    fscanf(in, "%s", content);
  }
  new_value = atoi(content);
  out = fopen("quantityOfCloses.txt", "w+");
  new_value++;
  sprintf(content, "%i", new_value);
  fprintf(out, "%s", content);

  fclose(out);
}

void printQuantityOfCloses(){
  FILE *fp;
  char content[50];
  int quantity = 0;
  int i = 0;

  fp = fopen("quantityOfCloses.txt", "r");

  if(fp == NULL)
      printf("Não abriu o arquivo de quantidade de fechamentos\n");

  fscanf(fp, "%s", content);
  quantity = atoi(content);
  for(i = 0; i < quantity; i++){
    printf("\t}\n");
  }

  fclose (fp);
}
void setZeroQuantityOfCloses(){
  FILE *in;
  FILE *out;
  char content[50];
  int new_value = 0;

  out = fopen("quantityOfCloses.txt", "w+");
  sprintf(content, "%i", new_value);
  fprintf(out, "%s", content);

  fclose(out);
}
