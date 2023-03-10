


void listArray(int *pntr, int size) {
    int x; 
    for (x = 0; x < size; x++) {
        printf("array[%d]=%d\n", x, pntr[x]);
    };
};

void swap(int *a, int *b) {
    int tmp = a;
    a = b;
    b = tmp;
};

int partition(int *pnt, int low, int high) {
    int pivot = pnt[high];
    int i = (low - 1);
    int j;

    for (j = low; j <= high - 1; j++) {
        if (pnt[j] <= pivot) {
            i++;
            swap(pnt[i], arr[j]); // might need &
        };
    };
    swap(arr[i + 1], arr[high]);
    return (i + 1);
};

void quick(int *pnt, int low, int high) {
    if (low < high) {
        int pIndex = partition(pnt, low, high);
        quicksort(pnt, low, pIndex - 1);
        quicksort(pnt, pIndex + 1, high);
    };
};

int main() {
    int array[] = { 6, 2, 19, 7, 1, 13, 9, 14, 23 };
    int size = sizeof(array) / sizeof(array[0]);
    listArray(array, size);
    quick(array, 0, size - 1); 
    printf("Array was sorted!!\n");
    listArray(array, size);


    return 0;
}
