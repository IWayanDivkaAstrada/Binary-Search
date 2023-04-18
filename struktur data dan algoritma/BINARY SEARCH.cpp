#include "stdio.h"

int binarySearch(int arr[], int target, int rendah, int tinggi) {
    if (rendah > tinggi)
	{
        return -1;
    }

    int tengah = (rendah + tinggi) / 2;

    if (arr[tengah] == target) 
	{
        return tengah;
    } 
	else if (arr[tengah] < target) 
	{
        return binarySearch(arr, target, tengah + 1, tinggi);
    } 
	else 
	{
        return binarySearch(arr, target, rendah, tinggi - 1);
    }
}

int main() {
	int target;
    int arr[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 51 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Target berapa yang anda ingin temukan: ", target);
	scanf("%i", &target);
    int result = binarySearch(arr, target, 0, n - 1);

    if (result == -1) {
        printf("Target %d tidak ditemukan dalam array.\n", target);
    } else {
        printf("Target %d ditemukan pada indeks ke-%d dalam array.\n", target, result);
    }

    return 0;
}
