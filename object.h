// lang::CwC

#pragma once

#include <stdlib.h>

/**
 * @brief      This class describes an object.
 */
class Object {
	public:
		/**
		 * @brief      Constructs a new instance.
		 */
		Object() {
		}

		/**
		 * @brief      Destroys the object.
		 */
		virtual ~Object() { }

		/**
		 * @brief      determines if this object is same as the other one.
		 *
		 * @param      other  The other
		 *
		 * @return     True if equal, false if not
		 */
		virtual bool equals(Object* other);

		/**
		 * @brief      Gets the hash value for this object (and sets if unset).
		 *
		 * @return     a size_t representing the hash value
		 */
		virtual size_t hash();
};