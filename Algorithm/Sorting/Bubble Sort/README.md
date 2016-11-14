## Selection Sort

### Description

**Bubble sort**, sometimes referred to as **sinking sort**, is a simple ***sorting algorithm*** that repeatedly steps through the list to be sorted, compares each pair of adjacent items and swaps them if they are in the wrong order. The pass through the list is repeated until no swaps are needed, which indicates that the list is sorted.

### Performance

- **Worst Case:** *O(n^2)* comparisons and swaps 
- **Average Case:** *O(n^2)* comparisons and swaps
- **Best Case:** *O(n^2)* comparisons, O(1) swaps

### Sorting Animation

- **Bubble Sort Dry-run Animation**

![Animation1](https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif)

- **Scatter Plot Animation**

![Animation2](https://upload.wikimedia.org/wikipedia/commons/3/37/Bubble_sort_animation.gif)

### Pseudocode

This is the basic logic behind insertion sort:

```
procedure bubbleSort( A : list of sortable items )
   n = length(A)
   repeat 
     swapped = false
     for i = 1 to n-1 inclusive do
       /* if this pair is out of order */
       if A[i-1] > A[i] then
         /* swap them and remember something changed */
         swap( A[i-1], A[i] )
         swapped = true
       end if
     end for
   until not swapped
end procedure
```

### Reference

- [Wikipedia](https://en.wikipedia.org/wiki/Bubble_sort)
