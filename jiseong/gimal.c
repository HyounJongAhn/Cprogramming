
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
int main(void){
	struct complex { double real; double imang; };

    struct complex_add(struct complex x, struct complex y)
    {
        struct complex result;
        result.real = x.real + y.real;
        result.imagin = x.imagin + y.imagin;

        return result;
    }


}
