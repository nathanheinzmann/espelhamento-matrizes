#ifndef FILE_H
#define FILE_H

#include <stdio.h>
#include <stdlib.h>
#include "read_file.h"

void getVerticalMatrix()
{
  char matrix[MATIRX_SIZE][MATIRX_SIZE];
  readScilabMatrixFile(matrix);

  FILE *pont_arq;
  pont_arq = fopen("nathan_vertical.txt", "w");

  int i, j;

  fprintf(pont_arq, "matriz = [\n");

  for (i = MATIRX_SIZE - 1; i >= 0; i--)
  {
    fprintf(pont_arq, "    ");
    for (j = 0; j < MATIRX_SIZE; j++)
    {
      if (j == MATIRX_SIZE - 1)
        fprintf(pont_arq, "%c ;\n", matrix[i][j]);
      else
        fprintf(pont_arq, "%c, ", matrix[i][j]);
    }
  }
  fprintf(pont_arq, "]");
}

void getHorizontalMatrix()
{
  char matrix[MATIRX_SIZE][MATIRX_SIZE];
  readScilabMatrixFile(matrix);

  FILE *pont_arq;
  pont_arq = fopen("nathan_horizontal.txt", "w");

  int i, j;

  fprintf(pont_arq, "matriz = [\n");

  for (i = 0; i < MATIRX_SIZE; i++)
  {
    fprintf(pont_arq, "    ");
    for (j = MATIRX_SIZE - 1; j >= 0; j--)
    {
      if (j == 0)
        fprintf(pont_arq, "%c ;\n", matrix[i][j]);
      else
        fprintf(pont_arq, "%c, ", matrix[i][j]);
    }
  }
  fprintf(pont_arq, "]\n");
}

#endif