# Insertion-in-an-array-using-C

An array is a collection of items stored at contiguous memory locations. In this code, you will see that how to insert an element in an array in C.
Given an array arr of size n, And also you know that how to insert an element X in this array arr at a specific position index.

Approach: 
Here’s how to do it.
1. First get the element to be inserted, say x
2. Then get the index at which this element is to be inserted, say index
3. Then shift the array elements from this index to one index forward, and do this for all the other elements next to index.
4. Insert the element x now at the index, as this is now empty.
