# Complexity Analysis 

## 1.Complexity analysis for insertion sort
**Time Complexity**
Best Case (O(n)): When the array is already sorted, each element is compared only once with its previous element.
Worst Case (O(n²)): When the array is sorted in reverse order, each new element is compared with all previously sorted elements.
Average Case (O(n²)): On average, for an unsorted array, each element is compared to half of the already sorted elements.

## 2.Complexity analysis for Selection Sort 
**Time Complexity**
Best Case (O(n²)): Selection sort always performs the same number of comparisons, regardless of whether the array is sorted or not.
Worst Case (O(n²)): The same as the best case because it doesn't adapt to the sorted order of the array.
Average Case (O(n²)): Always O(n²), as the number of comparisons does not change based on input order.

## 3.Complexity analysis for bubble sort 
**Time Complexity**
Best Case (O(n²)): Like standard selection sort, the number of comparisons remains the same, regardless of the array's initial state.
Worst Case (O(n²)): Similar to selection sort; the algorithm still requires O(n²) comparisons.
Average Case (O(n²)): The time complexity remains O(n²) for all cases.



## Summary of Findings:


## Insertion  pointer-Sort

Best for small or nearly sorted arrays with a best-case time complexity of O(n).
Efficient when the array is already nearly sorted, as fewer comparisons and shifts are needed.

**Weaknesses:**
Worst and average-case time complexity is O(n²), making it inefficient for large, unsorted arrays.

Not well-suited for large datasets due to its quadratic performance in most cases.

## Selection Sort Pointer-based
Strengths:Consistent O(n²) time complexity, regardless of the input order.
Can be useful in memory-sensitive applications where minimizing the number of swaps is critical, as it performs only n-1 swaps.
Weaknesses:Always O(n²) in the worst, average, and best cases, making it inefficient for larger datasets.
Does not adapt to the array's order (no improvement on partially sorted data).


**Bubble pointer Sort**
Strengths: Simple and easy to understand. Performs well for very small datasets or nearly sorted arrays.
Weaknesses: Worst and average-case time complexity of O(n²), making it inefficient for large datasets. Despite its simplicity, it’s often slower than other sorting algorithms like insertion or selection sort due to frequent unnecessary swaps.


## Pointer-based Selection Sort
Strengths:Functionally identical to selection sort but uses pointers for element referencing, which could be beneficial in low-level programming or systems where direct memory access is required.
Weaknesses:The time and space complexity remain O(n²), making it inefficient for large datasets.
Its behavior and performance are essentially the same as the regular Selection Sort, but with a focus on pointer manipulation rather than direct indexing.













