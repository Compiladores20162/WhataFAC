#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printContents ()
{
  FILE *fp;
  char content[50];

  fp = fopen("printContent.txt", "a+");
  if(fp == NULL)
      printf("\n\n\nNão abriu!\n\n\n");

  fscanf(fp, "%s", content);
  fclose (fp);

  printf("%s", content);
}

void print_variables(){

  FILE *NameVariables;
  FILE *TypeVariables;
  char contentType[50];
  char contentName[50];

  NameVariables = fopen("printNameVariables.txt", "r");

    if(NameVariables == NULL)
      printf("Não abriu um arquivo de entrada de variaveis\n");

    while(!feof(NameVariables)){
      fscanf(NameVariables,"%s",contentName);
      //fgets(contentType, 50, TypeVariables);
      //fgets(contentName, 50, NameVariables);
      if(feof(NameVariables))
        break;
      printf("%s;\n",contentName);
    }
  fclose(NameVariables);
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

  fp = fopen("printNameVariables.txt", "a+");
  if(fp == NULL)
      printf("\n\n\nNão abriu!\n\n\n");

  int qtdLetras = 0;
  while(content[qtdLetras] != ' '){
    fprintf(fp, "%c", content[qtdLetras]);
    qtdLetras++;
  }
  fprintf(fp, "\n");
  fclose(fp);
}

void returnNameVariable(char letra[50]){
  int qtdLetras = 0;

  while(letra[qtdLetras] != ' '){
    printf("%c\n", letra[qtdLetras] );
    qtdLetras++;
  }
  char *palavra;
  palavra = calloc(qtdLetras , sizeof(char));
  

}
