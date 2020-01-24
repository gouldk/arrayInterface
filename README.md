OBJECT API
We created a simple Object class. This class provides two functions: equals and hash. The equals function will return a boolean if the object it is being compared to is the same. The hash function will compute a hash for the current Object and return its value as a size_t.

ARRAY API
We chose to implement the Array data structure. It is a fixed length, which is initially established from the constructor, but provides the ability to resize when a function is called. It provides serveral functions:
length - this will return the current maximum length of the array.
set - point the specified array index to the given object, regardless of any pre-existing stuff at that index.
get - return the object currently pointed to by the given index
remove - remove the object at the specified index from the array
push - add the given object to the next available index (at end of array)
resize - resizes the array to the given size, discarding elements that no longer fit