// Copyright 2021 NNTU-CS
int cbinsearch(int *arr, int size, int value) {
    int minn = 0;
    int maxx = size - 1;
    int rsl = 0;
    while (minn <= maxx) {
        int midd = (maxx + minn) / 2;
        if (value > arr[midd]) {
            minn = midd + 1;
        } else if (value < arr[midd]) {
            maxx = midd - 1;
        } else {
            for (int i = 1; arr[midd] == arr[midd - i]; i++) rsl++;
            for (int i = 0; arr[midd] == arr[midd + i]; i++) rsl++;
            return rsl;
        }
    }
    return 0;
}
