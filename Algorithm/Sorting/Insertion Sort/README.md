## Insertion Sort

### Description

Insertion sort belongs to ***sorting algorithms*** class that builds the final sorted array (or list) one item at a time. It is much less efficient on large lists than more advanced algorithms such as **quicksort**, **heapsort**, or **mergesort**.

### Performance

- **Worst Case:** *O(n^2)* comparisons and swaps 
- **Average Case:** *O(n^2)* comparisons and swaps
- **Best Case:** *O(n^2)* comparisons, O(1) swaps

### Sorting Animation

- **Insertion Sort Dry-run Animation**

![Animation1](https://upload.wikimedia.org/wikipedia/commons/0/0f/Insertion-sort-example-300px.gif)

- **Histogram Distribution Animation**

![Animation2](https://upload.wikimedia.org/wikipedia/commons/4/42/Insertion_sort.gif)

### Pseudocode

This is the basic logic behind insertion sort:

```
for i ← 1 to length(A)-1
    j ← i
    while j > 0 and A[j-1] > A[j]
        swap A[j] and A[j-1]
        j ← j - 1
    end while
end for
```

### Reference

- [Wikipedia](https://en.wikipedia.org/wiki/Insertion_sort)
