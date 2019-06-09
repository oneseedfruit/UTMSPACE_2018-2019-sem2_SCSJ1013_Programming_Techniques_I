// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

#include <stdio.h>

int main (void)
{
  const int ROW_COUNT = 5 ;
  const int COL_COUNT = 4;

  int sales[ROW_COUNT][COL_COUNT];
  float sum_row[ROW_COUNT], sum_col[COL_COUNT];
  float avg_row[ROW_COUNT], avg_col[COL_COUNT];

  int i, j;

  FILE *in_file = fopen("sales_data", "r");

  for (i = 0, sum_row[i] = 0; i < ROW_COUNT; ++i)
  {    
    for (j = 0; j < COL_COUNT; ++j)
    {
      fscanf(in_file, "%d", &sales[i][j]);
      sum_row[i] = sum_row[i] + sales[i][j];
    }
    avg_row[i] = (float) (sum_row[i]) / COL_COUNT;
    fscanf(in_file, "\n");
  }

  for (j = 0, sum_col[j] = 0; j < COL_COUNT; ++j)
  {
    for (i = 0; i < ROW_COUNT; ++i)
    {
      sum_col[j] = sum_col[j] + sales[i][j];
    }
    avg_col[j] = (float) (sum_col[j]) / ROW_COUNT;
    fscanf(in_file, "\n");
  }

  fclose(in_file);

  FILE *out_file = fopen("sales_analysis", "w");

  fprintf(out_file, "\t\t\tSALES ANALYSIS\n");
  fprintf(out_file, "\tQ1\tQ2\tQ3\tQ4\tTOTAL\tAVERAGE\n");
  fprintf(out_file, "========================================================\n");
  for (i = 0; i < ROW_COUNT; ++i)
  {
    fprintf(out_file, "ROW %d", i);
    for (j = 0; j < COL_COUNT; ++j)
    {
      fprintf(out_file, "\t%d", sales[i][j]);
    }
    fprintf(out_file, "\t%4d\t%8.3f\n", sum_row[i], avg_row[i]);
  }

  fprintf(out_file, "========================================================\nSUM");  
  for (j = 0; j < COL_COUNT; ++j)
  {
    fprintf(out_file, "\t%d", sum_col[j]);
  }  

  fprintf(out_file, "\nAVERAGE");
  for (j = 0; j < COL_COUNT; ++j)
  {
    fprintf(out_file, "\t%.1f", avg_col[j]);
  }
  fprintf(out_file, "\n");

  fclose(out_file);

  return 0;
}
