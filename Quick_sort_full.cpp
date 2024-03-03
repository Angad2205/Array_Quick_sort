#include <stdio.h>

void printarray(int *, int);
int partition(int A[], int, int);
void quicksort(int A[], int, int);

int main() {
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter the elements of array: ");
    int i;
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    quicksort(array, 0, size - 1);
    printf("Sorted array: ");
    printarray(array, size);
    return 0;
}

int partition(int A[], int high, int low) {
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int flag;
    do {
        while (A[i] < pivot) {
            i++;
        }
        while (A[j] > pivot) {
            j--;
        }
        if (j > i) {
            flag = A[i];
            A[i] = A[j];
            A[j] = flag;
        }
    } while (j > i);
    flag = A[low];
    A[low] = A[j];
    A[j] = flag;
    return j;
}

void quicksort(int A[], int low, int high) {
    if (low < high) {
        int quicksortindex = partition(A, high, low);
        quicksort(A, low, quicksortindex - 1);
        quicksort(A, quicksortindex + 1, high);
    }
}

void printarray(int *ap, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", *(ap + i));
    }
    printf("\n");
}

