## Selection Sort

### Description

selection sort is a ***sorting algorithm***, specifically an in-place comparison sort. It has O(n^2) time complexity, making it inefficient on large lists, and generally performs worse than the similar **[insertion sort](https://github.com/danz1ka/Competitive-Programming/tree/master/Implementation%20-%20Sorting/Insertion%20Sort)**. **Selection sort** is noted for its simplicity, and it has performance advantages over more complicated algorithms in certain situations, particularly where auxiliary memory is limited.

### Performance

- Worst Case: O(n^2) comparisons and swaps 
- Average Case: O(n^2) comparisons and swaps
- Best Case: O(n^2) comparisons, O(1) swaps

### Sorting Animation

- **Selection Sort Dry-run Animation**

![Animation1](https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif)

- **Scatter Plot Animation**

![Animation2](https://upload.wikimedia.org/wikipedia/commons/thumb/b/b0/Selection_sort_animation.gif/250px-Selection_sort_animation.gif)

### Pseudocode

This is the basic logic behind insertion sort:

```
for i ← 1 to length(A)-1
    min ← i
    for j ← i+1 to length(A)
        check if A[min]<A[j]
            min ← j 
    end for
    
    swap A[i] and A[min]
end for
```

### Reference

- [Wikipedia](https://en.wikipedia.org/wiki/Selection_sort)