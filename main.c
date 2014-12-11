#include <stdio.h>
#include "fann.h"

int main(int argc, char *argv[])
{
	unsigned int layers[5] = {38, 31, 24, 11, 9};
	struct fann *ann = fann_create_standard_array(5, layers);
	fann_set_activation_function_hidden(ann, FANN_LINEAR);
    	fann_set_activation_function_output(ann, FANN_LINEAR);
	fann_train_on_file(ann, "scotland.data", 100000, 1000, 1);
	fann_save(ann, "scotland_test.net");
	fann_destroy(ann);
	return 0;
} 
