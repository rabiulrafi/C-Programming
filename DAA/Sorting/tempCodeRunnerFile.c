void insertionSort(int array[], int size) {
  for (int i = 1; i < size; i++) {
    int temp = array[i];
    int j = i - 1;
    while (temp < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = temp;
  }
}