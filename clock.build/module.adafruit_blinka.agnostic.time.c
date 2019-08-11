/* Generated code for Python module 'adafruit_blinka.agnostic.time'
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

/* The "_module_adafruit_blinka$agnostic$time" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_adafruit_blinka$agnostic$time;
PyDictObject *moduledict_adafruit_blinka$agnostic$time;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_tm_hour;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_tm_isdst;
static PyObject *const_str_digest_559cf35cac4ce384d722e75eaffb4773;
static PyObject *const_str_plain_ticks_diff;
extern PyObject *const_str_plain_False;
static PyObject *const_str_plain__total_ms;
extern PyObject *const_str_plain_utime;
static PyObject *const_tuple_str_plain_namedtuple_tuple;
static PyObject *const_tuple_int_0_int_0_int_0_int_neg_1_int_neg_1_int_neg_1_tuple;
extern PyObject *const_str_plain_micropython;
static PyObject *const_float_0_001;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_ff41a3e72ae9aa21b50e1c5bda46eabe_tuple;
extern PyObject *const_tuple_str_plain_sleep_tuple;
static PyObject *const_str_plain_tm_min;
extern PyObject *const_int_0;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_digest_3e79d826ea516ac18c8c20661e22db00;
static PyObject *const_str_plain_tm_year;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain_ucollections;
static PyObject *const_str_plain__marshal_time;
static PyObject *const_str_plain_ticks_ms;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_tm_mday;
static PyObject *const_str_plain_tm_sec;
static PyObject *const_str_plain_tm_yday;
extern PyObject *const_str_plain_circuitpython;
extern PyObject *const_str_chr_42;
static PyObject *const_str_plain_time_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_plain_agnostic_tuple;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_402cc885c3af5f576a174be54a7cfdf4;
extern PyObject *const_str_plain_sleep;
static PyObject *const_str_plain_namedtuple;
static PyObject *const_str_digest_292ca4d57c83eea200c992ff5e8be51a;
static PyObject *const_tuple_str_plain_ticks_ms_tuple;
extern PyObject *const_str_plain_adafruit_blinka;
static PyObject *const_str_digest_ebfc71fa15b6839009ff56307a2f7030;
static PyObject *const_str_plain_struct_time;
static PyObject *const_str_plain__prev_ticks_ms;
extern PyObject *const_str_plain_agnostic;
extern PyObject *const_str_plain_implementation;
static PyObject *const_str_plain_monotonic;
static PyObject *const_tuple_d80bd719b2f36c6b6d834388a582930e_tuple;
static PyObject *const_tuple_str_plain_time_tuple_tuple;
static PyObject *const_str_digest_49c688b483967be250dd9d8fd09d59da;
static PyObject *const_str_plain_tm_mon;
static PyObject *const_str_plain_tm_wday;
static PyObject *const_str_plain__struct_time;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_6d11bdbed4a7addccfb3b4385fff4ff3;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_tm_hour = UNSTREAM_STRING_ASCII( &constant_bin[ 5787 ], 7, 1 );
    const_str_plain_tm_isdst = UNSTREAM_STRING_ASCII( &constant_bin[ 5794 ], 8, 1 );
    const_str_digest_559cf35cac4ce384d722e75eaffb4773 = UNSTREAM_STRING_ASCII( &constant_bin[ 5802 ], 42, 0 );
    const_str_plain_ticks_diff = UNSTREAM_STRING_ASCII( &constant_bin[ 5844 ], 10, 1 );
    const_str_plain__total_ms = UNSTREAM_STRING_ASCII( &constant_bin[ 5854 ], 9, 1 );
    const_tuple_str_plain_namedtuple_tuple = PyTuple_New( 1 );
    const_str_plain_namedtuple = UNSTREAM_STRING_ASCII( &constant_bin[ 5863 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_namedtuple_tuple, 0, const_str_plain_namedtuple ); Py_INCREF( const_str_plain_namedtuple );
    const_tuple_int_0_int_0_int_0_int_neg_1_int_neg_1_int_neg_1_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_int_0_int_neg_1_int_neg_1_int_neg_1_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_int_0_int_neg_1_int_neg_1_int_neg_1_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_int_0_int_neg_1_int_neg_1_int_neg_1_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_int_0_int_neg_1_int_neg_1_int_neg_1_tuple, 3, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_int_0_int_neg_1_int_neg_1_int_neg_1_tuple, 4, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_int_0_int_neg_1_int_neg_1_int_neg_1_tuple, 5, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    const_float_0_001 = UNSTREAM_FLOAT( &constant_bin[ 5873 ] );
    const_tuple_ff41a3e72ae9aa21b50e1c5bda46eabe_tuple = PyTuple_New( 9 );
    const_str_plain_tm_year = UNSTREAM_STRING_ASCII( &constant_bin[ 5881 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_ff41a3e72ae9aa21b50e1c5bda46eabe_tuple, 0, const_str_plain_tm_year ); Py_INCREF( const_str_plain_tm_year );
    const_str_plain_tm_mon = UNSTREAM_STRING_ASCII( &constant_bin[ 5888 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_ff41a3e72ae9aa21b50e1c5bda46eabe_tuple, 1, const_str_plain_tm_mon ); Py_INCREF( const_str_plain_tm_mon );
    const_str_plain_tm_mday = UNSTREAM_STRING_ASCII( &constant_bin[ 5894 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_ff41a3e72ae9aa21b50e1c5bda46eabe_tuple, 2, const_str_plain_tm_mday ); Py_INCREF( const_str_plain_tm_mday );
    PyTuple_SET_ITEM( const_tuple_ff41a3e72ae9aa21b50e1c5bda46eabe_tuple, 3, const_str_plain_tm_hour ); Py_INCREF( const_str_plain_tm_hour );
    const_str_plain_tm_min = UNSTREAM_STRING_ASCII( &constant_bin[ 5901 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_ff41a3e72ae9aa21b50e1c5bda46eabe_tuple, 4, const_str_plain_tm_min ); Py_INCREF( const_str_plain_tm_min );
    const_str_plain_tm_sec = UNSTREAM_STRING_ASCII( &constant_bin[ 5907 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_ff41a3e72ae9aa21b50e1c5bda46eabe_tuple, 5, const_str_plain_tm_sec ); Py_INCREF( const_str_plain_tm_sec );
    const_str_plain_tm_wday = UNSTREAM_STRING_ASCII( &constant_bin[ 5913 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_ff41a3e72ae9aa21b50e1c5bda46eabe_tuple, 6, const_str_plain_tm_wday ); Py_INCREF( const_str_plain_tm_wday );
    const_str_plain_tm_yday = UNSTREAM_STRING_ASCII( &constant_bin[ 5920 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_ff41a3e72ae9aa21b50e1c5bda46eabe_tuple, 7, const_str_plain_tm_yday ); Py_INCREF( const_str_plain_tm_yday );
    PyTuple_SET_ITEM( const_tuple_ff41a3e72ae9aa21b50e1c5bda46eabe_tuple, 8, const_str_plain_tm_isdst ); Py_INCREF( const_str_plain_tm_isdst );
    const_str_digest_3e79d826ea516ac18c8c20661e22db00 = UNSTREAM_STRING_ASCII( &constant_bin[ 5927 ], 20, 0 );
    const_str_plain_ucollections = UNSTREAM_STRING_ASCII( &constant_bin[ 5947 ], 12, 1 );
    const_str_plain__marshal_time = UNSTREAM_STRING_ASCII( &constant_bin[ 5959 ], 13, 1 );
    const_str_plain_ticks_ms = UNSTREAM_STRING_ASCII( &constant_bin[ 5972 ], 8, 1 );
    const_str_plain_time_tuple = UNSTREAM_STRING_ASCII( &constant_bin[ 5980 ], 10, 1 );
    const_tuple_str_plain_agnostic_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_agnostic_tuple, 0, const_str_plain_agnostic ); Py_INCREF( const_str_plain_agnostic );
    const_str_digest_402cc885c3af5f576a174be54a7cfdf4 = UNSTREAM_STRING_ASCII( &constant_bin[ 5990 ], 66, 0 );
    const_str_digest_292ca4d57c83eea200c992ff5e8be51a = UNSTREAM_STRING_ASCII( &constant_bin[ 6056 ], 32, 0 );
    const_tuple_str_plain_ticks_ms_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ticks_ms_tuple, 0, const_str_plain_ticks_ms ); Py_INCREF( const_str_plain_ticks_ms );
    const_str_digest_ebfc71fa15b6839009ff56307a2f7030 = UNSTREAM_STRING_ASCII( &constant_bin[ 6088 ], 29, 0 );
    const_str_plain_struct_time = UNSTREAM_STRING_ASCII( &constant_bin[ 5812 ], 11, 1 );
    const_str_plain__prev_ticks_ms = UNSTREAM_STRING_ASCII( &constant_bin[ 6117 ], 14, 1 );
    const_str_plain_monotonic = UNSTREAM_STRING_ASCII( &constant_bin[ 5992 ], 9, 1 );
    const_tuple_d80bd719b2f36c6b6d834388a582930e_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_d80bd719b2f36c6b6d834388a582930e_tuple, 0, const_str_plain_struct_time ); Py_INCREF( const_str_plain_struct_time );
    PyTuple_SET_ITEM( const_tuple_d80bd719b2f36c6b6d834388a582930e_tuple, 1, const_tuple_ff41a3e72ae9aa21b50e1c5bda46eabe_tuple ); Py_INCREF( const_tuple_ff41a3e72ae9aa21b50e1c5bda46eabe_tuple );
    const_tuple_str_plain_time_tuple_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_time_tuple_tuple, 0, const_str_plain_time_tuple ); Py_INCREF( const_str_plain_time_tuple );
    const_str_digest_49c688b483967be250dd9d8fd09d59da = UNSTREAM_STRING_ASCII( &constant_bin[ 6131 ], 38, 0 );
    const_str_plain__struct_time = UNSTREAM_STRING_ASCII( &constant_bin[ 6169 ], 12, 1 );
    const_str_digest_6d11bdbed4a7addccfb3b4385fff4ff3 = UNSTREAM_STRING_ASCII( &constant_bin[ 6181 ], 37, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_adafruit_blinka$agnostic$time( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a9dcfc3dc6cb0ff598b889f4216075a0;
static PyCodeObject *codeobj_b682944820ce804d5649194e9a9af067;
static PyCodeObject *codeobj_a12b5a4080d53db5d047bc599f5b7750;
static PyCodeObject *codeobj_4ed7c1cf683147e24816d9c02ace4d21;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_292ca4d57c83eea200c992ff5e8be51a );
    codeobj_a9dcfc3dc6cb0ff598b889f4216075a0 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_49c688b483967be250dd9d8fd09d59da, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_b682944820ce804d5649194e9a9af067 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__marshal_time, 20, const_tuple_ff41a3e72ae9aa21b50e1c5bda46eabe_tuple, 9, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a12b5a4080d53db5d047bc599f5b7750 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_monotonic, 32, const_tuple_str_plain_ticks_ms_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4ed7c1cf683147e24816d9c02ace4d21 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_struct_time, 25, const_tuple_str_plain_time_tuple_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_2_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_adafruit_blinka$agnostic$time$$$function_1__marshal_time( PyObject *defaults );


static PyObject *MAKE_FUNCTION_adafruit_blinka$agnostic$time$$$function_2_struct_time(  );


static PyObject *MAKE_FUNCTION_adafruit_blinka$agnostic$time$$$function_3_monotonic(  );


// The module function definitions.
static PyObject *impl_adafruit_blinka$agnostic$time$$$function_1__marshal_time( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tm_year = python_pars[ 0 ];
    PyObject *par_tm_mon = python_pars[ 1 ];
    PyObject *par_tm_mday = python_pars[ 2 ];
    PyObject *par_tm_hour = python_pars[ 3 ];
    PyObject *par_tm_min = python_pars[ 4 ];
    PyObject *par_tm_sec = python_pars[ 5 ];
    PyObject *par_tm_wday = python_pars[ 6 ];
    PyObject *par_tm_yday = python_pars[ 7 ];
    PyObject *par_tm_isdst = python_pars[ 8 ];
    struct Nuitka_FrameObject *frame_b682944820ce804d5649194e9a9af067;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b682944820ce804d5649194e9a9af067 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b682944820ce804d5649194e9a9af067, codeobj_b682944820ce804d5649194e9a9af067, module_adafruit_blinka$agnostic$time, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b682944820ce804d5649194e9a9af067 = cache_frame_b682944820ce804d5649194e9a9af067;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b682944820ce804d5649194e9a9af067 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b682944820ce804d5649194e9a9af067 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain__struct_time );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__struct_time );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_struct_time" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 23;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_tm_year );
        tmp_args_element_name_1 = par_tm_year;
        CHECK_OBJECT( par_tm_mon );
        tmp_args_element_name_2 = par_tm_mon;
        CHECK_OBJECT( par_tm_mday );
        tmp_args_element_name_3 = par_tm_mday;
        CHECK_OBJECT( par_tm_hour );
        tmp_args_element_name_4 = par_tm_hour;
        CHECK_OBJECT( par_tm_min );
        tmp_args_element_name_5 = par_tm_min;
        CHECK_OBJECT( par_tm_sec );
        tmp_args_element_name_6 = par_tm_sec;
        CHECK_OBJECT( par_tm_wday );
        tmp_args_element_name_7 = par_tm_wday;
        CHECK_OBJECT( par_tm_yday );
        tmp_args_element_name_8 = par_tm_yday;
        CHECK_OBJECT( par_tm_isdst );
        tmp_args_element_name_9 = par_tm_isdst;
        frame_b682944820ce804d5649194e9a9af067->m_frame.f_lineno = 23;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS9( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b682944820ce804d5649194e9a9af067 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b682944820ce804d5649194e9a9af067 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b682944820ce804d5649194e9a9af067, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b682944820ce804d5649194e9a9af067->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b682944820ce804d5649194e9a9af067, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b682944820ce804d5649194e9a9af067,
        type_description_1,
        par_tm_year,
        par_tm_mon,
        par_tm_mday,
        par_tm_hour,
        par_tm_min,
        par_tm_sec,
        par_tm_wday,
        par_tm_yday,
        par_tm_isdst
    );


    // Release cached frame.
    if ( frame_b682944820ce804d5649194e9a9af067 == cache_frame_b682944820ce804d5649194e9a9af067 )
    {
        Py_DECREF( frame_b682944820ce804d5649194e9a9af067 );
    }
    cache_frame_b682944820ce804d5649194e9a9af067 = NULL;

    assertFrameObject( frame_b682944820ce804d5649194e9a9af067 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( adafruit_blinka$agnostic$time$$$function_1__marshal_time );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_tm_year );
    Py_DECREF( par_tm_year );
    par_tm_year = NULL;

    CHECK_OBJECT( (PyObject *)par_tm_mon );
    Py_DECREF( par_tm_mon );
    par_tm_mon = NULL;

    CHECK_OBJECT( (PyObject *)par_tm_mday );
    Py_DECREF( par_tm_mday );
    par_tm_mday = NULL;

    CHECK_OBJECT( (PyObject *)par_tm_hour );
    Py_DECREF( par_tm_hour );
    par_tm_hour = NULL;

    CHECK_OBJECT( (PyObject *)par_tm_min );
    Py_DECREF( par_tm_min );
    par_tm_min = NULL;

    CHECK_OBJECT( (PyObject *)par_tm_sec );
    Py_DECREF( par_tm_sec );
    par_tm_sec = NULL;

    CHECK_OBJECT( (PyObject *)par_tm_wday );
    Py_DECREF( par_tm_wday );
    par_tm_wday = NULL;

    CHECK_OBJECT( (PyObject *)par_tm_yday );
    Py_DECREF( par_tm_yday );
    par_tm_yday = NULL;

    CHECK_OBJECT( (PyObject *)par_tm_isdst );
    Py_DECREF( par_tm_isdst );
    par_tm_isdst = NULL;

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

    CHECK_OBJECT( (PyObject *)par_tm_year );
    Py_DECREF( par_tm_year );
    par_tm_year = NULL;

    CHECK_OBJECT( (PyObject *)par_tm_mon );
    Py_DECREF( par_tm_mon );
    par_tm_mon = NULL;

    CHECK_OBJECT( (PyObject *)par_tm_mday );
    Py_DECREF( par_tm_mday );
    par_tm_mday = NULL;

    CHECK_OBJECT( (PyObject *)par_tm_hour );
    Py_DECREF( par_tm_hour );
    par_tm_hour = NULL;

    CHECK_OBJECT( (PyObject *)par_tm_min );
    Py_DECREF( par_tm_min );
    par_tm_min = NULL;

    CHECK_OBJECT( (PyObject *)par_tm_sec );
    Py_DECREF( par_tm_sec );
    par_tm_sec = NULL;

    CHECK_OBJECT( (PyObject *)par_tm_wday );
    Py_DECREF( par_tm_wday );
    par_tm_wday = NULL;

    CHECK_OBJECT( (PyObject *)par_tm_yday );
    Py_DECREF( par_tm_yday );
    par_tm_yday = NULL;

    CHECK_OBJECT( (PyObject *)par_tm_isdst );
    Py_DECREF( par_tm_isdst );
    par_tm_isdst = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( adafruit_blinka$agnostic$time$$$function_1__marshal_time );
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


static PyObject *impl_adafruit_blinka$agnostic$time$$$function_2_struct_time( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_time_tuple = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_4ed7c1cf683147e24816d9c02ace4d21;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4ed7c1cf683147e24816d9c02ace4d21 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4ed7c1cf683147e24816d9c02ace4d21, codeobj_4ed7c1cf683147e24816d9c02ace4d21, module_adafruit_blinka$agnostic$time, sizeof(void *) );
    frame_4ed7c1cf683147e24816d9c02ace4d21 = cache_frame_4ed7c1cf683147e24816d9c02ace4d21;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4ed7c1cf683147e24816d9c02ace4d21 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4ed7c1cf683147e24816d9c02ace4d21 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain__marshal_time );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__marshal_time );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_marshal_time" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_time_tuple );
        tmp_dircall_arg2_1 = par_time_tuple;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___internal__$$$function_2_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ed7c1cf683147e24816d9c02ace4d21 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ed7c1cf683147e24816d9c02ace4d21 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ed7c1cf683147e24816d9c02ace4d21 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4ed7c1cf683147e24816d9c02ace4d21, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4ed7c1cf683147e24816d9c02ace4d21->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4ed7c1cf683147e24816d9c02ace4d21, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4ed7c1cf683147e24816d9c02ace4d21,
        type_description_1,
        par_time_tuple
    );


    // Release cached frame.
    if ( frame_4ed7c1cf683147e24816d9c02ace4d21 == cache_frame_4ed7c1cf683147e24816d9c02ace4d21 )
    {
        Py_DECREF( frame_4ed7c1cf683147e24816d9c02ace4d21 );
    }
    cache_frame_4ed7c1cf683147e24816d9c02ace4d21 = NULL;

    assertFrameObject( frame_4ed7c1cf683147e24816d9c02ace4d21 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( adafruit_blinka$agnostic$time$$$function_2_struct_time );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_time_tuple );
    Py_DECREF( par_time_tuple );
    par_time_tuple = NULL;

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

    CHECK_OBJECT( (PyObject *)par_time_tuple );
    Py_DECREF( par_time_tuple );
    par_time_tuple = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( adafruit_blinka$agnostic$time$$$function_2_struct_time );
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


static PyObject *impl_adafruit_blinka$agnostic$time$$$function_3_monotonic( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_ticks_ms = NULL;
    struct Nuitka_FrameObject *frame_a12b5a4080d53db5d047bc599f5b7750;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_inplace_orig;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a12b5a4080d53db5d047bc599f5b7750 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a12b5a4080d53db5d047bc599f5b7750, codeobj_a12b5a4080d53db5d047bc599f5b7750, module_adafruit_blinka$agnostic$time, sizeof(void *) );
    frame_a12b5a4080d53db5d047bc599f5b7750 = cache_frame_a12b5a4080d53db5d047bc599f5b7750;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a12b5a4080d53db5d047bc599f5b7750 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a12b5a4080d53db5d047bc599f5b7750 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain_utime );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utime );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "utime" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 37;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_a12b5a4080d53db5d047bc599f5b7750->m_frame.f_lineno = 37;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_ticks_ms );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert( var_ticks_ms == NULL );
        var_ticks_ms = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain__total_ms );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__total_ms );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_total_ms" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 38;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain_utime );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utime );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "utime" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 38;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ticks_diff );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ticks_ms );
        tmp_args_element_name_1 = var_ticks_ms;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain__prev_ticks_ms );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prev_ticks_ms );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_prev_ticks_ms" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 38;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_4;
        frame_a12b5a4080d53db5d047bc599f5b7750->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_inplace_orig = tmp_left_name_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_left_name_1;
        if (tmp_inplace_orig != tmp_assign_source_2) {
        UPDATE_STRING_DICT_INPLACE( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain__total_ms, tmp_assign_source_2 );
        }
    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( var_ticks_ms );
        tmp_assign_source_3 = var_ticks_ms;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain__prev_ticks_ms, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_left_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain__total_ms );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__total_ms );
        }

        CHECK_OBJECT( tmp_mvar_value_5 );
        tmp_left_name_2 = tmp_mvar_value_5;
        tmp_right_name_2 = const_float_0_001;
        tmp_return_value = BINARY_OPERATION_MUL_OBJECT_FLOAT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a12b5a4080d53db5d047bc599f5b7750 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a12b5a4080d53db5d047bc599f5b7750 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a12b5a4080d53db5d047bc599f5b7750 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a12b5a4080d53db5d047bc599f5b7750, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a12b5a4080d53db5d047bc599f5b7750->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a12b5a4080d53db5d047bc599f5b7750, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a12b5a4080d53db5d047bc599f5b7750,
        type_description_1,
        var_ticks_ms
    );


    // Release cached frame.
    if ( frame_a12b5a4080d53db5d047bc599f5b7750 == cache_frame_a12b5a4080d53db5d047bc599f5b7750 )
    {
        Py_DECREF( frame_a12b5a4080d53db5d047bc599f5b7750 );
    }
    cache_frame_a12b5a4080d53db5d047bc599f5b7750 = NULL;

    assertFrameObject( frame_a12b5a4080d53db5d047bc599f5b7750 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( adafruit_blinka$agnostic$time$$$function_3_monotonic );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_ticks_ms );
    Py_DECREF( var_ticks_ms );
    var_ticks_ms = NULL;

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

    Py_XDECREF( var_ticks_ms );
    var_ticks_ms = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( adafruit_blinka$agnostic$time$$$function_3_monotonic );
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



static PyObject *MAKE_FUNCTION_adafruit_blinka$agnostic$time$$$function_1__marshal_time( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_adafruit_blinka$agnostic$time$$$function_1__marshal_time,
        const_str_plain__marshal_time,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b682944820ce804d5649194e9a9af067,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_adafruit_blinka$agnostic$time,
        const_str_digest_559cf35cac4ce384d722e75eaffb4773,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_adafruit_blinka$agnostic$time$$$function_2_struct_time(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_adafruit_blinka$agnostic$time$$$function_2_struct_time,
        const_str_plain_struct_time,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4ed7c1cf683147e24816d9c02ace4d21,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_adafruit_blinka$agnostic$time,
        const_str_digest_3e79d826ea516ac18c8c20661e22db00,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_adafruit_blinka$agnostic$time$$$function_3_monotonic(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_adafruit_blinka$agnostic$time$$$function_3_monotonic,
        const_str_plain_monotonic,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a12b5a4080d53db5d047bc599f5b7750,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_adafruit_blinka$agnostic$time,
        const_str_digest_402cc885c3af5f576a174be54a7cfdf4,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_adafruit_blinka$agnostic$time =
{
    PyModuleDef_HEAD_INIT,
    "adafruit_blinka.agnostic.time",
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

MOD_INIT_DECL( adafruit_blinka$agnostic$time )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_adafruit_blinka$agnostic$time );
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
    puts("adafruit_blinka.agnostic.time: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("adafruit_blinka.agnostic.time: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("adafruit_blinka.agnostic.time: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initadafruit_blinka$agnostic$time" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_adafruit_blinka$agnostic$time = Py_InitModule4(
        "adafruit_blinka.agnostic.time",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_adafruit_blinka$agnostic$time = PyModule_Create( &mdef_adafruit_blinka$agnostic$time );
#endif

    moduledict_adafruit_blinka$agnostic$time = MODULE_DICT( module_adafruit_blinka$agnostic$time );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_adafruit_blinka$agnostic$time,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_adafruit_blinka$agnostic$time,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_adafruit_blinka$agnostic$time,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_adafruit_blinka$agnostic$time,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_adafruit_blinka$agnostic$time );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_ebfc71fa15b6839009ff56307a2f7030, module_adafruit_blinka$agnostic$time );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_a9dcfc3dc6cb0ff598b889f4216075a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_6d11bdbed4a7addccfb3b4385fff4ff3;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_a9dcfc3dc6cb0ff598b889f4216075a0 = MAKE_MODULE_FRAME( codeobj_a9dcfc3dc6cb0ff598b889f4216075a0, module_adafruit_blinka$agnostic$time );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a9dcfc3dc6cb0ff598b889f4216075a0 );
    assert( Py_REFCNT( frame_a9dcfc3dc6cb0ff598b889f4216075a0 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_adafruit_blinka;
        tmp_globals_name_1 = (PyObject *)moduledict_adafruit_blinka$agnostic$time;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_agnostic_tuple;
        tmp_level_name_1 = const_int_0;
        frame_a9dcfc3dc6cb0ff598b889f4216075a0->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_agnostic );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain_agnostic, tmp_assign_source_4 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain_agnostic );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_agnostic );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_implementation );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_plain_circuitpython;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

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
            PyObject *tmp_star_imported_1;
            PyObject *tmp_name_name_2;
            PyObject *tmp_globals_name_2;
            PyObject *tmp_locals_name_2;
            PyObject *tmp_fromlist_name_2;
            PyObject *tmp_level_name_2;
            tmp_name_name_2 = const_str_plain_time;
            tmp_globals_name_2 = (PyObject *)moduledict_adafruit_blinka$agnostic$time;
            tmp_locals_name_2 = (PyObject *)moduledict_adafruit_blinka$agnostic$time;
            tmp_fromlist_name_2 = const_tuple_str_chr_42_tuple;
            tmp_level_name_2 = const_int_0;
            frame_a9dcfc3dc6cb0ff598b889f4216075a0->m_frame.f_lineno = 9;
            tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
            assert( !(tmp_star_imported_1 == NULL) );
            tmp_result = IMPORT_MODULE_STAR( module_adafruit_blinka$agnostic$time, true, tmp_star_imported_1 );
            Py_DECREF( tmp_star_imported_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 9;

                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain_agnostic );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_agnostic );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "agnostic" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 10;

                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_4;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_implementation );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 10;

                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_str_plain_micropython;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 10;

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
                PyObject *tmp_assign_source_5;
                PyObject *tmp_name_name_3;
                PyObject *tmp_globals_name_3;
                PyObject *tmp_locals_name_3;
                PyObject *tmp_fromlist_name_3;
                PyObject *tmp_level_name_3;
                tmp_name_name_3 = const_str_plain_utime;
                tmp_globals_name_3 = (PyObject *)moduledict_adafruit_blinka$agnostic$time;
                tmp_locals_name_3 = Py_None;
                tmp_fromlist_name_3 = Py_None;
                tmp_level_name_3 = const_int_0;
                frame_a9dcfc3dc6cb0ff598b889f4216075a0->m_frame.f_lineno = 11;
                tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
                if ( tmp_assign_source_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 11;

                    goto frame_exception_exit_1;
                }
                UPDATE_STRING_DICT1( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain_utime, tmp_assign_source_5 );
            }
            {
                PyObject *tmp_assign_source_6;
                PyObject *tmp_import_name_from_2;
                PyObject *tmp_name_name_4;
                PyObject *tmp_globals_name_4;
                PyObject *tmp_locals_name_4;
                PyObject *tmp_fromlist_name_4;
                PyObject *tmp_level_name_4;
                tmp_name_name_4 = const_str_plain_utime;
                tmp_globals_name_4 = (PyObject *)moduledict_adafruit_blinka$agnostic$time;
                tmp_locals_name_4 = Py_None;
                tmp_fromlist_name_4 = const_tuple_str_plain_sleep_tuple;
                tmp_level_name_4 = const_int_0;
                frame_a9dcfc3dc6cb0ff598b889f4216075a0->m_frame.f_lineno = 12;
                tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
                if ( tmp_import_name_from_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 12;

                    goto frame_exception_exit_1;
                }
                tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_sleep );
                Py_DECREF( tmp_import_name_from_2 );
                if ( tmp_assign_source_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 12;

                    goto frame_exception_exit_1;
                }
                UPDATE_STRING_DICT1( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain_sleep, tmp_assign_source_6 );
            }
            {
                PyObject *tmp_assign_source_7;
                PyObject *tmp_import_name_from_3;
                PyObject *tmp_name_name_5;
                PyObject *tmp_globals_name_5;
                PyObject *tmp_locals_name_5;
                PyObject *tmp_fromlist_name_5;
                PyObject *tmp_level_name_5;
                tmp_name_name_5 = const_str_plain_ucollections;
                tmp_globals_name_5 = (PyObject *)moduledict_adafruit_blinka$agnostic$time;
                tmp_locals_name_5 = Py_None;
                tmp_fromlist_name_5 = const_tuple_str_plain_namedtuple_tuple;
                tmp_level_name_5 = const_int_0;
                frame_a9dcfc3dc6cb0ff598b889f4216075a0->m_frame.f_lineno = 14;
                tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
                if ( tmp_import_name_from_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 14;

                    goto frame_exception_exit_1;
                }
                tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_namedtuple );
                Py_DECREF( tmp_import_name_from_3 );
                if ( tmp_assign_source_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 14;

                    goto frame_exception_exit_1;
                }
                UPDATE_STRING_DICT1( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain_namedtuple, tmp_assign_source_7 );
            }
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_5;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain_namedtuple );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_namedtuple );
                }

                CHECK_OBJECT( tmp_mvar_value_5 );
                tmp_called_name_1 = tmp_mvar_value_5;
                frame_a9dcfc3dc6cb0ff598b889f4216075a0->m_frame.f_lineno = 15;
                tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_d80bd719b2f36c6b6d834388a582930e_tuple, 0 ) );

                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 15;

                    goto frame_exception_exit_1;
                }
                UPDATE_STRING_DICT1( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain__struct_time, tmp_assign_source_8 );
            }
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_defaults_1;
                tmp_defaults_1 = const_tuple_int_0_int_0_int_0_int_neg_1_int_neg_1_int_neg_1_tuple;
                Py_INCREF( tmp_defaults_1 );
                tmp_assign_source_9 = MAKE_FUNCTION_adafruit_blinka$agnostic$time$$$function_1__marshal_time( tmp_defaults_1 );



                UPDATE_STRING_DICT1( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain__marshal_time, tmp_assign_source_9 );
            }
            {
                PyObject *tmp_assign_source_10;
                tmp_assign_source_10 = MAKE_FUNCTION_adafruit_blinka$agnostic$time$$$function_2_struct_time(  );



                UPDATE_STRING_DICT1( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain_struct_time, tmp_assign_source_10 );
            }
            {
                PyObject *tmp_assign_source_11;
                tmp_assign_source_11 = const_int_0;
                UPDATE_STRING_DICT0( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain__total_ms, tmp_assign_source_11 );
            }
            {
                PyObject *tmp_assign_source_12;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_mvar_value_6;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain_utime );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utime );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "utime" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 31;

                    goto frame_exception_exit_1;
                }

                tmp_called_instance_1 = tmp_mvar_value_6;
                frame_a9dcfc3dc6cb0ff598b889f4216075a0->m_frame.f_lineno = 31;
                tmp_assign_source_12 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_ticks_ms );
                if ( tmp_assign_source_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 31;

                    goto frame_exception_exit_1;
                }
                UPDATE_STRING_DICT1( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain__prev_ticks_ms, tmp_assign_source_12 );
            }
            {
                PyObject *tmp_assign_source_13;
                tmp_assign_source_13 = MAKE_FUNCTION_adafruit_blinka$agnostic$time$$$function_3_monotonic(  );



                UPDATE_STRING_DICT1( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain_monotonic, tmp_assign_source_13 );
            }
            branch_no_2:;
        }
        branch_end_1:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9dcfc3dc6cb0ff598b889f4216075a0 );
#endif
    popFrameStack();

    assertFrameObject( frame_a9dcfc3dc6cb0ff598b889f4216075a0 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9dcfc3dc6cb0ff598b889f4216075a0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a9dcfc3dc6cb0ff598b889f4216075a0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a9dcfc3dc6cb0ff598b889f4216075a0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a9dcfc3dc6cb0ff598b889f4216075a0, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$agnostic$time, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_adafruit_blinka$agnostic$time );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
