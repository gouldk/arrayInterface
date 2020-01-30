//lang::CwC

#pragma once

#include <stdlib.h>

/**
 * @brief      This class describes an array of objects.
 *             The array is of a fixed size and should only resize when the user specifies it.
 *             Elements of the array are null until set by the user.
 */
class Array : public Object {
    public:
        /**
         * @brief      Constructs a new instance.
         */
        virtual Array(size_t length) {}

        /**
         * @brief      Destroys the object.
         */
        virtual ~Array() {}

         /* @brief      Gets the hash value for this array.
          *             Arrays of the same size with the same elements have the same hash value.
         *
         * @return     a size_t representing the hash value
         */
        size_t hash();

        /**
         * @brief      determines if this array is same as the other one.
         *             Arrays of the same size with the same elements are equal.
         *
         * @param      other  The other object
         *
         * @return     True if equal, false if not
         */
        bool equals(Object* other);

        /**
         * @brief      returns the length of the array
         *
         * @return     the length of the array
         */
        virtual size_t length();

        /**
         * @brief      Searches for the first match and returns the index of it. 
         *             Returns the size of the array if the object cannot be found.
         *
         * @param      obj   The object
         *
         * @return     the index of the first match of the given object
         */
        virtual size_t index_of(Object* obj);

        /**
         * @brief      Stores the given object at the given index in the array. 
         *             Replaces previous element stored there.
         *             Cannot set an index beyond the size of the array.
         *
         * @param      obj   The object
         * @param[in]  idx   The index
         */
        virtual void set(Object* obj, size_t idx);

        /**
         * @brief      Gets the object at the specified index.
         *
         * @param[in]  idx   The index
         *
         * @return     the object stored at the given index in the array
         */
        virtual Object* get(size_t idx);

        /**
         * @brief      Clears the element at the given index by setting it to null.
         *
         * @param[in]  idx   The index
         *
         * @return     the object that was removed
         */
        virtual Object* clear(size_t idx);

        /**
         * @brief      Clears all elements in the array
         */
        virtual void clear_all();

        /**
         * @brief      resizes the array to the given size, discarding elements that no longer fit
         *
         * @param[in]  size  The new size of the array
         */
        virtual void resize(size_t size);

        /**
         * @brief      appends the object at the end of the array. Growing the array if necessary.
         *
         * @param      obj   The object
         */
        virtual void push(Object* obj)
};

/**
 * @brief      This class describes an array of ints.
 *             The array is of a fixed size and should only resize when the user specifies it.
 *             Elements of the array are null until set by the user.
 */
class IntArray : public Array {
    public:
        /**
         * @brief      Constructs a new instance.
         */
        Array(size_t length) {}

        /**
         * @brief      Destroys the object.
         */
        ~Array() {}

         /* @brief      Gets the hash value for this array.
          *             Arrays of the same size with the same elements have the same hash value.
         *
         * @return     a size_t representing the hash value
         */
        size_t hash();

        /**
         * @brief      determines if this array is same as the other one.
         *             Arrays of the same size with the same elements are equal.
         *
         * @param      other  The other object
         *
         * @return     True if equal, false if not
         */
        bool equals(Object* other);

        /**
         * @brief      returns the length of the array
         *
         * @return     the length of the array
         */
        size_t length();

        /**
         * @brief      Searches for the first match and returns the index of it. 
         *             Returns the size of the array if the object cannot be found.
         *
         * @param      obj   The object
         *
         * @return     the index of the first match of the given object
         */
        size_t index_of(int obj);

        /**
         * @brief      Stores the given object at the given index in the array. 
         *             Replaces previous element stored there.
         *             Cannot set an index beyond the size of the array.
         *
         * @param      obj   The object
         * @param[in]  idx   The index
         */
        void set(int obj, size_t idx);

        /**
         * @brief      Gets the object at the specified index.
         *
         * @param[in]  idx   The index
         *
         * @return     the object stored at the given index in the array
         */
        int get(size_t idx);

        /**
         * @brief      Clears the element at the given index by setting it to 0.
         *
         * @param[in]  idx   The index
         *
         * @return     the object that was removed
         */
        int clear(size_t idx);

        /**
         * @brief      Clears all elements in the array
         */
        void clear_all();

        /**
         * @brief      resizes the array to the given size, discarding elements that no longer fit
         *
         * @param[in]  size  The new size of the array
         */
        void resize(size_t size);

        /**
         * @brief      appends the object at the end of the array. Growing the array if necessary.
         *
         * @param      obj   The object
         */
        void push(int obj)
};

/**
 * @brief      This class describes an array of floats.
 *             The array is of a fixed size and should only resize when the user specifies it.
 *             Elements of the array are null until set by the user.
 */
class FloatArray : public Array {
    public:
        /**
         * @brief      Constructs a new instance.
         */
        Array(size_t length) {}

        /**
         * @brief      Destroys the object.
         */
        ~Array() {}

         /* @brief      Gets the hash value for this array.
          *             Arrays of the same size with the same elements have the same hash value.
         *
         * @return     a size_t representing the hash value
         */
        size_t hash();

        /**
         * @brief      determines if this array is same as the other one.
         *             Arrays of the same size with the same elements are equal.
         *
         * @param      other  The other object
         *
         * @return     True if equal, false if not
         */
        bool equals(Object* other);

        /**
         * @brief      returns the length of the array
         *
         * @return     the length of the array
         */
        size_t length();

        /**
         * @brief      Searches for the first match and returns the index of it. 
         *             Returns the size of the array if the object cannot be found.
         *
         * @param      obj   The object
         *
         * @return     the index of the first match of the given object
         */
        size_t index_of(float obj);

        /**
         * @brief      Stores the given object at the given index in the array. 
         *             Replaces previous element stored there.
         *             Cannot set an index beyond the size of the array.
         *
         * @param      obj   The object
         * @param[in]  idx   The index
         */
        void set(float obj, size_t idx);

        /**
         * @brief      Gets the object at the specified index.
         *
         * @param[in]  idx   The index
         *
         * @return     the object stored at the given index in the array
         */
        float get(size_t idx);

        /**
         * @brief      Clears the element at the given index by setting it to 0.
         *
         * @param[in]  idx   The index
         *
         * @return     the object that was removed
         */
        float clear(size_t idx);

        /**
         * @brief      Clears all elements in the array
         */
        void clear_all();

        /**
         * @brief      resizes the array to the given size, discarding elements that no longer fit
         *
         * @param[in]  size  The new size of the array
         */
        void resize(size_t size);

        /**
         * @brief      appends the object at the end of the array. Growing the array if necessary.
         *
         * @param      obj   The object
         */
        void push(float obj)
};

/**
 * @brief      This class describes an array of bools.
 *             The array is of a fixed size and should only resize when the user specifies it.
 *             Elements of the array are null until set by the user.
 */
class BoolArray : public Array {
    public:
        /**
         * @brief      Constructs a new instance.
         */
        Array(size_t length) {}

        /**
         * @brief      Destroys the object.
         */
        ~Array() {}

         /* @brief      Gets the hash value for this array.
          *             Arrays of the same size with the same elements have the same hash value.
         *
         * @return     a size_t representing the hash value
         */
        size_t hash();

        /**
         * @brief      determines if this array is same as the other one.
         *             Arrays of the same size with the same elements are equal.
         *
         * @param      other  The other object
         *
         * @return     True if equal, false if not
         */
        bool equals(Object* other);

        /**
         * @brief      returns the length of the array
         *
         * @return     the length of the array
         */
        size_t length();

        /**
         * @brief      Searches for the first match and returns the index of it. 
         *             Returns the size of the array if the object cannot be found.
         *
         * @param      obj   The object
         *
         * @return     the index of the first match of the given object
         */
        size_t index_of(bool obj);

        /**
         * @brief      Stores the given object at the given index in the array. 
         *             Replaces previous element stored there.
         *             Cannot set an index beyond the size of the array.
         *
         * @param      obj   The object
         * @param[in]  idx   The index
         */
        void set(bool obj, size_t idx);

        /**
         * @brief      Gets the object at the specified index.
         *
         * @param[in]  idx   The index
         *
         * @return     the object stored at the given index in the array
         */
        bool get(size_t idx);

        /**
         * @brief      Clears the element at the given index by setting it to false.
         *
         * @param[in]  idx   The index
         *
         * @return     the object that was removed
         */
        bool clear(size_t idx);

        /**
         * @brief      Clears all elements in the array
         */
        void clear_all();

        /**
         * @brief      resizes the array to the given size, discarding elements that no longer fit
         *
         * @param[in]  size  The new size of the array
         */
        void resize(size_t size);

        /**
         * @brief      appends the object at the end of the array. Growing the array if necessary.
         *
         * @param      obj   The object
         */
        void push(bool obj)
};