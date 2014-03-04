void radix_sort(int array[], int n) {
    int i, base[10], m = 0, divisor = 1;
    int bucket[10] = {0};
    for (i=0; i < n; i++)
    {
        if(array[i] > m)
            m = array[i];
    }

    while (m/divisor > 0)
    {
        for (i=0; i < n; i++)
            bucket[array[i]/divisor % 10]++;
        for (i = 1; i < 10; i++)
            bucket[i] += bucket[i-1];
        for (i = n-1; i >= 0; i--)
            base[--bucket[array[i]/divisor % 10]] = array[i];
        for (i=0; i < n; i++)
            array[i] = base[i];
        divisor *= 10;
    }
}

