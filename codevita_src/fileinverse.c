#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printMatrix(int numColumn, int numRow ,float matrix[][11]);

int main (int argc,char *argv[]) {

  int num;
  int i,j;
  float a[10][11],determinant=0;

  FILE *inputMatrix=fopen("matrix","r");
  fscanf(inputMatrix,"%d",&num);
  int numRow=num;
  int numColumn=num+1;

  for(i=0;i<numRow;++i){
     for(j=0;j<numColumn;++j){
         fscanf(inputMatrix,"%f",&a[i][j]);
     }
  }
  fclose(inputMatrix);

  printMatrix(numColumn,numRow,a);



  for(i=0;i<3;i++)
      determinant = determinant + (a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3] - a[1][(i+2)%3]*a[2][(i+1)%3]));

   printf("\nInverse of matrix is: \n\n");
   for(i=0;i<3;i++){
      for(j=0;j<3;j++)
           printf("%.3f\t",((a[(i+1)%3][(j+1)%3] * a[(i+2)%3][(j+2)%3]) - (a[(i+1)%3][(j+2)%3]*a[(i+2)%3][(j+1)%3]))/ determinant);
       printf("\n");
   }



  return 0;
}


void printMatrix(int numColumn, int numRow ,float matrix[][11]){
   int i = 0, j = 0;
   printf("nc: %i, nr: %i\n",numColumn,numRow);
     for(i = 0 ; i < numRow ; i++)
     {
       for(j = 0 ; j < numColumn ; j++)
       {
         printf("%f  ", matrix[i][j]);
       }
       printf("\n");
     }
     printf("\n");
}

