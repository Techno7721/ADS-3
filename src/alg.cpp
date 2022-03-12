// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int count = 0;
    int i = 0;
    int j = size - 1;
    while (i < j) {
        int mid = i + (j - i) / 2;
        if (arr[mid] == value) {
            count += 1;
            for (int k = mid - 1; k >= 0; --k) {
                if (arr[k] != value) {
                    break;
                }
                count += 1;
            }
            for (int k = mid + 1; k < size; ++k) {
                if (arr[k] != value) {
                    break;
                }
                count += 1;
            }
            return count;
        } else if (arr[mid] > value) {
            j = mid;
        } else {
            i = mid + 1;
        }
    }
    if (arr[size - 1] == value) {
        count += 1;
    }
    return count;
}
