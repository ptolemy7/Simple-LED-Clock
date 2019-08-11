/* Generated code for Python module 'adafruit_blinka.microcontroller.esp8266.pin'
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

/* The "_module_adafruit_blinka$microcontroller$esp8266$pin" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_adafruit_blinka$microcontroller$esp8266$pin;
PyDictObject *moduledict_adafruit_blinka$microcontroller$esp8266$pin;

/* The declarations of module constants used, if any. */
extern PyObject *const_int_pos_12;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_tuple_int_pos_14_tuple;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_int_pos_5_tuple;
static PyObject *const_str_plain_GPIO14;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_75829269505cc85bb9d6fc545f410003;
extern PyObject *const_tuple_int_pos_3_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_tuple_int_pos_4_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_GPIO4;
static PyObject *const_str_plain_GPIO0;
static PyObject *const_str_plain_GPIO5;
extern PyObject *const_int_0;
extern PyObject *const_tuple_str_plain_Pin_tuple;
extern PyObject *const_int_pos_15;
static PyObject *const_str_plain_GPIO2;
extern PyObject *const_int_pos_3;
static PyObject *const_str_plain_GPIO16;
extern PyObject *const_str_plain_UART_PORTS;
extern PyObject *const_str_digest_1d1f43dfbb93e60d00ee0e787d075dd3;
extern PyObject *const_str_plain_Pin;
extern PyObject *const_tuple_int_pos_16_tuple;
static PyObject *const_str_plain_GPIO1;
extern PyObject *const_tuple_int_pos_2_tuple;
static PyObject *const_str_plain_GPIO3;
static PyObject *const_str_plain_TOUT;
static PyObject *const_str_digest_ad951d48ead9d146f29e4e31a403f535;
extern PyObject *const_tuple_int_pos_13_tuple;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_aca96df78228616faaa8c04a740e3262;
static PyObject *const_str_plain_GPIO15;
extern PyObject *const_int_pos_14;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_plain_TOUT_tuple;
extern PyObject *const_tuple_int_pos_12_tuple;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_tuple_int_pos_15_tuple;
extern PyObject *const_int_pos_5;
static PyObject *const_str_plain_GPIO13;
static PyObject *const_str_plain_GPIO12;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_SPI_PORTS;
extern PyObject *const_int_pos_13;
extern PyObject *const_str_plain_microcontroller;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain_I2C_PORTS;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___debug__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_GPIO14 = UNSTREAM_STRING_ASCII( &constant_bin[ 9320 ], 6, 1 );
    const_str_digest_75829269505cc85bb9d6fc545f410003 = UNSTREAM_STRING_ASCII( &constant_bin[ 9326 ], 46, 0 );
    const_str_plain_GPIO4 = UNSTREAM_STRING_ASCII( &constant_bin[ 9372 ], 5, 1 );
    const_str_plain_GPIO0 = UNSTREAM_STRING_ASCII( &constant_bin[ 9377 ], 5, 1 );
    const_str_plain_GPIO5 = UNSTREAM_STRING_ASCII( &constant_bin[ 9382 ], 5, 1 );
    const_str_plain_GPIO2 = UNSTREAM_STRING_ASCII( &constant_bin[ 8258 ], 5, 1 );
    const_str_plain_GPIO16 = UNSTREAM_STRING_ASCII( &constant_bin[ 9387 ], 6, 1 );
    const_str_plain_GPIO1 = UNSTREAM_STRING_ASCII( &constant_bin[ 8272 ], 5, 1 );
    const_str_plain_GPIO3 = UNSTREAM_STRING_ASCII( &constant_bin[ 9393 ], 5, 1 );
    const_str_plain_TOUT = UNSTREAM_STRING_ASCII( &constant_bin[ 9398 ], 4, 1 );
    const_str_digest_ad951d48ead9d146f29e4e31a403f535 = UNSTREAM_STRING_ASCII( &constant_bin[ 9402 ], 17, 0 );
    const_str_digest_aca96df78228616faaa8c04a740e3262 = UNSTREAM_STRING_ASCII( &constant_bin[ 9419 ], 52, 0 );
    const_str_plain_GPIO15 = UNSTREAM_STRING_ASCII( &constant_bin[ 9471 ], 6, 1 );
    const_tuple_str_plain_TOUT_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_TOUT_tuple, 0, const_str_plain_TOUT ); Py_INCREF( const_str_plain_TOUT );
    const_str_plain_GPIO13 = UNSTREAM_STRING_ASCII( &constant_bin[ 8314 ], 6, 1 );
    const_str_plain_GPIO12 = UNSTREAM_STRING_ASCII( &constant_bin[ 8272 ], 6, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_adafruit_blinka$microcontroller$esp8266$pin( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_7e4d3d8e18bd81000659e7f3b39145f2;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_75829269505cc85bb9d6fc545f410003 );
    codeobj_7e4d3d8e18bd81000659e7f3b39145f2 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_aca96df78228616faaa8c04a740e3262, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_adafruit_blinka$microcontroller$esp8266$pin =
{
    PyModuleDef_HEAD_INIT,
    "adafruit_blinka.microcontroller.esp8266.pin",
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

MOD_INIT_DECL( adafruit_blinka$microcontroller$esp8266$pin )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_adafruit_blinka$microcontroller$esp8266$pin );
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
    puts("adafruit_blinka.microcontroller.esp8266.pin: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("adafruit_blinka.microcontroller.esp8266.pin: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("adafruit_blinka.microcontroller.esp8266.pin: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initadafruit_blinka$microcontroller$esp8266$pin" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_adafruit_blinka$microcontroller$esp8266$pin = Py_InitModule4(
        "adafruit_blinka.microcontroller.esp8266.pin",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_adafruit_blinka$microcontroller$esp8266$pin = PyModule_Create( &mdef_adafruit_blinka$microcontroller$esp8266$pin );
#endif

    moduledict_adafruit_blinka$microcontroller$esp8266$pin = MODULE_DICT( module_adafruit_blinka$microcontroller$esp8266$pin );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_adafruit_blinka$microcontroller$esp8266$pin,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_adafruit_blinka$microcontroller$esp8266$pin,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_adafruit_blinka$microcontroller$esp8266$pin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_adafruit_blinka$microcontroller$esp8266$pin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_adafruit_blinka$microcontroller$esp8266$pin );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_1d1f43dfbb93e60d00ee0e787d075dd3, module_adafruit_blinka$microcontroller$esp8266$pin );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_7e4d3d8e18bd81000659e7f3b39145f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_ad951d48ead9d146f29e4e31a403f535;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_7e4d3d8e18bd81000659e7f3b39145f2 = MAKE_MODULE_FRAME( codeobj_7e4d3d8e18bd81000659e7f3b39145f2, module_adafruit_blinka$microcontroller$esp8266$pin );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_7e4d3d8e18bd81000659e7f3b39145f2 );
    assert( Py_REFCNT( frame_7e4d3d8e18bd81000659e7f3b39145f2 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_microcontroller;
        tmp_globals_name_1 = (PyObject *)moduledict_adafruit_blinka$microcontroller$esp8266$pin;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_Pin_tuple;
        tmp_level_name_1 = const_int_0;
        frame_7e4d3d8e18bd81000659e7f3b39145f2->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Pin );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_Pin, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_called_name_1 = tmp_mvar_value_3;
        frame_7e4d3d8e18bd81000659e7f3b39145f2->m_frame.f_lineno = 5;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_GPIO0, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 6;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_4;
        frame_7e4d3d8e18bd81000659e7f3b39145f2->m_frame.f_lineno = 6;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_GPIO1, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 7;

            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_5;
        frame_7e4d3d8e18bd81000659e7f3b39145f2->m_frame.f_lineno = 7;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_GPIO2, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 8;

            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_6;
        frame_7e4d3d8e18bd81000659e7f3b39145f2->m_frame.f_lineno = 8;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_GPIO3, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 9;

            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_7;
        frame_7e4d3d8e18bd81000659e7f3b39145f2->m_frame.f_lineno = 9;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_int_pos_4_tuple, 0 ) );

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_GPIO4, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 10;

            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_8;
        frame_7e4d3d8e18bd81000659e7f3b39145f2->m_frame.f_lineno = 10;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_int_pos_5_tuple, 0 ) );

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_GPIO5, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 11;

            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_9;
        frame_7e4d3d8e18bd81000659e7f3b39145f2->m_frame.f_lineno = 11;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_int_pos_12_tuple, 0 ) );

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_GPIO12, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 12;

            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_10;
        frame_7e4d3d8e18bd81000659e7f3b39145f2->m_frame.f_lineno = 12;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_int_pos_13_tuple, 0 ) );

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_GPIO13, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 13;

            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_11;
        frame_7e4d3d8e18bd81000659e7f3b39145f2->m_frame.f_lineno = 13;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_int_pos_14_tuple, 0 ) );

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_GPIO14, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_12;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 14;

            goto frame_exception_exit_1;
        }

        tmp_called_name_10 = tmp_mvar_value_12;
        frame_7e4d3d8e18bd81000659e7f3b39145f2->m_frame.f_lineno = 14;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, &PyTuple_GET_ITEM( const_tuple_int_pos_15_tuple, 0 ) );

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_GPIO15, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_13;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 15;

            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_13;
        frame_7e4d3d8e18bd81000659e7f3b39145f2->m_frame.f_lineno = 15;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, &PyTuple_GET_ITEM( const_tuple_int_pos_16_tuple, 0 ) );

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_GPIO16, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_14;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }

        tmp_called_name_12 = tmp_mvar_value_14;
        frame_7e4d3d8e18bd81000659e7f3b39145f2->m_frame.f_lineno = 16;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, &PyTuple_GET_ITEM( const_tuple_str_plain_TOUT_tuple, 0 ) );

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_TOUT, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_mvar_value_17;
        tmp_tuple_element_1 = const_int_pos_1;
        tmp_assign_source_17 = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_17, 0, tmp_tuple_element_1 );
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_GPIO14 );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GPIO14 );
        }

        if ( tmp_mvar_value_15 == NULL )
        {
            Py_DECREF( tmp_assign_source_17 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GPIO14" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_15;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_17, 1, tmp_tuple_element_1 );
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_GPIO13 );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GPIO13 );
        }

        if ( tmp_mvar_value_16 == NULL )
        {
            Py_DECREF( tmp_assign_source_17 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GPIO13" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_16;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_17, 2, tmp_tuple_element_1 );
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_GPIO12 );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GPIO12 );
        }

        if ( tmp_mvar_value_17 == NULL )
        {
            Py_DECREF( tmp_assign_source_17 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GPIO12" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_17;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_17, 3, tmp_tuple_element_1 );
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_SPI_PORTS, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_20;
        tmp_tuple_element_3 = const_int_0;
        tmp_tuple_element_2 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_3 );
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_GPIO1 );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GPIO1 );
        }

        if ( tmp_mvar_value_18 == NULL )
        {
            Py_DECREF( tmp_tuple_element_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GPIO1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = tmp_mvar_value_18;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_3 );
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_GPIO3 );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GPIO3 );
        }

        if ( tmp_mvar_value_19 == NULL )
        {
            Py_DECREF( tmp_tuple_element_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GPIO3" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = tmp_mvar_value_19;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_tuple_element_2, 2, tmp_tuple_element_3 );
        tmp_assign_source_18 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_assign_source_18, 0, tmp_tuple_element_2 );
        tmp_tuple_element_4 = const_int_pos_1;
        tmp_tuple_element_2 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_4 );
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_GPIO2 );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GPIO2 );
        }

        if ( tmp_mvar_value_20 == NULL )
        {
            Py_DECREF( tmp_assign_source_18 );
            Py_DECREF( tmp_tuple_element_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GPIO2" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_4 = tmp_mvar_value_20;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_4 );
        tmp_tuple_element_4 = Py_None;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_tuple_element_2, 2, tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_assign_source_18, 1, tmp_tuple_element_2 );
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_UART_PORTS, tmp_assign_source_18 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e4d3d8e18bd81000659e7f3b39145f2 );
#endif
    popFrameStack();

    assertFrameObject( frame_7e4d3d8e18bd81000659e7f3b39145f2 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e4d3d8e18bd81000659e7f3b39145f2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7e4d3d8e18bd81000659e7f3b39145f2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7e4d3d8e18bd81000659e7f3b39145f2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7e4d3d8e18bd81000659e7f3b39145f2, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = const_tuple_empty;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain_I2C_PORTS, tmp_assign_source_19 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$esp8266$pin, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_adafruit_blinka$microcontroller$esp8266$pin );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
