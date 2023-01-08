## A repository containg Hash Tables and Functions algorithm

## What is a HarshTable Data Structure?

- A hash function is a function that takes an input (called the "key") and maps it to an integer value (called the "hash value"), which is used to index an array (called the "hash table"). The main purpose of a hash function is to distribute the keys uniformly across the array, so that key-value pairs can be stored and retrieved efficiently.

- A good hash function should have the following properties:
	- It should be easy to compute the hash value for any given key.
	- It should distribute the keys uniformly across the array, so that the keys are evenly distributed among the slots of the hash table.
	- It should produce a different hash value for different keys, even if they have similar values.

	- It should produce the same hash value for the same key every time it is called, so that the key can be retrieved consistently

- Therefor A hash table is a data structure that stores key-value pairs in an array, using a hash function to map the keys to indices in the array. To store a key-value pair in a hash table, the hash function is used to compute the hash value of the key, and the key-value pair is stored at the corresponding index in the array. To retrieve a value for a given key, the hash function is used to compute the hash value of the key, and the value is retrieved from the corresponding index in the array.


**Author: [Shannon Simiyu](https://www.linkedin.com/in/shannon-simiyu-660360200/)**

*ALX school - 2022 Cohort 9*
=======
This is an assignment on 0x1A-hash_tables
