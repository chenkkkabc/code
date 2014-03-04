/*
void median_sort(int array[], int n) {
    median(array, 0, n-1);
}

void median(int array[], int l, int r) {
    if (r <= l)
        return;
    find median value array[me] in array[l, r];
    mid = (r+l) / 2;
    swap(array, mid, me);
    int i;
    for (i = l; i <= mid-1; ++i)
        if(array[i]>array[mid]) {
            find array[k] <= array[mid] where k>mid
            swap(array[i], array[k]);
        }
    median(array, l, mid-1);
    median(array, mid+1, r);
}
*/
