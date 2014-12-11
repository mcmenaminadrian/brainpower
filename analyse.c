#include <stdio.h>
#include "floatfann.h"

int main()
{
	fann_type input[38];
	input[0] = 1;
	input[1] = 0;
	input[2] = 0;
	input[3] = 0;
	input[4] = 0;
	input[5] = 0;
	input[6] = 0;
	input[7] = 0;
	input[8] = 86184;
	input[9] = 47.7;
	input[10] = 1;
	input[11] = 16.4;
	input[12] = 15.4;
	input[13] = 35.3;
	input[14] = 91.2;
	input[15] = 42.8;
	input[16] = 45.1;
	input[17] = 60.4;
	input[18] = 0.9;
	input[19] = 66.7;
	input[20] = 12.1;
	input[21] = 20;
	input[22] = 33.3;
	input[23] = 14.7;
	input[24] = 46.9;
	input[25] = 65.7;
	input[26] = 3;
	input[27] = 10.6;
	input[28] = 14.2;
	input[29] = 27;
	input[30] = 15;
	input[31] = 5;
	input[32] = 42;
	input[33] = 0.1;
	input[34] = 0.7;
	input[35] = 0.4;
	input[36] = 0.7;
	input[37] = 0.1; 

	struct fann *ann = fann_create_from_file("scotland_test.net");

	fann_type *calc_out = fann_run(ann, input);
	printf("Labour: %f, Con: %f, LD: %f, SNP: %f\n", calc_out[0], calc_out[1],
		calc_out[2], calc_out[3]);
	fann_destroy(ann);
	return 0;
}

