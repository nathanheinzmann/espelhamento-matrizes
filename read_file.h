#include <stdio.h>
#include <stdlib.h>

#define MATIRX_SIZE 35
#define DEBUG "YES"

void printMatrix(char matrix[MATIRX_SIZE][MATIRX_SIZE])
{
  for (int i = 0; i < MATIRX_SIZE; i++)
  {
    printf("%3d -> ", i + 1);
    for (int j = 0; j < MATIRX_SIZE; j++)
    {
      printf("%c,", matrix[i][j]);
    }
    printf("\n");
  }
}

void readScilabMatrixFile(char matrix[MATIRX_SIZE][MATIRX_SIZE])
{
  char name[120];
  char buff[1200];
  FILE *file;

  printf("Enter file name: ");
  scanf("%99s", name);

  file = fopen(name, "r");

  int matrixLineIterator = 0;
  int matrixColumnIterator = 0;

  for (int i = 0; matrixLineIterator < MATIRX_SIZE; i++)
  {
    fgets(buff, 1023, (FILE *)file);
    if (i >= 1)
    {
      matrixColumnIterator = 0;
      for (int j = 0; matrixColumnIterator < MATIRX_SIZE; j++)
      {
        if (buff[j] == '1' || buff[j] == '0')
        {
          matrix[matrixLineIterator][matrixColumnIterator] = buff[j];
          printf("%d columns\n", matrixColumnIterator);
          matrixColumnIterator++;
        }
      }
      matrixLineIterator++;
    }
  }

  fclose(file);

  if (DEBUG == "YES")
    printMatrix(matrix);
};
