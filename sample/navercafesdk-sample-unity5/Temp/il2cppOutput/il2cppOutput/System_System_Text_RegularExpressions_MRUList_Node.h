#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// System.Text.RegularExpressions.MRUList/Node
struct Node_t2_100;

#include "mscorlib_System_Object.h"

// System.Text.RegularExpressions.MRUList/Node
struct  Node_t2_100  : public Object_t
{
	// System.Object System.Text.RegularExpressions.MRUList/Node::value
	Object_t * ___value_0;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList/Node::previous
	Node_t2_100 * ___previous_1;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList/Node::next
	Node_t2_100 * ___next_2;
};
