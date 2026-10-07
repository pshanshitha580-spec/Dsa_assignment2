# DSA Assignment 2
## Merge Sort and Quick Sort

### Objective

To implement Merge Sort and Quick Sort for sorting the given
fixed-length IDs and compare their performance using
intermediate steps, complexity analysis and execution results.

### Input Data

324, 125, 456, 218, 102, 389, 275, 147

### Algorithms Implemented

1. Merge Sort
2. Quick Sort

### Final Sorted Sequence

102, 125, 147, 218, 275, 324, 389, 456

### Quick Sort Pivot

The last element is selected as the pivot.

### Repository Contents

- `merge_sort.c` - Merge Sort source code
- `quick_sort.c` - Quick Sort source code
- `input.txt` - Given input data
- `merge_sort_output.txt` - Merge Sort execution output
- `quick_sort_output.txt` - Quick Sort execution output
- `merge_sort_trace.txt` - Merge Sort trace
- `quick_sort_trace.txt` - Quick Sort partition trace
- `complexity_analysis.txt` - Complexity analysis
- `comparison_table.txt` - Comparison of both algorithms
- `conclusion.txt` - Final conclusion

### Complexity Summary

| Algorithm | Best | Average | Worst | Extra Space |
|-----------|------|---------|-------|-------------|
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) average |

### Conclusion

Merge Sort provides guaranteed O(n log n) worst-case
performance, whereas Quick Sort can have O(n²) worst-case
performance depending on pivot selection.

For applications where predictable performance is important,
Merge Sort is a suitable choice. Quick Sort can be efficient
in practice with a good pivot selection strategy.
