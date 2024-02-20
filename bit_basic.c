#include <stdlib.h> 

typedef struct node {
	int value;
	struct node* next;
};

void setNum2X(unsigned int *x, unsigned int num) {
	*x = *x & 0 | num;
}

void setBit(unsigned int *num, int pos) {
	*num |= (1<<pos);
}

void resetBit(unsigned int *num, int pos) {
	*num &= ~(1<<pos);
}

int getBit(unsigned int *num, int pos) {
	return (*num >> pos) & 0b1;
}

void reverseBit(unsigned int *num, int pos) {
	*num ^= (1<<pos);
}

int main() {
	unsigned int value = 0b0000;
	unsigned int *x = &value;
	printf("%d\n", *x);
	setBit(x, 4);
	printf("%d\n", *x);
	
	printf("%d\n", getBit(x, 4));
	
	resetBit(x, 4);
	printf("%d\n", *x);
	
	reverseBit(x, 4);
	printf("%d\n", *x);
	
	setNum2X(x, 23);
	unsigned int flag = 0b1;
	printf("%d\n", *x);
