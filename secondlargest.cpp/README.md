# Smallest Number in Array# Smallest Number in Array
## Algorithm
Initialize two variables:
first with the first element of the array (assumed largest so far).
second with -1 (or a value smaller than any possible array element).
Iterate through the array starting from the second element.
For each element in the array:
If the element is greater than first:
Update second to be first.
Update first to the current element.
Else if the element is greater than second and not equal to first:
Update second with the current element.
After the loop ends, second will contain the second largest number in the array.