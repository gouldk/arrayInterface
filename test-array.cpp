//lang::CwC

#include <assert.h>

#include "object.h"
#include "array.h"

/**
 * @brief      Tests the constructor and length functions for Array
 */
void test_constructor_length() {
	Array* arr = new Array(20);
	assert(arr != NULL);
	assert(arr->length() == 20);
	delete(arr); 
	arr = new Array(10);
	assert(arr->length() == 10);
	delete(arr);
	arr = new Array(0);
	assert(arr->length() == 0);
	delete(arr);
}

/**
 * @brief      Tests hashing and equality for the array.
 */
void test_hash_equals() {
	Object* obj = new Object();
	Array* arr = new Array(10);
	Array* arr2 = new Array(10);
	assert(arr->equals(arr2));
	assert(arr->hash() == arr2->hash());
	arr->set(obj, 1);
	assert(!arr->equals(arr2));
	assert(arr->hash() != arr2->hash());
	arr2->set(obj, 1);
	assert(arr->equals(arr2));
	assert(arr->hash() == arr2->hash());
	arr2->resize(20);
	assert(!arr->equals(arr2));
	assert(arr->hash() != arr2->hash());
}

/**
 * @brief      Tests the get and set functions for Array
 */
void test_get_set() {
	Array* arr = new Array(5);
	for (int i = 0; i < 4; ++i)
	{
		arr->set(new Object(), i);
		assert(arr->get(i) != NULL);
	}
	Object* dummy = new Object();
	arr->set(dummy, 4);
	assert(dummy->equals(arr->get(4)));
	for (int i = 0; i < 5; ++i)
	{
		delete(arr->get(i));
	}
	delete(arr);
}

/**
 * @brief      Tests the clear functions for array
 */
void test_clear() {
	Array* arr = new Array(7);
	Object* obj = new Object();
	assert(arr->get(2) == NULL);
	arr->set(obj, 2);
	assert(obj->equals(arr->clear(2)));
	assert(arr->get(2) == NULL);
	for (int i = 0; i < 7; ++i)
	{
		arr->set(obj, i);
		assert(obj->equals(arr->get(i)));
	}
	arr->clear_all();
	for (int i = 0; i < 7; ++i)
	{
		assert(arr->get(i) == NULL);
	}
	delete(obj);
	delete(arr);
}

/**
 * @brief      Tests the resize function for Array
 */
void test_resize() {
	Array* arr = new Array(2);
	assert(arr->length() == 2);
	arr->resize(12);
	assert(arr->length() == 12);
	delete(arr);
}

/**
 * @brief      Tests storage of primitives
 */
void test_primitives() {
	FloatWrapper* fw = new FloatWrapper(1.5);
	IntWrapper* iw = new IntWrapper(2);
	BoolWrapper* bw = new BoolWrapper(false);
	Array* arr = new Array(3);
	arr->set(fw, 0);
	arr->set(iw, 1);
	arr->set(bw, 2);
	assert(fw->equals(arr->get(0)));
	assert(iw->equals(arr->get(1)));
	assert(bw->equals(arr->get(2)));
	delete(fw);
	delete(iw);
	delete(bw);
	delete(arr);
}

/**
 * @brief      Runs tests on the array class
 *
 * @param[in]  argc  The count of arguments
 * @param      argv  The arguments array
 *
 * @return     the return code of the function
 */
int main(int argc, char** argv) {
	test_constructor_length();
	test_hash_equals();
	test_get_set();
	test_clear();
	test_resize();
	test_primitives();
}