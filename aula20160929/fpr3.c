#include <stdio.h>


void comparacao(int A[], int B[], int n, int m, int C[]);

int main() {
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
int n = sizeof(A)/sizeof(int);
int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
int C [1000];
int m = sizeof(B)/sizeof(int);
	comparacao(A,B,n,m,C);
	return 0;
}

void comparacao(int A[], int B[], int n, int m, int C[]) {
	int i, j, k= 0;
	for(i = 0; i <n; i++)
        for(j=0; j<m;j++)
		if(A[i]==B[j])
            {
			printf("%d\n", B[j]);
            }

}
