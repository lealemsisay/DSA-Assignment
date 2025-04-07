# Exponential ,Jump search and Hashing based Searching algorisms

These are three different searching algorithms, each optimized for specific scenarios. Here's a detailed breakdown of how they work and their complexity analysis.

## 1. Exponential Search


**How It Works**
Exponential Search is used to find an element in a sorted array.
It works by first checking if the element is at the first position. Then, it exponentially increases the range of indices to search by repeatedly doubling the index (i.e., 1, 2, 4, 8, 16, ...) until the element is found or the value at the index exceeds the target element.
Once the range containing the element is identified, a binary search is performed within that range to locate the exact position of the target.

**Steps**

If the first element is the target, return the index.
Otherwise, double the index (1, 2, 4, 8, 16, ...) until you find an element greater than or equal to the target.
Perform a binary search between the last found index and the current index.
Complexity Analysis:

**Time Complexity**

Best Case (O(1)): If the element is found at the first position.
Worst Case (O(log n)): The number of steps to double the range is logarithmic, and binary search within that range takes O(log n).
Average Case (O(log n)): Similar to worst case as the doubling of the index follows logarithmic growth.
Space Complexity:
O(1): Exponential search uses a constant amount of space, aside from the input array.

## 2. Jump Search

**How It Works**

Jump Search is an algorithm for finding an element in a sorted array. It works by jumping ahead by a fixed number of steps (block size) rather than scanning one element at a time.
The array is divided into blocks of size √n, where n is the size of the array.
The algorithm starts from the beginning of the array and jumps forward in block-sized steps. When it finds a block that contains the target (the element is smaller than the block’s last element), it performs a linear search within that block.

**Steps**

Compute block size as √n.
Jump ahead by √n elements at a time until you find a block that could contain the target.
Perform a linear search within the block.

**Time Complexity**

Best Case (O(√n)): If the target is found in the first block or if the first comparison is the result.
Worst Case (O(√n) + O(√n)): In the worst case, you may need to jump O(√n) steps and then perform a linear search over another O(√n) elements.
Average Case (O(√n)): This is the expected time complexity when the array is large.

**Space Complexity**

O(1): Jump search uses only a constant amount of space aside from the input array.

## 3. Hashing-based Search

**How It Works**

Hashing is an efficient searching algorithm based on hash tables.
A hash function is used to map keys (the elements being searched) to specific indexes in a hash table (an array-like structure). This allows for direct access to the value, minimizing the time it takes to search for a given element.
In case of hash collisions (i.e., two elements having the same hash), chaining or open addressing is used to resolve conflicts.
    Chaining: A linked list is used at each index to store elements that hash to the same value.
    Open Addressing: The element is placed in the next available slot.

**Steps**

Use a hash function to compute the index of the key.
If no collision occurs, directly access the value.
If a collision occurs, use chaining or open addressing to resolve it.
Perform search, insertion, or removal operations as needed.


**Time Complexity**

**Best Case (O(1))**: The hash function provides a direct mapping to the correct index, and there are no collisions.
**Worst Case (O(n))** In case of many collisions (e.g., poor hash function), the time complexity degrades to O(n), as searching may require traversing a linked list or probing through multiple slots.
**Average Case (O(1))**: If the hash function is good and there are few collisions, operations are expected to take constant time.
**Space Complexity**
O(n): The space complexity is proportional to the number of elements being stored in the hash table.


## Summary of Findings:

**Exponential Search** is a good choice for sorted arrays, especially when the size is large, and the target value is likely to be found in a small portion of the array.
**Jump Search** is ideal for sorted arrays when the data is large, and you want to minimize the number of comparisons. It provides a good balance between linear search and binary search.
**Hashing-based Search** provides constant time lookups (O(1)) in the best case, making it extremely fast for large datasets. However, it can degrade to linear time (O(n)) in the worst case if there are many collisions

