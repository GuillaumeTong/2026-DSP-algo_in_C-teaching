#include <stdio.h> 
void main(void) 
{
  int i; 
  char prenom[30]; 
  FILE *FICHIER1; 
  FICHIER1=fopen("/home/chr/premierfichier.txt","w"); 
  for(i=1;i<=10;i++) 
    {
      printf("Rentrez un prénom :\n");
      scanf("%s",prenom); 
      fprintf(FICHIER1,"%s\n",prenom);
    } 
  fclose(FICHIER1);
}
