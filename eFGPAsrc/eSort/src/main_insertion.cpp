#include "insertion_sort.h"
#include <iostream>
#include "stdio.h"
#include "sds_lib.h"
int main(){
	int fail = 0;
	DTYPE A[SIZE] = {1,6,3,7,2,5,3,0,9,10,11,12,13,14,15,8};

    //DTYPE * B;
    //B = (DType *)sds_alloc(SIZE* sizeof(DType));
	DTYPE B[SIZE];
	sds_free(B);


	insertion_sort_parallel(A, B);

    for(int i = 0; i < SIZE; i++)
        std::cout << B[i] << " ";
    std::cout << "\n";

	for(int i = 1; i < SIZE; i++) {
        if(B[i] < B[i-1]) {
            std::cout << i << " " << B[i-1] << ">" << B[i] <<
                "\n";
            fail = 1;
        }
    }

	if(fail == 1)
		printf("FAILED\n");
	else
		printf("PASS\n");

	return fail;
}
