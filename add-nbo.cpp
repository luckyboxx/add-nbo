#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <netinet/in.h>

void add_nbo(uint8_t buf1[], uint8_t buf2[]) {
	uint32_t* p1 = reinterpret_cast<uint32_t*>(buf1);
	uint32_t* p2 = reinterpret_cast<uint32_t*>(buf2);

	uint32_t n1 = ntohl(*p1);
	uint32_t n2 = ntohl(*p2);

	int add = n1 + n2;

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", n1, n1, n2, n2, add, add);
}

int main(int argc, char *argv[]){
    FILE *fp1, *fp2;
    uint8_t buf1[32], buf2[32];
    
    fp1 = fopen(argv[1], "rb");
	fp2 = fopen(argv[2], "rb");

    fread(buf1, 32, 1, fp1);
    fread(buf2, 32, 1, fp2);

	add_nbo(buf1, buf2);

	fclose(fp1);
	fclose(fp2);

    return 0;
}
