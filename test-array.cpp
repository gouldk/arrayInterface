//lang::CwC

#include "object.h"
#include "array.h"

/**
 * @brief      Tests the constructor and length functions for Array
 */
void test_constructor_length() {
	Array* arr = new Array(20);
	assert(arr != nullptr);
	assert(arr->length() == 20);
	delete(arr); 
	arr = new Array(10);
	assert(arr->length() == 10);
	delete(arr);
	arr = new Array[0];
	assert(arr->length() == 0);
	delete(arr);
}

/**
 * @brief      Tests the get and set functions for Array
 */
void test_get_set() {
	Array* arr = new Array[5];
	for (int i = 0; i < 4; ++i)
	{
		arr->set(new Object(), i);
		assert(arr->get(i) != nullptr);
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
 * @brief      Tests the remove function for Array
 */
void test_remove() {
	Array* arr = new Array[7];
	Object* obj = new Object();
	arr->set(obj, 3);
	assert(obj->equals(arr->remove(3)));
	assert(arr->get(3) == nullptr);
	delete(obj);
	delete(arr);
}

/**
 * @brief      Tests the push function for Array
 */
void test_push() {
	Array* arr = new Array[2];
	Object * obj = new Object();
	arr->push(obj);
	assert(obj->equals(arr->get(0)));
	arr->push(new Object());
	assert(obj->equals(arr->get(0)));
	assert(!obj->equals(arr->get(1)));
	delete(obj);
	delete(arr->get(1));
	delete(arr);
}

/**
 * @brief      Tests the resize function for Array
 */
void test_resize() {
	Array* arr = new Array[2];
	assert(arr->length() == 2);
	arr->resize(12);
	assert(arr->length() == 12);
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
	test_get_set();
	test_remove();
	test_push();
	test_resize();
}