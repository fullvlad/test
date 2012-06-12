#include <stdio.h>
int main() {
	FILE * f = fopen("numere.in","r");
	int nr;
	fscanf(f, "%d", &nr);
	while (nr--) {
		int n;
		fscanf(f, "%d", &n);
		printf("%d ",2*n+1);
	}
	return 0;
}
