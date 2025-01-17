#include <stdio.h>

int minmax(int tab[], int taille, int* min, int* max) {
	*min = tab[0];
	*max = tab[0];

	for (int i = 0; i < taille; i++) {
		if (tab[i] < *min) {
			*min = tab[i];
		}
		if (tab[i] > *max) {
			*max = tab[i];
		}
	}
	return 0;
}

int main() {
	int min = 0;
	int max = 0;
	int tab[] = {-2, 24, 12, -5, 156, 4};
	minmax(tab, 6, &min, &max);
	printf("Min : %d et Max : %d", min, max);
	return 0;
}