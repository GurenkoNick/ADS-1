// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int i = 0; count = 0;
  int j = size - 1;
  while (i < j) {
    int mid = i + (j - i) / 2;
    if (arr[mid] == value)
      ++count;
    else if (arr[mid] > value)
      j = mid;
    else 
      i = mid + 1;
  }
  if (count > 0)
    return count;
  else
    return 0;
}
