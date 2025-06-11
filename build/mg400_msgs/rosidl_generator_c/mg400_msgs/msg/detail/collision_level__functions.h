// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mg400_msgs:msg/CollisionLevel.idl
// generated code does not contain a copyright notice

#ifndef MG400_MSGS__MSG__DETAIL__COLLISION_LEVEL__FUNCTIONS_H_
#define MG400_MSGS__MSG__DETAIL__COLLISION_LEVEL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mg400_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mg400_msgs/msg/detail/collision_level__struct.h"

/// Initialize msg/CollisionLevel message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mg400_msgs__msg__CollisionLevel
 * )) before or use
 * mg400_msgs__msg__CollisionLevel__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mg400_msgs
bool
mg400_msgs__msg__CollisionLevel__init(mg400_msgs__msg__CollisionLevel * msg);

/// Finalize msg/CollisionLevel message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mg400_msgs
void
mg400_msgs__msg__CollisionLevel__fini(mg400_msgs__msg__CollisionLevel * msg);

/// Create msg/CollisionLevel message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mg400_msgs__msg__CollisionLevel__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mg400_msgs
mg400_msgs__msg__CollisionLevel *
mg400_msgs__msg__CollisionLevel__create();

/// Destroy msg/CollisionLevel message.
/**
 * It calls
 * mg400_msgs__msg__CollisionLevel__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mg400_msgs
void
mg400_msgs__msg__CollisionLevel__destroy(mg400_msgs__msg__CollisionLevel * msg);

/// Check for msg/CollisionLevel message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mg400_msgs
bool
mg400_msgs__msg__CollisionLevel__are_equal(const mg400_msgs__msg__CollisionLevel * lhs, const mg400_msgs__msg__CollisionLevel * rhs);

/// Copy a msg/CollisionLevel message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mg400_msgs
bool
mg400_msgs__msg__CollisionLevel__copy(
  const mg400_msgs__msg__CollisionLevel * input,
  mg400_msgs__msg__CollisionLevel * output);

/// Initialize array of msg/CollisionLevel messages.
/**
 * It allocates the memory for the number of elements and calls
 * mg400_msgs__msg__CollisionLevel__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mg400_msgs
bool
mg400_msgs__msg__CollisionLevel__Sequence__init(mg400_msgs__msg__CollisionLevel__Sequence * array, size_t size);

/// Finalize array of msg/CollisionLevel messages.
/**
 * It calls
 * mg400_msgs__msg__CollisionLevel__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mg400_msgs
void
mg400_msgs__msg__CollisionLevel__Sequence__fini(mg400_msgs__msg__CollisionLevel__Sequence * array);

/// Create array of msg/CollisionLevel messages.
/**
 * It allocates the memory for the array and calls
 * mg400_msgs__msg__CollisionLevel__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mg400_msgs
mg400_msgs__msg__CollisionLevel__Sequence *
mg400_msgs__msg__CollisionLevel__Sequence__create(size_t size);

/// Destroy array of msg/CollisionLevel messages.
/**
 * It calls
 * mg400_msgs__msg__CollisionLevel__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mg400_msgs
void
mg400_msgs__msg__CollisionLevel__Sequence__destroy(mg400_msgs__msg__CollisionLevel__Sequence * array);

/// Check for msg/CollisionLevel message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mg400_msgs
bool
mg400_msgs__msg__CollisionLevel__Sequence__are_equal(const mg400_msgs__msg__CollisionLevel__Sequence * lhs, const mg400_msgs__msg__CollisionLevel__Sequence * rhs);

/// Copy an array of msg/CollisionLevel messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mg400_msgs
bool
mg400_msgs__msg__CollisionLevel__Sequence__copy(
  const mg400_msgs__msg__CollisionLevel__Sequence * input,
  mg400_msgs__msg__CollisionLevel__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MG400_MSGS__MSG__DETAIL__COLLISION_LEVEL__FUNCTIONS_H_
