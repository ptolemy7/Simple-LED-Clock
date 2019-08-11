/* Generated code for Python module 'adafruit_blinka.microcontroller.generic_linux.libgpiod_pin'
 * created by Nuitka version 0.6.4
 *
 * This code is in part copyright 2019 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The "_module_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin;
PyDictObject *moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_digest_aeadebb446eb9697b49f22d96463f59a;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__mode;
extern PyObject *const_str_plain_request;
static PyObject *const_str_plain_set_value;
extern PyObject *const_str_plain___name__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_LINE_REQ_DIR_OUT;
extern PyObject *const_str_plain_IN;
extern PyObject *const_str_digest_169d01c053c9b40bcaa545433f06946e;
extern PyObject *const_tuple_str_plain_Pin_tuple_empty_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_val_tuple;
extern PyObject *const_str_plain_Pin;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_digest_80a4805bdbd3485ea876d5c515fef787;
extern PyObject *const_str_plain_id;
extern PyObject *const_str_digest_204795fc719a5f4d79004b19ebaaa4f0;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_d607a35a41bb7663aa300a0da55c683d;
static PyObject *const_str_plain_OPEN_BY_NAME;
extern PyObject *const_str_plain_PULL_DOWN;
extern PyObject *const_str_plain_Chip;
extern PyObject *const_str_plain__value;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_flags;
static PyObject *const_str_plain_gpiod;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain_release;
extern PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
static PyObject *const_str_plain__CONSUMER;
extern PyObject *const_str_plain_value;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_pull;
extern PyObject *const_tuple_str_plain_self_str_plain_pin_id_tuple;
extern PyObject *const_str_plain_init;
static PyObject *const_str_plain_get_line;
extern PyObject *const_str_digest_f46d0ef2d0a087f27969836562e28680;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_PULL_NONE;
static PyObject *const_str_plain__num;
static PyObject *const_tuple_str_plain_self_str_plain_mode_str_plain_pull_str_plain_flags_tuple;
extern PyObject *const_str_digest_adb728c6c2e334e1f32698032cda0934;
static PyObject *const_str_plain_consumer;
static PyObject *const_str_plain_OPEN_BY_NUMBER;
static PyObject *const_str_plain_LINE_REQ_DIR_IN;
extern PyObject *const_str_plain_HIGH;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_cc69b08435de994fc2e6959aa89d4174;
extern PyObject *const_str_plain_PULL_UP;
extern PyObject *const_str_plain___eq__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_val;
static PyObject *const_str_plain_get_value;
static PyObject *const_str_digest_2937e911cd7b30b49d6a857db8d63a7b;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_digest_d5751cb219abc30399a2d639a5973dea;
extern PyObject *const_str_plain_LOW;
static PyObject *const_str_plain__line;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_gpiochip0;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_8e2dd667e83623d5e5180fe33c483d6a;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_other;
extern PyObject *const_str_digest_4dc5c42f81dddc562102970a99074af7;
extern PyObject *const_str_digest_0121c319bd84ff9d6a5138e9bbbd3657;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_864ed93c2c64da750bca23b0df810573;
extern PyObject *const_str_plain_pin_id;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain__chip;
extern PyObject *const_str_digest_96e349fb739b35937b0a66e566327387;
extern PyObject *const_str_plain___repr__;
extern PyObject *const_str_plain_OUT;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_adafruit_blinka;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_set_value = UNSTREAM_STRING_ASCII( &constant_bin[ 10056 ], 9, 1 );
    const_str_plain_LINE_REQ_DIR_OUT = UNSTREAM_STRING_ASCII( &constant_bin[ 10065 ], 16, 1 );
    const_str_digest_d607a35a41bb7663aa300a0da55c683d = UNSTREAM_STRING_ASCII( &constant_bin[ 10081 ], 61, 0 );
    const_str_plain_OPEN_BY_NAME = UNSTREAM_STRING_ASCII( &constant_bin[ 10142 ], 12, 1 );
    const_str_plain_gpiod = UNSTREAM_STRING_ASCII( &constant_bin[ 10130 ], 5, 1 );
    const_str_plain_release = UNSTREAM_STRING_ASCII( &constant_bin[ 10154 ], 7, 1 );
    const_str_plain__CONSUMER = UNSTREAM_STRING_ASCII( &constant_bin[ 10161 ], 9, 1 );
    const_str_plain_get_line = UNSTREAM_STRING_ASCII( &constant_bin[ 10170 ], 8, 1 );
    const_str_plain__num = UNSTREAM_STRING_ASCII( &constant_bin[ 9811 ], 4, 1 );
    const_tuple_str_plain_self_str_plain_mode_str_plain_pull_str_plain_flags_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_mode_str_plain_pull_str_plain_flags_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_mode_str_plain_pull_str_plain_flags_tuple, 1, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_mode_str_plain_pull_str_plain_flags_tuple, 2, const_str_plain_pull ); Py_INCREF( const_str_plain_pull );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_mode_str_plain_pull_str_plain_flags_tuple, 3, const_str_plain_flags ); Py_INCREF( const_str_plain_flags );
    const_str_plain_consumer = UNSTREAM_STRING_ASCII( &constant_bin[ 10178 ], 8, 1 );
    const_str_plain_OPEN_BY_NUMBER = UNSTREAM_STRING_ASCII( &constant_bin[ 10186 ], 14, 1 );
    const_str_plain_LINE_REQ_DIR_IN = UNSTREAM_STRING_ASCII( &constant_bin[ 10200 ], 15, 1 );
    const_str_digest_cc69b08435de994fc2e6959aa89d4174 = UNSTREAM_STRING_ASCII( &constant_bin[ 10215 ], 74, 0 );
    const_str_plain_get_value = UNSTREAM_STRING_ASCII( &constant_bin[ 10289 ], 9, 1 );
    const_str_digest_2937e911cd7b30b49d6a857db8d63a7b = UNSTREAM_STRING_ASCII( &constant_bin[ 10298 ], 76, 0 );
    const_str_plain__line = UNSTREAM_STRING_ASCII( &constant_bin[ 10173 ], 5, 1 );
    const_str_plain_gpiochip0 = UNSTREAM_STRING_ASCII( &constant_bin[ 10374 ], 9, 1 );
    const_str_digest_8e2dd667e83623d5e5180fe33c483d6a = UNSTREAM_STRING_ASCII( &constant_bin[ 10383 ], 152, 0 );
    const_str_digest_864ed93c2c64da750bca23b0df810573 = UNSTREAM_STRING_ASCII( &constant_bin[ 10535 ], 67, 0 );
    const_str_plain__chip = UNSTREAM_STRING_ASCII( &constant_bin[ 10602 ], 5, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_10db9c417d09efb21b6b892c10c4c4b7;
static PyCodeObject *codeobj_bbfd376e9c57f726283e64661eb49f37;
static PyCodeObject *codeobj_13c3526c7bed6d777631d74181ca4b0e;
static PyCodeObject *codeobj_ffadc5b9f5aeb69f31575742468ae6e9;
static PyCodeObject *codeobj_6b1f521f391354f00a99a942dc854056;
static PyCodeObject *codeobj_f66352f2840d17960097b90cf5090c87;
static PyCodeObject *codeobj_c46276996bd6e129fcad024ae30ba7d2;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_d607a35a41bb7663aa300a0da55c683d );
    codeobj_10db9c417d09efb21b6b892c10c4c4b7 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_864ed93c2c64da750bca23b0df810573, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_bbfd376e9c57f726283e64661eb49f37 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Pin, 7, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_13c3526c7bed6d777631d74181ca4b0e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___eq__, 34, const_tuple_str_plain_self_str_plain_other_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ffadc5b9f5aeb69f31575742468ae6e9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 21, const_tuple_str_plain_self_str_plain_pin_id_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6b1f521f391354f00a99a942dc854056 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 31, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f66352f2840d17960097b90cf5090c87 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_init, 37, const_tuple_str_plain_self_str_plain_mode_str_plain_pull_str_plain_flags_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c46276996bd6e129fcad024ae30ba7d2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_value, 70, const_tuple_str_plain_self_str_plain_val_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_2___repr__(  );


static PyObject *MAKE_FUNCTION_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_3___eq__(  );


static PyObject *MAKE_FUNCTION_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_4_init( PyObject *defaults );


static PyObject *MAKE_FUNCTION_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_5_value( PyObject *defaults );


// The module function definitions.
static PyObject *impl_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin_id = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_ffadc5b9f5aeb69f31575742468ae6e9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ffadc5b9f5aeb69f31575742468ae6e9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ffadc5b9f5aeb69f31575742468ae6e9, codeobj_ffadc5b9f5aeb69f31575742468ae6e9, module_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, sizeof(void *)+sizeof(void *) );
    frame_ffadc5b9f5aeb69f31575742468ae6e9 = cache_frame_ffadc5b9f5aeb69f31575742468ae6e9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ffadc5b9f5aeb69f31575742468ae6e9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ffadc5b9f5aeb69f31575742468ae6e9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_pin_id );
        tmp_assattr_name_1 = par_pin_id;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_id, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT( par_pin_id );
        tmp_type_arg_1 = par_pin_id;
        tmp_compexpr_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_compexpr_left_1 == NULL) );
        tmp_compexpr_right_1 = (PyObject *)&PyTuple_Type;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_int_arg_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_assattr_target_2;
            CHECK_OBJECT( par_pin_id );
            tmp_subscribed_name_1 = par_pin_id;
            tmp_subscript_name_1 = const_int_pos_1;
            tmp_int_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
            if ( tmp_int_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 24;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_assattr_name_2 = PyNumber_Int( tmp_int_arg_1 );
            Py_DECREF( tmp_int_arg_1 );
            if ( tmp_assattr_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 24;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__num, tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 24;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_assattr_target_3;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain_gpiod );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gpiod );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gpiod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 25;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Chip );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_pin_id );
            tmp_subscribed_name_2 = par_pin_id;
            tmp_subscript_name_2 = const_int_0;
            tmp_unicode_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            if ( tmp_unicode_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 25;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = PyObject_Unicode( tmp_unicode_arg_1 );
            Py_DECREF( tmp_unicode_arg_1 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 25;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain_gpiod );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gpiod );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gpiod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 25;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_2;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Chip );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 25;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_OPEN_BY_NUMBER );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 25;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_ffadc5b9f5aeb69f31575742468ae6e9->m_frame.f_lineno = 25;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assattr_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_3 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__chip, tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_int_arg_2;
            PyObject *tmp_assattr_target_4;
            CHECK_OBJECT( par_pin_id );
            tmp_int_arg_2 = par_pin_id;
            tmp_assattr_name_4 = PyNumber_Int( tmp_int_arg_2 );
            if ( tmp_assattr_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 27;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_4 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__num, tmp_assattr_name_4 );
            Py_DECREF( tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 27;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_5;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_assattr_target_5;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain_gpiod );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gpiod );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gpiod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 28;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Chip );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_3 = const_str_plain_gpiochip0;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain_gpiod );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gpiod );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gpiod" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 28;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_4;
            tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_Chip );
            if ( tmp_source_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 28;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_OPEN_BY_NAME );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 28;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_ffadc5b9f5aeb69f31575742468ae6e9->m_frame.f_lineno = 28;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_assattr_name_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_assattr_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_5 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__chip, tmp_assattr_name_5 );
            Py_DECREF( tmp_assattr_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 28;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_name_6 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__line, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ffadc5b9f5aeb69f31575742468ae6e9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ffadc5b9f5aeb69f31575742468ae6e9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ffadc5b9f5aeb69f31575742468ae6e9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ffadc5b9f5aeb69f31575742468ae6e9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ffadc5b9f5aeb69f31575742468ae6e9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ffadc5b9f5aeb69f31575742468ae6e9,
        type_description_1,
        par_self,
        par_pin_id
    );


    // Release cached frame.
    if ( frame_ffadc5b9f5aeb69f31575742468ae6e9 == cache_frame_ffadc5b9f5aeb69f31575742468ae6e9 )
    {
        Py_DECREF( frame_ffadc5b9f5aeb69f31575742468ae6e9 );
    }
    cache_frame_ffadc5b9f5aeb69f31575742468ae6e9 = NULL;

    assertFrameObject( frame_ffadc5b9f5aeb69f31575742468ae6e9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pin_id );
    Py_DECREF( par_pin_id );
    par_pin_id = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pin_id );
    Py_DECREF( par_pin_id );
    par_pin_id = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_1___init__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_2___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_6b1f521f391354f00a99a942dc854056;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6b1f521f391354f00a99a942dc854056 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6b1f521f391354f00a99a942dc854056, codeobj_6b1f521f391354f00a99a942dc854056, module_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, sizeof(void *) );
    frame_6b1f521f391354f00a99a942dc854056 = cache_frame_6b1f521f391354f00a99a942dc854056;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6b1f521f391354f00a99a942dc854056 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6b1f521f391354f00a99a942dc854056 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_id );
        if ( tmp_unicode_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyObject_Unicode( tmp_unicode_arg_1 );
        Py_DECREF( tmp_unicode_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b1f521f391354f00a99a942dc854056 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b1f521f391354f00a99a942dc854056 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b1f521f391354f00a99a942dc854056 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6b1f521f391354f00a99a942dc854056, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6b1f521f391354f00a99a942dc854056->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6b1f521f391354f00a99a942dc854056, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6b1f521f391354f00a99a942dc854056,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_6b1f521f391354f00a99a942dc854056 == cache_frame_6b1f521f391354f00a99a942dc854056 )
    {
        Py_DECREF( frame_6b1f521f391354f00a99a942dc854056 );
    }
    cache_frame_6b1f521f391354f00a99a942dc854056 = NULL;

    assertFrameObject( frame_6b1f521f391354f00a99a942dc854056 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_2___repr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_2___repr__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_3___eq__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_13c3526c7bed6d777631d74181ca4b0e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_13c3526c7bed6d777631d74181ca4b0e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_13c3526c7bed6d777631d74181ca4b0e, codeobj_13c3526c7bed6d777631d74181ca4b0e, module_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, sizeof(void *)+sizeof(void *) );
    frame_13c3526c7bed6d777631d74181ca4b0e = cache_frame_13c3526c7bed6d777631d74181ca4b0e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_13c3526c7bed6d777631d74181ca4b0e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_13c3526c7bed6d777631d74181ca4b0e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_id );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_other );
        tmp_compexpr_right_1 = par_other;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13c3526c7bed6d777631d74181ca4b0e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_13c3526c7bed6d777631d74181ca4b0e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13c3526c7bed6d777631d74181ca4b0e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_13c3526c7bed6d777631d74181ca4b0e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_13c3526c7bed6d777631d74181ca4b0e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_13c3526c7bed6d777631d74181ca4b0e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_13c3526c7bed6d777631d74181ca4b0e,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_13c3526c7bed6d777631d74181ca4b0e == cache_frame_13c3526c7bed6d777631d74181ca4b0e )
    {
        Py_DECREF( frame_13c3526c7bed6d777631d74181ca4b0e );
    }
    cache_frame_13c3526c7bed6d777631d74181ca4b0e = NULL;

    assertFrameObject( frame_13c3526c7bed6d777631d74181ca4b0e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_3___eq__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_3___eq__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_4_init( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_mode = python_pars[ 1 ];
    PyObject *par_pull = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_f66352f2840d17960097b90cf5090c87;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_f66352f2840d17960097b90cf5090c87 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f66352f2840d17960097b90cf5090c87, codeobj_f66352f2840d17960097b90cf5090c87, module_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f66352f2840d17960097b90cf5090c87 = cache_frame_f66352f2840d17960097b90cf5090c87;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f66352f2840d17960097b90cf5090c87 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f66352f2840d17960097b90cf5090c87 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__line );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_int_arg_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__chip );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_line );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_int_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__num );
            if ( tmp_int_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 39;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = PyNumber_Int( tmp_int_arg_1 );
            Py_DECREF( tmp_int_arg_1 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 39;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            frame_f66352f2840d17960097b90cf5090c87->m_frame.f_lineno = 39;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__line, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_left_1 = par_mode;
        tmp_compexpr_right_1 = Py_None;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( par_mode );
            tmp_compexpr_left_2 = par_mode;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_IN );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                CHECK_OBJECT( par_pull );
                tmp_compexpr_left_3 = par_pull;
                tmp_compexpr_right_3 = Py_None;
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 45;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_4;
                }
                else
                {
                    goto branch_no_4;
                }
                branch_yes_4:;
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    PyObject *tmp_source_name_6;
                    CHECK_OBJECT( par_pull );
                    tmp_compexpr_left_4 = par_pull;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_6 = par_self;
                    tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_PULL_UP );
                    if ( tmp_compexpr_right_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 46;
                        type_description_1 = "oooN";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                    Py_DECREF( tmp_compexpr_right_4 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 46;
                        type_description_1 = "oooN";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_5;
                    }
                    else
                    {
                        goto branch_no_5;
                    }
                    branch_yes_5:;
                    {
                        PyObject *tmp_raise_type_1;
                        PyObject *tmp_make_exception_arg_1;
                        tmp_make_exception_arg_1 = const_str_digest_cc69b08435de994fc2e6959aa89d4174;
                        frame_f66352f2840d17960097b90cf5090c87->m_frame.f_lineno = 47;
                        {
                            PyObject *call_args[] = { tmp_make_exception_arg_1 };
                            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
                        }

                        assert( !(tmp_raise_type_1 == NULL) );
                        exception_type = tmp_raise_type_1;
                        exception_lineno = 47;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooN";
                        goto frame_exception_exit_1;
                    }
                    goto branch_end_5;
                    branch_no_5:;
                    {
                        nuitka_bool tmp_condition_result_6;
                        PyObject *tmp_compexpr_left_5;
                        PyObject *tmp_compexpr_right_5;
                        PyObject *tmp_source_name_7;
                        CHECK_OBJECT( par_pull );
                        tmp_compexpr_left_5 = par_pull;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_7 = par_self;
                        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_PULL_DOWN );
                        if ( tmp_compexpr_right_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 48;
                            type_description_1 = "oooN";
                            goto frame_exception_exit_1;
                        }
                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                        Py_DECREF( tmp_compexpr_right_5 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 48;
                            type_description_1 = "oooN";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
                        {
                            goto branch_yes_6;
                        }
                        else
                        {
                            goto branch_no_6;
                        }
                        branch_yes_6:;
                        {
                            PyObject *tmp_raise_type_2;
                            PyObject *tmp_make_exception_arg_2;
                            tmp_make_exception_arg_2 = const_str_digest_2937e911cd7b30b49d6a857db8d63a7b;
                            frame_f66352f2840d17960097b90cf5090c87->m_frame.f_lineno = 49;
                            {
                                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
                            }

                            assert( !(tmp_raise_type_2 == NULL) );
                            exception_type = tmp_raise_type_2;
                            exception_lineno = 49;
                            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                            type_description_1 = "oooN";
                            goto frame_exception_exit_1;
                        }
                        goto branch_end_6;
                        branch_no_6:;
                        {
                            PyObject *tmp_raise_type_3;
                            PyObject *tmp_make_exception_arg_3;
                            PyObject *tmp_left_name_1;
                            PyObject *tmp_right_name_1;
                            PyObject *tmp_source_name_8;
                            tmp_left_name_1 = const_str_digest_169d01c053c9b40bcaa545433f06946e;
                            CHECK_OBJECT( par_self );
                            tmp_source_name_8 = par_self;
                            tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_id );
                            if ( tmp_right_name_1 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 51;
                                type_description_1 = "oooN";
                                goto frame_exception_exit_1;
                            }
                            tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                            Py_DECREF( tmp_right_name_1 );
                            if ( tmp_make_exception_arg_3 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 51;
                                type_description_1 = "oooN";
                                goto frame_exception_exit_1;
                            }
                            frame_f66352f2840d17960097b90cf5090c87->m_frame.f_lineno = 51;
                            {
                                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
                            }

                            Py_DECREF( tmp_make_exception_arg_3 );
                            assert( !(tmp_raise_type_3 == NULL) );
                            exception_type = tmp_raise_type_3;
                            exception_lineno = 51;
                            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                            type_description_1 = "oooN";
                            goto frame_exception_exit_1;
                        }
                        branch_end_6:;
                    }
                    branch_end_5:;
                }
                branch_no_4:;
            }
            {
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_source_name_9;
                PyObject *tmp_assattr_target_2;
                CHECK_OBJECT( par_self );
                tmp_source_name_9 = par_self;
                tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_IN );
                if ( tmp_assattr_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 53;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_assattr_target_2 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__mode, tmp_assattr_name_2 );
                Py_DECREF( tmp_assattr_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 53;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_called_instance_1;
                PyObject *tmp_source_name_10;
                PyObject *tmp_call_result_1;
                CHECK_OBJECT( par_self );
                tmp_source_name_10 = par_self;
                tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__line );
                if ( tmp_called_instance_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 54;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                frame_f66352f2840d17960097b90cf5090c87->m_frame.f_lineno = 54;
                tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_release );
                Py_DECREF( tmp_called_instance_1 );
                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 54;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            {
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_11;
                PyObject *tmp_source_name_12;
                PyObject *tmp_call_result_2;
                PyObject *tmp_kw_name_1;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                PyObject *tmp_source_name_13;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                PyObject *tmp_source_name_14;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_dict_key_3;
                PyObject *tmp_dict_value_3;
                CHECK_OBJECT( par_self );
                tmp_source_name_12 = par_self;
                tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__line );
                if ( tmp_source_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 55;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_request );
                Py_DECREF( tmp_source_name_11 );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 55;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                tmp_dict_key_1 = const_str_plain_consumer;
                CHECK_OBJECT( par_self );
                tmp_source_name_13 = par_self;
                tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__CONSUMER );
                if ( tmp_dict_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 55;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                tmp_kw_name_1 = _PyDict_NewPresized( 3 );
                tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
                Py_DECREF( tmp_dict_value_1 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_2 = const_str_plain_type;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain_gpiod );

                if (unlikely( tmp_mvar_value_1 == NULL ))
                {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gpiod );
                }

                if ( tmp_mvar_value_1 == NULL )
                {
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_kw_name_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gpiod" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 56;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_14 = tmp_mvar_value_1;
                tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_LINE_REQ_DIR_IN );
                if ( tmp_dict_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_kw_name_1 );

                    exception_lineno = 56;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
                Py_DECREF( tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_3 = const_str_plain_flags;
                tmp_dict_value_3 = const_int_0;
                tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
                assert( !(tmp_res != 0) );
                frame_f66352f2840d17960097b90cf5090c87->m_frame.f_lineno = 55;
                tmp_call_result_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 55;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_7;
                PyObject *tmp_compexpr_left_6;
                PyObject *tmp_compexpr_right_6;
                PyObject *tmp_source_name_15;
                CHECK_OBJECT( par_mode );
                tmp_compexpr_left_6 = par_mode;
                CHECK_OBJECT( par_self );
                tmp_source_name_15 = par_self;
                tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_OUT );
                if ( tmp_compexpr_right_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 59;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                Py_DECREF( tmp_compexpr_right_6 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 59;
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_7;
                }
                else
                {
                    goto branch_no_7;
                }
                branch_yes_7:;
                {
                    nuitka_bool tmp_condition_result_8;
                    PyObject *tmp_compexpr_left_7;
                    PyObject *tmp_compexpr_right_7;
                    CHECK_OBJECT( par_pull );
                    tmp_compexpr_left_7 = par_pull;
                    tmp_compexpr_right_7 = Py_None;
                    tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 60;
                        type_description_1 = "oooN";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_8;
                    }
                    else
                    {
                        goto branch_no_8;
                    }
                    branch_yes_8:;
                    {
                        PyObject *tmp_raise_type_4;
                        PyObject *tmp_make_exception_arg_4;
                        tmp_make_exception_arg_4 = const_str_digest_80a4805bdbd3485ea876d5c515fef787;
                        frame_f66352f2840d17960097b90cf5090c87->m_frame.f_lineno = 61;
                        {
                            PyObject *call_args[] = { tmp_make_exception_arg_4 };
                            tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
                        }

                        assert( !(tmp_raise_type_4 == NULL) );
                        exception_type = tmp_raise_type_4;
                        exception_lineno = 61;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooN";
                        goto frame_exception_exit_1;
                    }
                    branch_no_8:;
                }
                {
                    PyObject *tmp_assattr_name_3;
                    PyObject *tmp_source_name_16;
                    PyObject *tmp_assattr_target_3;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_16 = par_self;
                    tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_OUT );
                    if ( tmp_assattr_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 62;
                        type_description_1 = "oooN";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_assattr_target_3 = par_self;
                    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__mode, tmp_assattr_name_3 );
                    Py_DECREF( tmp_assattr_name_3 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 62;
                        type_description_1 = "oooN";
                        goto frame_exception_exit_1;
                    }
                }
                {
                    PyObject *tmp_called_instance_2;
                    PyObject *tmp_source_name_17;
                    PyObject *tmp_call_result_3;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_17 = par_self;
                    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain__line );
                    if ( tmp_called_instance_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 63;
                        type_description_1 = "oooN";
                        goto frame_exception_exit_1;
                    }
                    frame_f66352f2840d17960097b90cf5090c87->m_frame.f_lineno = 63;
                    tmp_call_result_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_release );
                    Py_DECREF( tmp_called_instance_2 );
                    if ( tmp_call_result_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 63;
                        type_description_1 = "oooN";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_3 );
                }
                {
                    PyObject *tmp_called_name_3;
                    PyObject *tmp_source_name_18;
                    PyObject *tmp_source_name_19;
                    PyObject *tmp_call_result_4;
                    PyObject *tmp_kw_name_2;
                    PyObject *tmp_dict_key_4;
                    PyObject *tmp_dict_value_4;
                    PyObject *tmp_source_name_20;
                    PyObject *tmp_dict_key_5;
                    PyObject *tmp_dict_value_5;
                    PyObject *tmp_source_name_21;
                    PyObject *tmp_mvar_value_2;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_19 = par_self;
                    tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__line );
                    if ( tmp_source_name_18 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 64;
                        type_description_1 = "oooN";
                        goto frame_exception_exit_1;
                    }
                    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_request );
                    Py_DECREF( tmp_source_name_18 );
                    if ( tmp_called_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 64;
                        type_description_1 = "oooN";
                        goto frame_exception_exit_1;
                    }
                    tmp_dict_key_4 = const_str_plain_consumer;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_20 = par_self;
                    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__CONSUMER );
                    if ( tmp_dict_value_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_3 );

                        exception_lineno = 64;
                        type_description_1 = "oooN";
                        goto frame_exception_exit_1;
                    }
                    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
                    Py_DECREF( tmp_dict_value_4 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_5 = const_str_plain_type;
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain_gpiod );

                    if (unlikely( tmp_mvar_value_2 == NULL ))
                    {
                        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gpiod );
                    }

                    if ( tmp_mvar_value_2 == NULL )
                    {
                        Py_DECREF( tmp_called_name_3 );
                        Py_DECREF( tmp_kw_name_2 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gpiod" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 65;
                        type_description_1 = "oooN";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_21 = tmp_mvar_value_2;
                    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_LINE_REQ_DIR_OUT );
                    if ( tmp_dict_value_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_3 );
                        Py_DECREF( tmp_kw_name_2 );

                        exception_lineno = 65;
                        type_description_1 = "oooN";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
                    Py_DECREF( tmp_dict_value_5 );
                    assert( !(tmp_res != 0) );
                    frame_f66352f2840d17960097b90cf5090c87->m_frame.f_lineno = 64;
                    tmp_call_result_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_kw_name_2 );
                    if ( tmp_call_result_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 64;
                        type_description_1 = "oooN";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_4 );
                }
                goto branch_end_7;
                branch_no_7:;
                {
                    PyObject *tmp_raise_type_5;
                    PyObject *tmp_make_exception_arg_5;
                    PyObject *tmp_left_name_2;
                    PyObject *tmp_right_name_2;
                    PyObject *tmp_source_name_22;
                    tmp_left_name_2 = const_str_digest_4dc5c42f81dddc562102970a99074af7;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_22 = par_self;
                    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_id );
                    if ( tmp_right_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 68;
                        type_description_1 = "oooN";
                        goto frame_exception_exit_1;
                    }
                    tmp_make_exception_arg_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                    Py_DECREF( tmp_right_name_2 );
                    if ( tmp_make_exception_arg_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 68;
                        type_description_1 = "oooN";
                        goto frame_exception_exit_1;
                    }
                    frame_f66352f2840d17960097b90cf5090c87->m_frame.f_lineno = 68;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_5 };
                        tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
                    }

                    Py_DECREF( tmp_make_exception_arg_5 );
                    assert( !(tmp_raise_type_5 == NULL) );
                    exception_type = tmp_raise_type_5;
                    exception_lineno = 68;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooN";
                    goto frame_exception_exit_1;
                }
                branch_end_7:;
            }
            branch_end_3:;
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f66352f2840d17960097b90cf5090c87 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f66352f2840d17960097b90cf5090c87 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f66352f2840d17960097b90cf5090c87, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f66352f2840d17960097b90cf5090c87->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f66352f2840d17960097b90cf5090c87, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f66352f2840d17960097b90cf5090c87,
        type_description_1,
        par_self,
        par_mode,
        par_pull,
        NULL
    );


    // Release cached frame.
    if ( frame_f66352f2840d17960097b90cf5090c87 == cache_frame_f66352f2840d17960097b90cf5090c87 )
    {
        Py_DECREF( frame_f66352f2840d17960097b90cf5090c87 );
    }
    cache_frame_f66352f2840d17960097b90cf5090c87 = NULL;

    assertFrameObject( frame_f66352f2840d17960097b90cf5090c87 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_4_init );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_pull );
    Py_DECREF( par_pull );
    par_pull = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_pull );
    Py_DECREF( par_pull );
    par_pull = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_4_init );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_5_value( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_val = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_c46276996bd6e129fcad024ae30ba7d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c46276996bd6e129fcad024ae30ba7d2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c46276996bd6e129fcad024ae30ba7d2, codeobj_c46276996bd6e129fcad024ae30ba7d2, module_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, sizeof(void *)+sizeof(void *) );
    frame_c46276996bd6e129fcad024ae30ba7d2 = cache_frame_c46276996bd6e129fcad024ae30ba7d2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c46276996bd6e129fcad024ae30ba7d2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c46276996bd6e129fcad024ae30ba7d2 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_val );
        tmp_compexpr_left_1 = par_val;
        tmp_compexpr_right_1 = Py_None;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_val );
            tmp_compexpr_left_2 = par_val;
            CHECK_OBJECT( par_self );
            tmp_source_name_1 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_LOW );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_compexpr_right_2, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_HIGH );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_right_2 );

                exception_lineno = 72;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_compexpr_right_2, 1, tmp_tuple_element_1 );
            tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_assattr_name_1;
                PyObject *tmp_assattr_target_1;
                CHECK_OBJECT( par_val );
                tmp_assattr_name_1 = par_val;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_1 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__value, tmp_assattr_name_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 73;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_called_instance_1;
                PyObject *tmp_source_name_3;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                CHECK_OBJECT( par_self );
                tmp_source_name_3 = par_self;
                tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__line );
                if ( tmp_called_instance_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 74;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_val );
                tmp_args_element_name_1 = par_val;
                frame_c46276996bd6e129fcad024ae30ba7d2->m_frame.f_lineno = 74;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_set_value, call_args );
                }

                Py_DECREF( tmp_called_instance_1 );
                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 74;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_0121c319bd84ff9d6a5138e9bbbd3657;
                frame_c46276996bd6e129fcad024ae30ba7d2->m_frame.f_lineno = 76;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 76;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            branch_end_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__line );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 78;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_c46276996bd6e129fcad024ae30ba7d2->m_frame.f_lineno = 78;
            tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_value );
            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 78;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c46276996bd6e129fcad024ae30ba7d2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c46276996bd6e129fcad024ae30ba7d2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c46276996bd6e129fcad024ae30ba7d2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c46276996bd6e129fcad024ae30ba7d2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c46276996bd6e129fcad024ae30ba7d2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c46276996bd6e129fcad024ae30ba7d2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c46276996bd6e129fcad024ae30ba7d2,
        type_description_1,
        par_self,
        par_val
    );


    // Release cached frame.
    if ( frame_c46276996bd6e129fcad024ae30ba7d2 == cache_frame_c46276996bd6e129fcad024ae30ba7d2 )
    {
        Py_DECREF( frame_c46276996bd6e129fcad024ae30ba7d2 );
    }
    cache_frame_c46276996bd6e129fcad024ae30ba7d2 = NULL;

    assertFrameObject( frame_c46276996bd6e129fcad024ae30ba7d2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_5_value );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_5_value );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_d5751cb219abc30399a2d639a5973dea,
#endif
        codeobj_ffadc5b9f5aeb69f31575742468ae6e9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_2___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_2___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 300
        const_str_digest_204795fc719a5f4d79004b19ebaaa4f0,
#endif
        codeobj_6b1f521f391354f00a99a942dc854056,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_3___eq__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_3___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 300
        const_str_digest_96e349fb739b35937b0a66e566327387,
#endif
        codeobj_13c3526c7bed6d777631d74181ca4b0e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_4_init( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_4_init,
        const_str_plain_init,
#if PYTHON_VERSION >= 300
        const_str_digest_adb728c6c2e334e1f32698032cda0934,
#endif
        codeobj_f66352f2840d17960097b90cf5090c87,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_5_value( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_5_value,
        const_str_plain_value,
#if PYTHON_VERSION >= 300
        const_str_digest_f46d0ef2d0a087f27969836562e28680,
#endif
        codeobj_c46276996bd6e129fcad024ae30ba7d2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin =
{
    PyModuleDef_HEAD_INIT,
    "adafruit_blinka.microcontroller.generic_linux.libgpiod_pin",
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___compiled__;

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

extern PyTypeObject Nuitka_Loader_Type;

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( adafruit_blinka$microcontroller$generic_linux$libgpiod_pin )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // May have to activate constants blob.
#if defined(_NUITKA_CONSTANTS_FROM_RESOURCE)
    loadConstantsResource();
#endif

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("adafruit_blinka.microcontroller.generic_linux.libgpiod_pin: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("adafruit_blinka.microcontroller.generic_linux.libgpiod_pin: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("adafruit_blinka.microcontroller.generic_linux.libgpiod_pin: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initadafruit_blinka$microcontroller$generic_linux$libgpiod_pin" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin = Py_InitModule4(
        "adafruit_blinka.microcontroller.generic_linux.libgpiod_pin",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin = PyModule_Create( &mdef_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin );
#endif

    moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin = MODULE_DICT( module_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_aeadebb446eb9697b49f22d96463f59a, module_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain___name__ ),
            (PyObject *)&Nuitka_Loader_Type
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );
        Py_DECREF( module_spec_class );

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT( spec_value );

// For packages set the submodule search locations as well, even if to empty
// list, so investigating code will consider it a package.
#if 0
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_10db9c417d09efb21b6b892c10c4c4b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_bbfd376e9c57f726283e64661eb49f37_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_bbfd376e9c57f726283e64661eb49f37_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_10db9c417d09efb21b6b892c10c4c4b7 = MAKE_MODULE_FRAME( codeobj_10db9c417d09efb21b6b892c10c4c4b7, module_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_10db9c417d09efb21b6b892c10c4c4b7 );
    assert( Py_REFCNT( frame_10db9c417d09efb21b6b892c10c4c4b7 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain___spec__ );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__ );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_assattr_target_1 = tmp_mvar_value_1;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_origin, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_2;
        tmp_assattr_name_2 = Py_True;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain___spec__ );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__ );
        }

        CHECK_OBJECT( tmp_mvar_value_2 );
        tmp_assattr_target_2 = tmp_mvar_value_2;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_has_location, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_gpiod;
        tmp_globals_name_1 = (PyObject *)moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_10db9c417d09efb21b6b892c10c4c4b7->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain_gpiod, tmp_assign_source_4 );
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_10db9c417d09efb21b6b892c10c4c4b7, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_10db9c417d09efb21b6b892c10c4c4b7, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_8e2dd667e83623d5e5180fe33c483d6a;
            frame_10db9c417d09efb21b6b892c10c4c4b7->m_frame.f_lineno = 4;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ImportError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 4;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );

            goto try_except_handler_2;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 1;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_10db9c417d09efb21b6b892c10c4c4b7->m_frame) frame_10db9c417d09efb21b6b892c10c4c4b7->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_2;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( adafruit_blinka$microcontroller$generic_linux$libgpiod_pin );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = const_str_plain_metaclass;
        tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_1:;
        tmp_bases_name_1 = const_tuple_empty;
        tmp_assign_source_6 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        tmp_key_name_3 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_1 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_1, const_str_plain___prepare__ );
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 7;

                goto try_except_handler_3;
            }
            tmp_args_name_1 = const_tuple_str_plain_Pin_tuple_empty_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_10db9c417d09efb21b6b892c10c4c4b7->m_frame.f_lineno = 7;
            tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 7;

                goto try_except_handler_3;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_7;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_3 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_3, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 7;

                goto try_except_handler_3;
            }
            tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_raise_value_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_4;
                PyObject *tmp_type_arg_1;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 7;

                    goto try_except_handler_3;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_1 = tmp_class_creation_1__prepared;
                tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_1 );
                assert( !(tmp_source_name_4 == NULL) );
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 7;

                    goto try_except_handler_3;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 7;

                    goto try_except_handler_3;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 7;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_3;
            }
            branch_no_4:;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_8;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_9;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_aeadebb446eb9697b49f22d96463f59a;
        tmp_res = PyObject_SetItem( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_5;
        }
        tmp_dictset_value = const_str_plain_Pin;
        tmp_res = PyObject_SetItem( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_5;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_bbfd376e9c57f726283e64661eb49f37_2, codeobj_bbfd376e9c57f726283e64661eb49f37, module_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, sizeof(void *) );
        frame_bbfd376e9c57f726283e64661eb49f37_2 = cache_frame_bbfd376e9c57f726283e64661eb49f37_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_bbfd376e9c57f726283e64661eb49f37_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_bbfd376e9c57f726283e64661eb49f37_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_int_0;
        tmp_res = PyObject_SetItem( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7, const_str_plain_IN, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = const_int_pos_1;
        tmp_res = PyObject_SetItem( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7, const_str_plain_OUT, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = const_int_0;
        tmp_res = PyObject_SetItem( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7, const_str_plain_LOW, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = const_int_pos_1;
        tmp_res = PyObject_SetItem( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7, const_str_plain_HIGH, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = const_int_0;
        tmp_res = PyObject_SetItem( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7, const_str_plain_PULL_NONE, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = const_int_pos_1;
        tmp_res = PyObject_SetItem( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7, const_str_plain_PULL_UP, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = const_int_pos_2;
        tmp_res = PyObject_SetItem( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7, const_str_plain_PULL_DOWN, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = const_str_plain_adafruit_blinka;
        tmp_res = PyObject_SetItem( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7, const_str_plain__CONSUMER, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7, const_str_plain_id, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7, const_str_plain_LOW );

        if ( tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LOW" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 18;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7, const_str_plain__value, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = PyObject_GetItem( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7, const_str_plain_IN );

        if ( tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IN" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 19;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7, const_str_plain__mode, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_1___init__(  );



        tmp_res = PyObject_SetItem( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_2___repr__(  );



        tmp_res = PyObject_SetItem( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7, const_str_plain___repr__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_3___eq__(  );



        tmp_res = PyObject_SetItem( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7, const_str_plain___eq__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_2;
            tmp_tuple_element_2 = PyObject_GetItem( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7, const_str_plain_IN );

            if ( tmp_tuple_element_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IN" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_defaults_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = Py_None;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_2 );
            tmp_dictset_value = MAKE_FUNCTION_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_4_init( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7, const_str_plain_init, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_dictset_value = MAKE_FUNCTION_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin$$$function_5_value( tmp_defaults_2 );



            tmp_res = PyObject_SetItem( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7, const_str_plain_value, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_bbfd376e9c57f726283e64661eb49f37_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_bbfd376e9c57f726283e64661eb49f37_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_bbfd376e9c57f726283e64661eb49f37_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_bbfd376e9c57f726283e64661eb49f37_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_bbfd376e9c57f726283e64661eb49f37_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_bbfd376e9c57f726283e64661eb49f37_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_bbfd376e9c57f726283e64661eb49f37_2 == cache_frame_bbfd376e9c57f726283e64661eb49f37_2 )
        {
            Py_DECREF( frame_bbfd376e9c57f726283e64661eb49f37_2 );
        }
        cache_frame_bbfd376e9c57f726283e64661eb49f37_2 = NULL;

        assertFrameObject( frame_bbfd376e9c57f726283e64661eb49f37_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = const_str_plain_Pin;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            tmp_tuple_element_3 = const_tuple_empty;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
            tmp_tuple_element_3 = locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_10db9c417d09efb21b6b892c10c4c4b7->m_frame.f_lineno = 7;
            tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 7;

                goto try_except_handler_5;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_10;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_9 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_9 );
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( adafruit_blinka$microcontroller$generic_linux$libgpiod_pin );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7 );
        locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7 );
        locals_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin_7 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( adafruit_blinka$microcontroller$generic_linux$libgpiod_pin );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( adafruit_blinka$microcontroller$generic_linux$libgpiod_pin );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 7;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain_Pin, tmp_assign_source_9 );
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_10db9c417d09efb21b6b892c10c4c4b7 );
#endif
    popFrameStack();

    assertFrameObject( frame_10db9c417d09efb21b6b892c10c4c4b7 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_10db9c417d09efb21b6b892c10c4c4b7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_10db9c417d09efb21b6b892c10c4c4b7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_10db9c417d09efb21b6b892c10c4c4b7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_10db9c417d09efb21b6b892c10c4c4b7, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin, (Nuitka_StringObject *)const_str_plain___path__ );

        if (path_value && PyList_CheckExact(path_value) && PyList_Size(path_value) > 0)
        {
            PyObject *path_element = PyList_GetItem( path_value, 0 );

            PyObject *path_importer_cache = PySys_GetObject((char *)"path_importer_cache");
            CHECK_OBJECT( path_importer_cache );

            int res = PyDict_SetItem( path_importer_cache, path_element, (PyObject *)&Nuitka_Loader_Type );
            assert( res == 0 );
        }
    }
#endif
#endif

    return MOD_RETURN_VALUE( module_adafruit_blinka$microcontroller$generic_linux$libgpiod_pin );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
