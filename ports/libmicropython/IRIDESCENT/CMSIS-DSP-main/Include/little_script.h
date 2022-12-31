//
//  litte_script.h
//  
//
//  Created by George Rosar on 8/24/22.
//

#ifndef litte_script_h
#define litte_script_h


#ifdef   __cplusplus
extern "C"
{
#endif

typedef enum
{
  ARM_SORT_BITONIC   = 0,
           /**< Bitonic sort   */
  ARM_SORT_BUBBLE    = 1,
           /**< Bubble sort    */
  ARM_SORT_HEAP      = 2,
           /**< Heap sort      */
  ARM_SORT_INSERTION = 3,
           /**< Insertion sort */
  ARM_SORT_QUICK     = 4,
           /**< Quick sort     */
  ARM_SORT_SELECTION = 5
           /**< Selection sort */
} arm_sort_alg;

typedef enum
{
  ARM_SORT_DESCENDING = 0,
           /**< Descending order (9 to 0) */
  ARM_SORT_ASCENDING = 1
           /**< Ascending order (0 to 9) */
} arm_sort_dir;

typedef struct
{
  arm_sort_dir dir;        /**< Sorting order (direction)  */
  float32_t * buffer;      /**< Working buffer */
} arm_merge_sort_instance_f32;

//typedef enum
//{
//  ARM_MATH_SUCCESS                 =  0,        /**< No error */
//  ARM_MATH_ARGUMENT_ERROR          = -1,        /**< One or more arguments are incorrect */
//  ARM_MATH_LENGTH_ERROR            = -2,        /**< Length of data buffer is incorrect */
//  ARM_MATH_SIZE_MISMATCH           = -3,        /**< Size of matrices is not compatible with the operation */
//  ARM_MATH_NANINF                  = -4,        /**< Not-a-number (NaN) or infinity is generated */
//  ARM_MATH_SINGULAR                = -5,        /**< Input matrix is singular and cannot be inverted */
//  ARM_MATH_TEST_FAILURE            = -6,        /**< Test Failed */
//  ARM_MATH_DECOMPOSITION_FAILURE   = -7         /**< Decomposition Failed */
//} arm_status;

typedef struct
{
  arm_sort_alg alg;        /**< Sorting algorithm selected */
  arm_sort_dir dir;        /**< Sorting order (direction)  */
} arm_sort_instance_f32;

#ifdef   __cplusplus
}
#endif

#endif /* litte_script_h */
