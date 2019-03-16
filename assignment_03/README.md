# Assignment 03

*Compiled with TDM-GCC 5.1.0. Project files are located in their respective folders, to be opened with [Orwell Dev-C++](https://sourceforge.net/projects/orwelldevcpp/), the IDE used in this SCSJ1013 Programming Techniques I class.*

```c
// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian
```

## 01 File Input / Output

![Flowchart for File Input / Output](/assignment_03/01_file_input_output/file_input_output_flowchart.png)

```c
// Algorithm for the program: file_input_output
// 1. Begin.
// 2. Open a file for reading, name it "in_file".
// 3. Open a file for writing, name it "out_file".
// 4. Assign 0 to i.
// 5. If i is less than NUMBER_OF_LINES, go to the next step, otherwise go to step 16.
// 6. Read NAME_CHARACTER_COUNT number of characters in the file "in_file", store them in name.
// 7. Read in values of the scores, store them in score_1 to score_5.
// 8. Calculate the sum of score_1 to score_5, store the value in sum.
// 9. Calculate the average of all the scores, store the value in average.
// 10. Write name to the file "out_file".
// 11. Write score_1, score_2, score_3, score_4, score_5, sum, average to the file "out_file".
// 12. Write name to the output.
// 13. Write score_1, score_2, score_3, score_4, score_5, sum, average to the output.
// 14. Increment i by 1 and assign the value back to i.
// 15. Go to step 5.
// 16. Close the file "in_file".
// 17. Close the file "out_file".
// 18. End.

#include <stdio.h>

int main (void)
{
	FILE *in_file = fopen("in_file", "r");
	FILE *out_file = fopen("out_file", "w");
	
	const int NAME_CHARACTER_COUNT = 25;
	const int NUMBER_OF_LINES = 5;
	
	float score_1, score_2, score_3, score_4, score_5, sum, average;	
	char name[NAME_CHARACTER_COUNT];
	
	fprintf(out_file, "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	fprintf(out_file, "STUDENTS                ENG\t\tMAT\t\tSCI\t\tHIS\t\tARTS\tSUM\t\tAVG\n");	
	fprintf(out_file, ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	
	int i;
	for (i = 0; i < NUMBER_OF_LINES; ++i)
	{
		fgets (name, NAME_CHARACTER_COUNT, in_file);
		fscanf(in_file, "%f%f%f%f%f\n", &score_1, &score_2, &score_3, &score_4, &score_5);
	
		sum = score_1 + score_2 + score_3 + score_4 + score_5;
		average = sum / 5.0;
		
		fputs(name, out_file);
		fprintf(out_file, "%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", score_1, score_2, score_3, score_4, score_5, sum, average);
		
		puts(name);
		printf(" Scores: %.2f %.2f %.2f %.2f %.2f\n Sum: %.2f\n Average: %.2f\n\n", score_1, score_2, score_3, score_4, score_5, sum, average);
	}
	
	fclose(in_file);
	fclose(out_file);
	
	return 0;
}

```

```c
// Input & Output 1
//
// Input (from the file "in_file")
// Eenie                     56 98 53 25 25
// Meanie                    12 52 85 69 33
// Mynie                     55 36 96 58 23
// Moe                       23 58 77 78 52
// Ein                       12 20 36 98 77
//
// Output (displayed in the terminal)
// Eenie
//  Scores: 56.00 98.00 53.00 25.00 25.00
//  Sum: 257.00
//  Average: 51.40
//
// Meanie
//  Scores: 12.00 52.00 85.00 69.00 33.00
//  Sum: 251.00
//  Average: 50.20
//
// Mynie
//  Scores: 55.00 36.00 96.00 58.00 23.00
//  Sum: 268.00
//  Average: 53.60
//
// Moe
//  Scores: 23.00 58.00 77.00 78.00 52.00
//  Sum: 288.00
//  Average: 57.60
//
// Ein
//  Scores: 12.00 20.00 36.00 98.00 77.00
//  Sum: 243.00
//  Average: 48.60
//
// Output (from the file "out_file")
// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
// STUDENTS                ENG		MAT     SCI     HIS     ARTS    SUM     AVG
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// Eenie                   56.00	98.00	53.00	25.00	25.00	257.00	51.40
// Meanie                  12.00	52.00	85.00	69.00	33.00	251.00	50.20
// Mynie                   55.00	36.00	96.00	58.00	23.00	268.00	53.60
// Moe                     23.00	58.00	77.00	78.00	52.00	288.00	57.60
// Ein                     12.00	20.00	36.00	98.00	77.00	243.00	48.60
```


