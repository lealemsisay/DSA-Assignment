# Ternary and Interpolation Searching algorisms

## 1. Ternary Search Algorithm 

**Algorithm:**

Input: A sorted array arr[] and a target value target.
Output: Index of the target in the array if found, otherwise -1.

**Steps**

Set the initial values of low (starting index) and high (ending index).
While low <= high:
Calculate two mid points:
If the target is at mid1, return mid1.
If the target is at mid2, return mid2.
If the target is less than arr[mid1], search the left third by updating high = mid1 - 1.
If the target is greater than arr[mid2], search the right third by updating low = mid2 + 1.
Otherwise, search between mid1 and mid2, updating low = mid1 + 1 and high = mid2 - 1.
If the loop ends without finding the target, return -1.

## How It Works
Ternary Search is similar to Binary Search, but instead of dividing the array into two parts, it divides it into three parts. This means that at each step, the search space is divided into three subarrays rather than two.

It works by selecting two midpoints (say, mid1 and mid2) and comparing the target element with the values at these midpoints.
If the target is less than the first midpoint, search the left third.
If the target is greater than the second midpoint, search the right third.
If the target is between the two midpoints, search the middle third.
This process continues until the target is found or the search space is exhausted.

**Steps**

Find two midpoints: mid1 = low + (high - low) / 3 and mid2 = high - (high - low) / 3.
Compare the target with the values at mid1 and mid2.
Recur on the appropriate third of the array.

**Time Complexity**

Best Case (O(1)): If the target is found at one of the midpoints.
Worst Case (O(log₃ n)): At each step, the search space is divided into three parts. This gives a logarithmic time complexity with base 3.
Average Case (O(log₃ n)): The time complexity on average also follows a logarithmic pattern based on the number of divisions by 3.

**Space Complexity**

O(1): Ternary search only requires a constant amount of space.

## 2. Interpolation Search Algorithm

**Algorithm:**

Input: A sorted array arr[] and a target value target.
Output: Index of the target in the array if found, otherwise -1.

**Steps:**

Set the initial values of low (starting index) and high (ending index).
While low <= high and target is within the range of arr[low] and arr[high]:
Calculate the probable position pos using the formula:
If arr[pos] == target, return pos.
If arr[pos] > target, search the left side by updating high = pos - 1.
If arr[pos] < target, search the right side by updating low = pos + 1.
If the loop ends without finding the target, return -1.

## 2. Interpolation Search

**How It Works:**

Interpolation Search is an improvement over binary search for uniformly distributed data.
Instead of dividing the array into two equal parts as binary search does, interpolation search tries to estimate the position of the target based on the values at the current bounds. It assumes that the target is more likely to be found near values proportional to the target element.
It calculates a probable position of the target
If the target is at this position, it’s returned. Otherwise, the search space is adjusted to the left or right of the probable position.

**Steps**

Calculate the probable position of the target using the interpolation formula.
If the target matches the value at the calculated position, return the index.
If the target is smaller, search the left side; if larger, search the right side.

**Time Complexity**

Best Case (O(1)): If the target is found at the first guess (interpolation).
Worst Case (O(n)): In the case of non-uniformly distributed data, the search space may reduce very slowly, resulting in linear time.
Average Case (O(log log n)): For uniformly distributed data, the algorithm has a logarithmic time complexity based on the number of divisions.

**Space Complexity**

O(1): Interpolation search requires a constant amount of space.

## Summary of Findings

**Ternary Search** is efficient for sorted arrays and works by dividing the search space into three parts at each step. Its time complexity is logarithmic with base 3.

**Interpolation Search** is most effective when data is uniformly distributed. It estimates the target's position and adjusts the search space accordingly, achieving a better average case complexity than binary search.

Both algorithms have a space complexity of O(1), as they only require constant extra space aside from the input array.

