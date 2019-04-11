#include <stdio.h>
#include <stdlib.h>

void recdisplaytab(int *arr, int range, int size);
int ispalindrome(int *arr, int range, int size);

int main() {
	int *tab;
	int size;
	int i;

	printf("Enter the size of the array:\t");
	fflush(stdout);
	scanf("%d", &size);
	tab = malloc(sizeof(int));

	printf("Enter %d integers to fill the table:\t", size);
	fflush(stdout);

	for(i = 0; i < size; i++) {
		scanf("%d", &tab[i]);
	}
	recdisplaytab(tab, 0, size);
	ispalindrome(tab, 0, size) ?
		printf("The array is a palindrome.\n") :
		printf("The array is not a palindrome.\n");
	return 0;
}

void recdisplaytab(int *arr, int range, int size) {
	int i;
	int l;
	
	if (range < size) {
		printf("%d\t", arr[range]);
		recdisplaytab(arr, ++range, size);
	} else {
		printf("\n");
	}
}

int ispalindrome(int *arr, int range, int size) {

	if (range >= 1) {
		return 1;
	} else {
		if (arr[range] == arr[size - 1 - range]) {
			return ispalindrome(arr, ++range, --size);
		} else {
			return 0;
		}
	}
}
