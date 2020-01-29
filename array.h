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
        size_t index_of(Object* obj);

        /**
         * @brief      Stores the given object at the given index in the array. 
         *             Replaces previous element stored there.
         *             Cannot set an index beyond the size of the array.
         *
         * @param      obj   The object
         * @param[in]  idx   The index
         */
        void set(Object* obj, size_t idx);

        /**
         * @brief      Gets the object at the specified index.
         *
         * @param[in]  idx   The index
         *
         * @return     the object stored at the given index in the array
         */
        Object* get(size_t idx);

        /**
         * @brief      Clears the element at the given index by setting it to null.
         *
         * @param[in]  idx   The index
         *
         * @return     the object that was removed
         */
        Object* clear(size_t idx);

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
};