#include <stdio.h>

int soma(int n, int A[]);
int main() {
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int N = sizeof(A)/sizeof(int);
    int r=soma(N,A);
	printf("Soma %d: \n", r);

	return 0;
}


int soma(int n, int A[]) {

  return (n == 0)? 0 : soma(n-1, A)+A[n-1];
}
