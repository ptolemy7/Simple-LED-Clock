/* Generated code for Python module 'microcontroller.pin'
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

/* The "_module_microcontroller$pin" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_microcontroller$pin;
PyDictObject *moduledict_microcontroller$pin;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_APQ8016;
extern PyObject *const_str_plain_T186;
extern PyObject *const_str_digest_efdbb1146d6752472c0f8c671fd9deb5;
extern PyObject *const_str_plain_T210;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_digest_cea0edda4a37f9b21d5f316ef41250c8;
extern PyObject *const_str_digest_27590e9627cdd4999c774bf4c1f1962f;
extern PyObject *const_str_digest_461f5cb03aca48d6eb285a5f7999fc4a;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_7b1b39b143d57c01cb563cf6e2abebeb;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_digest_d0fff785ff78971c897b548f07ba60ad;
extern PyObject *const_str_digest_2134f552f340f7ce0a8a355bdaa826fe;
extern PyObject *const_int_0;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain_AM33XX;
extern PyObject *const_str_digest_840781f3bcbba24c0c9d94a22c7c54d4;
static PyObject *const_str_digest_8fd8af34ace6df79ea0140717d7d58e2;
extern PyObject *const_str_plain_STM32;
extern PyObject *const_str_digest_1d1f43dfbb93e60d00ee0e787d075dd3;
extern PyObject *const_str_digest_0c1898fc1f2c6d20fef19765d7f4025d;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_bbf45b9ef66d2a46daae695f7a0909ca;
extern PyObject *const_str_plain_chip;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_ESP8266;
extern PyObject *const_str_digest_c606d455df1b0b1ff46033ccb0d515a0;
extern PyObject *const_str_digest_4e7aad7c88b0724a830e614462e04cb4;
extern PyObject *const_str_plain_NotImplementedError;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_digest_2924342b5bc89f7a19a02b6ab2742f1e;
extern PyObject *const_str_plain_chip_id;
extern PyObject *const_str_plain_SUN8I;
extern PyObject *const_str_plain_ap_chip;
extern PyObject *const_str_plain_SAMA5;
extern PyObject *const_str_digest_d1aaf6d901a3f894393de994d52a5367;
static PyObject *const_str_digest_cb5bfb2c9b81ec1e9e96a5bafeddf254;
extern PyObject *const_str_plain_BCM2XXX;
extern PyObject *const_str_plain_S905;
extern PyObject *const_str_plain_T194;
extern PyObject *const_str_plain_IMX8MX;
extern PyObject *const_str_digest_4ebeeb801387999c9452758cfcfb1249;
static PyObject *const_str_digest_4e74c031257d433e4a71e1e9d0751cd4;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_str_plain_chip_id_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_8fd8af34ace6df79ea0140717d7d58e2 = UNSTREAM_STRING_ASCII( &constant_bin[ 31248 ], 28, 0 );
    const_str_digest_bbf45b9ef66d2a46daae695f7a0909ca = UNSTREAM_STRING_ASCII( &constant_bin[ 31276 ], 31, 0 );
    const_str_digest_cb5bfb2c9b81ec1e9e96a5bafeddf254 = UNSTREAM_STRING_ASCII( &constant_bin[ 31307 ], 33, 0 );
    const_str_digest_4e74c031257d433e4a71e1e9d0751cd4 = UNSTREAM_STRING_ASCII( &constant_bin[ 31340 ], 22, 0 );
    const_tuple_str_plain_chip_id_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_chip_id_tuple, 0, const_str_plain_chip_id ); Py_INCREF( const_str_plain_chip_id );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_microcontroller$pin( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_81db6b78901a80dfcd5a8575f7b32979;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_4e74c031257d433e4a71e1e9d0751cd4 );
    codeobj_81db6b78901a80dfcd5a8575f7b32979 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8fd8af34ace6df79ea0140717d7d58e2, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_microcontroller$pin =
{
    PyModuleDef_HEAD_INIT,
    "microcontroller.pin",
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

MOD_INIT_DECL( microcontroller$pin )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_microcontroller$pin );
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
    puts("microcontroller.pin: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("microcontroller.pin: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("microcontroller.pin: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initmicrocontroller$pin" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_microcontroller$pin = Py_InitModule4(
        "microcontroller.pin",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_microcontroller$pin = PyModule_Create( &mdef_microcontroller$pin );
#endif

    moduledict_microcontroller$pin = MODULE_DICT( module_microcontroller$pin );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_microcontroller$pin,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_microcontroller$pin,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_microcontroller$pin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_microcontroller$pin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_microcontroller$pin );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_4e7aad7c88b0724a830e614462e04cb4, module_microcontroller$pin );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_81db6b78901a80dfcd5a8575f7b32979;
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
        tmp_assign_source_1 = const_str_digest_cb5bfb2c9b81ec1e9e96a5bafeddf254;
        UPDATE_STRING_DICT0( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_81db6b78901a80dfcd5a8575f7b32979 = MAKE_MODULE_FRAME( codeobj_81db6b78901a80dfcd5a8575f7b32979, module_microcontroller$pin );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_81db6b78901a80dfcd5a8575f7b32979 );
    assert( Py_REFCNT( frame_81db6b78901a80dfcd5a8575f7b32979 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_2134f552f340f7ce0a8a355bdaa826fe;
        tmp_globals_name_1 = (PyObject *)moduledict_microcontroller$pin;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_81db6b78901a80dfcd5a8575f7b32979->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_chip );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_ap_chip, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_461f5cb03aca48d6eb285a5f7999fc4a;
        tmp_globals_name_2 = (PyObject *)moduledict_microcontroller$pin;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_chip_id_tuple;
        tmp_level_name_2 = const_int_0;
        frame_81db6b78901a80dfcd5a8575f7b32979->m_frame.f_lineno = 4;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_chip_id );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_chip_id, tmp_assign_source_5 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_chip_id );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_chip_id );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_compexpr_left_1 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_ap_chip );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ap_chip );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ap_chip" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 9;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_4;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ESP8266 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

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
            PyObject *tmp_name_name_3;
            PyObject *tmp_globals_name_3;
            PyObject *tmp_locals_name_3;
            PyObject *tmp_fromlist_name_3;
            PyObject *tmp_level_name_3;
            tmp_name_name_3 = const_str_digest_1d1f43dfbb93e60d00ee0e787d075dd3;
            tmp_globals_name_3 = (PyObject *)moduledict_microcontroller$pin;
            tmp_locals_name_3 = (PyObject *)moduledict_microcontroller$pin;
            tmp_fromlist_name_3 = const_tuple_str_chr_42_tuple;
            tmp_level_name_3 = const_int_0;
            frame_81db6b78901a80dfcd5a8575f7b32979->m_frame.f_lineno = 10;
            tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
            if ( tmp_star_imported_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 10;

                goto frame_exception_exit_1;
            }
            tmp_result = IMPORT_MODULE_STAR( module_microcontroller$pin, true, tmp_star_imported_1 );
            Py_DECREF( tmp_star_imported_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 10;

                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_6;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_chip_id );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_chip_id );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "chip_id" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 11;

                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_2 = tmp_mvar_value_5;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_ap_chip );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ap_chip );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ap_chip" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 11;

                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_6;
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_STM32 );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 11;

                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 11;

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
                PyObject *tmp_star_imported_2;
                PyObject *tmp_name_name_4;
                PyObject *tmp_globals_name_4;
                PyObject *tmp_locals_name_4;
                PyObject *tmp_fromlist_name_4;
                PyObject *tmp_level_name_4;
                tmp_name_name_4 = const_str_digest_4ebeeb801387999c9452758cfcfb1249;
                tmp_globals_name_4 = (PyObject *)moduledict_microcontroller$pin;
                tmp_locals_name_4 = (PyObject *)moduledict_microcontroller$pin;
                tmp_fromlist_name_4 = const_tuple_str_chr_42_tuple;
                tmp_level_name_4 = const_int_0;
                frame_81db6b78901a80dfcd5a8575f7b32979->m_frame.f_lineno = 12;
                tmp_star_imported_2 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
                if ( tmp_star_imported_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 12;

                    goto frame_exception_exit_1;
                }
                tmp_result = IMPORT_MODULE_STAR( module_microcontroller$pin, true, tmp_star_imported_2 );
                Py_DECREF( tmp_star_imported_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 12;

                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_source_name_3;
                PyObject *tmp_mvar_value_8;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_chip_id );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_chip_id );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "chip_id" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 13;

                    goto frame_exception_exit_1;
                }

                tmp_compexpr_left_3 = tmp_mvar_value_7;
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_ap_chip );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ap_chip );
                }

                if ( tmp_mvar_value_8 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ap_chip" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 13;

                    goto frame_exception_exit_1;
                }

                tmp_source_name_3 = tmp_mvar_value_8;
                tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_BCM2XXX );
                if ( tmp_compexpr_right_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 13;

                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 13;

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
                    PyObject *tmp_star_imported_3;
                    PyObject *tmp_name_name_5;
                    PyObject *tmp_globals_name_5;
                    PyObject *tmp_locals_name_5;
                    PyObject *tmp_fromlist_name_5;
                    PyObject *tmp_level_name_5;
                    tmp_name_name_5 = const_str_digest_27590e9627cdd4999c774bf4c1f1962f;
                    tmp_globals_name_5 = (PyObject *)moduledict_microcontroller$pin;
                    tmp_locals_name_5 = (PyObject *)moduledict_microcontroller$pin;
                    tmp_fromlist_name_5 = const_tuple_str_chr_42_tuple;
                    tmp_level_name_5 = const_int_0;
                    frame_81db6b78901a80dfcd5a8575f7b32979->m_frame.f_lineno = 14;
                    tmp_star_imported_3 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
                    if ( tmp_star_imported_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 14;

                        goto frame_exception_exit_1;
                    }
                    tmp_result = IMPORT_MODULE_STAR( module_microcontroller$pin, true, tmp_star_imported_3 );
                    Py_DECREF( tmp_star_imported_3 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 14;

                        goto frame_exception_exit_1;
                    }
                }
                goto branch_end_3;
                branch_no_3:;
                {
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    PyObject *tmp_mvar_value_9;
                    PyObject *tmp_source_name_4;
                    PyObject *tmp_mvar_value_10;
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_chip_id );

                    if (unlikely( tmp_mvar_value_9 == NULL ))
                    {
                        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_chip_id );
                    }

                    if ( tmp_mvar_value_9 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "chip_id" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 15;

                        goto frame_exception_exit_1;
                    }

                    tmp_compexpr_left_4 = tmp_mvar_value_9;
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_ap_chip );

                    if (unlikely( tmp_mvar_value_10 == NULL ))
                    {
                        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ap_chip );
                    }

                    if ( tmp_mvar_value_10 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ap_chip" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 15;

                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_4 = tmp_mvar_value_10;
                    tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_AM33XX );
                    if ( tmp_compexpr_right_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 15;

                        goto frame_exception_exit_1;
                    }
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                    Py_DECREF( tmp_compexpr_right_4 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 15;

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
                        PyObject *tmp_star_imported_4;
                        PyObject *tmp_name_name_6;
                        PyObject *tmp_globals_name_6;
                        PyObject *tmp_locals_name_6;
                        PyObject *tmp_fromlist_name_6;
                        PyObject *tmp_level_name_6;
                        tmp_name_name_6 = const_str_digest_c606d455df1b0b1ff46033ccb0d515a0;
                        tmp_globals_name_6 = (PyObject *)moduledict_microcontroller$pin;
                        tmp_locals_name_6 = (PyObject *)moduledict_microcontroller$pin;
                        tmp_fromlist_name_6 = const_tuple_str_chr_42_tuple;
                        tmp_level_name_6 = const_int_0;
                        frame_81db6b78901a80dfcd5a8575f7b32979->m_frame.f_lineno = 16;
                        tmp_star_imported_4 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
                        if ( tmp_star_imported_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 16;

                            goto frame_exception_exit_1;
                        }
                        tmp_result = IMPORT_MODULE_STAR( module_microcontroller$pin, true, tmp_star_imported_4 );
                        Py_DECREF( tmp_star_imported_4 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 16;

                            goto frame_exception_exit_1;
                        }
                    }
                    goto branch_end_4;
                    branch_no_4:;
                    {
                        nuitka_bool tmp_condition_result_5;
                        PyObject *tmp_compexpr_left_5;
                        PyObject *tmp_compexpr_right_5;
                        PyObject *tmp_mvar_value_11;
                        PyObject *tmp_source_name_5;
                        PyObject *tmp_mvar_value_12;
                        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_chip_id );

                        if (unlikely( tmp_mvar_value_11 == NULL ))
                        {
                            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_chip_id );
                        }

                        if ( tmp_mvar_value_11 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "chip_id" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 17;

                            goto frame_exception_exit_1;
                        }

                        tmp_compexpr_left_5 = tmp_mvar_value_11;
                        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_ap_chip );

                        if (unlikely( tmp_mvar_value_12 == NULL ))
                        {
                            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ap_chip );
                        }

                        if ( tmp_mvar_value_12 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ap_chip" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 17;

                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_5 = tmp_mvar_value_12;
                        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_SUN8I );
                        if ( tmp_compexpr_right_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 17;

                            goto frame_exception_exit_1;
                        }
                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                        Py_DECREF( tmp_compexpr_right_5 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 17;

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
                            PyObject *tmp_star_imported_5;
                            PyObject *tmp_name_name_7;
                            PyObject *tmp_globals_name_7;
                            PyObject *tmp_locals_name_7;
                            PyObject *tmp_fromlist_name_7;
                            PyObject *tmp_level_name_7;
                            tmp_name_name_7 = const_str_digest_7b1b39b143d57c01cb563cf6e2abebeb;
                            tmp_globals_name_7 = (PyObject *)moduledict_microcontroller$pin;
                            tmp_locals_name_7 = (PyObject *)moduledict_microcontroller$pin;
                            tmp_fromlist_name_7 = const_tuple_str_chr_42_tuple;
                            tmp_level_name_7 = const_int_0;
                            frame_81db6b78901a80dfcd5a8575f7b32979->m_frame.f_lineno = 18;
                            tmp_star_imported_5 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
                            if ( tmp_star_imported_5 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 18;

                                goto frame_exception_exit_1;
                            }
                            tmp_result = IMPORT_MODULE_STAR( module_microcontroller$pin, true, tmp_star_imported_5 );
                            Py_DECREF( tmp_star_imported_5 );
                            if ( tmp_result == false )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 18;

                                goto frame_exception_exit_1;
                            }
                        }
                        goto branch_end_5;
                        branch_no_5:;
                        {
                            nuitka_bool tmp_condition_result_6;
                            PyObject *tmp_compexpr_left_6;
                            PyObject *tmp_compexpr_right_6;
                            PyObject *tmp_mvar_value_13;
                            PyObject *tmp_source_name_6;
                            PyObject *tmp_mvar_value_14;
                            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_chip_id );

                            if (unlikely( tmp_mvar_value_13 == NULL ))
                            {
                                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_chip_id );
                            }

                            if ( tmp_mvar_value_13 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "chip_id" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 19;

                                goto frame_exception_exit_1;
                            }

                            tmp_compexpr_left_6 = tmp_mvar_value_13;
                            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_ap_chip );

                            if (unlikely( tmp_mvar_value_14 == NULL ))
                            {
                                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ap_chip );
                            }

                            if ( tmp_mvar_value_14 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ap_chip" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 19;

                                goto frame_exception_exit_1;
                            }

                            tmp_source_name_6 = tmp_mvar_value_14;
                            tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_SAMA5 );
                            if ( tmp_compexpr_right_6 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 19;

                                goto frame_exception_exit_1;
                            }
                            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                            Py_DECREF( tmp_compexpr_right_6 );
                            if ( tmp_res == -1 )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 19;

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
                                PyObject *tmp_star_imported_6;
                                PyObject *tmp_name_name_8;
                                PyObject *tmp_globals_name_8;
                                PyObject *tmp_locals_name_8;
                                PyObject *tmp_fromlist_name_8;
                                PyObject *tmp_level_name_8;
                                tmp_name_name_8 = const_str_digest_cea0edda4a37f9b21d5f316ef41250c8;
                                tmp_globals_name_8 = (PyObject *)moduledict_microcontroller$pin;
                                tmp_locals_name_8 = (PyObject *)moduledict_microcontroller$pin;
                                tmp_fromlist_name_8 = const_tuple_str_chr_42_tuple;
                                tmp_level_name_8 = const_int_0;
                                frame_81db6b78901a80dfcd5a8575f7b32979->m_frame.f_lineno = 20;
                                tmp_star_imported_6 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
                                if ( tmp_star_imported_6 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 20;

                                    goto frame_exception_exit_1;
                                }
                                tmp_result = IMPORT_MODULE_STAR( module_microcontroller$pin, true, tmp_star_imported_6 );
                                Py_DECREF( tmp_star_imported_6 );
                                if ( tmp_result == false )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 20;

                                    goto frame_exception_exit_1;
                                }
                            }
                            goto branch_end_6;
                            branch_no_6:;
                            {
                                nuitka_bool tmp_condition_result_7;
                                PyObject *tmp_compexpr_left_7;
                                PyObject *tmp_compexpr_right_7;
                                PyObject *tmp_mvar_value_15;
                                PyObject *tmp_source_name_7;
                                PyObject *tmp_mvar_value_16;
                                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_chip_id );

                                if (unlikely( tmp_mvar_value_15 == NULL ))
                                {
                                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_chip_id );
                                }

                                if ( tmp_mvar_value_15 == NULL )
                                {

                                    exception_type = PyExc_NameError;
                                    Py_INCREF( exception_type );
                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "chip_id" );
                                    exception_tb = NULL;
                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                    CHAIN_EXCEPTION( exception_value );

                                    exception_lineno = 21;

                                    goto frame_exception_exit_1;
                                }

                                tmp_compexpr_left_7 = tmp_mvar_value_15;
                                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_ap_chip );

                                if (unlikely( tmp_mvar_value_16 == NULL ))
                                {
                                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ap_chip );
                                }

                                if ( tmp_mvar_value_16 == NULL )
                                {

                                    exception_type = PyExc_NameError;
                                    Py_INCREF( exception_type );
                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ap_chip" );
                                    exception_tb = NULL;
                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                    CHAIN_EXCEPTION( exception_value );

                                    exception_lineno = 21;

                                    goto frame_exception_exit_1;
                                }

                                tmp_source_name_7 = tmp_mvar_value_16;
                                tmp_compexpr_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_T210 );
                                if ( tmp_compexpr_right_7 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 21;

                                    goto frame_exception_exit_1;
                                }
                                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_7, tmp_compexpr_right_7 );
                                Py_DECREF( tmp_compexpr_right_7 );
                                if ( tmp_res == -1 )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 21;

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
                                    PyObject *tmp_star_imported_7;
                                    PyObject *tmp_name_name_9;
                                    PyObject *tmp_globals_name_9;
                                    PyObject *tmp_locals_name_9;
                                    PyObject *tmp_fromlist_name_9;
                                    PyObject *tmp_level_name_9;
                                    tmp_name_name_9 = const_str_digest_efdbb1146d6752472c0f8c671fd9deb5;
                                    tmp_globals_name_9 = (PyObject *)moduledict_microcontroller$pin;
                                    tmp_locals_name_9 = (PyObject *)moduledict_microcontroller$pin;
                                    tmp_fromlist_name_9 = const_tuple_str_chr_42_tuple;
                                    tmp_level_name_9 = const_int_0;
                                    frame_81db6b78901a80dfcd5a8575f7b32979->m_frame.f_lineno = 22;
                                    tmp_star_imported_7 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
                                    if ( tmp_star_imported_7 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 22;

                                        goto frame_exception_exit_1;
                                    }
                                    tmp_result = IMPORT_MODULE_STAR( module_microcontroller$pin, true, tmp_star_imported_7 );
                                    Py_DECREF( tmp_star_imported_7 );
                                    if ( tmp_result == false )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 22;

                                        goto frame_exception_exit_1;
                                    }
                                }
                                goto branch_end_7;
                                branch_no_7:;
                                {
                                    nuitka_bool tmp_condition_result_8;
                                    PyObject *tmp_compexpr_left_8;
                                    PyObject *tmp_compexpr_right_8;
                                    PyObject *tmp_mvar_value_17;
                                    PyObject *tmp_source_name_8;
                                    PyObject *tmp_mvar_value_18;
                                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_chip_id );

                                    if (unlikely( tmp_mvar_value_17 == NULL ))
                                    {
                                        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_chip_id );
                                    }

                                    if ( tmp_mvar_value_17 == NULL )
                                    {

                                        exception_type = PyExc_NameError;
                                        Py_INCREF( exception_type );
                                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "chip_id" );
                                        exception_tb = NULL;
                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                        CHAIN_EXCEPTION( exception_value );

                                        exception_lineno = 23;

                                        goto frame_exception_exit_1;
                                    }

                                    tmp_compexpr_left_8 = tmp_mvar_value_17;
                                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_ap_chip );

                                    if (unlikely( tmp_mvar_value_18 == NULL ))
                                    {
                                        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ap_chip );
                                    }

                                    if ( tmp_mvar_value_18 == NULL )
                                    {

                                        exception_type = PyExc_NameError;
                                        Py_INCREF( exception_type );
                                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ap_chip" );
                                        exception_tb = NULL;
                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                        CHAIN_EXCEPTION( exception_value );

                                        exception_lineno = 23;

                                        goto frame_exception_exit_1;
                                    }

                                    tmp_source_name_8 = tmp_mvar_value_18;
                                    tmp_compexpr_right_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_T186 );
                                    if ( tmp_compexpr_right_8 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 23;

                                        goto frame_exception_exit_1;
                                    }
                                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_8, tmp_compexpr_right_8 );
                                    Py_DECREF( tmp_compexpr_right_8 );
                                    if ( tmp_res == -1 )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 23;

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
                                        PyObject *tmp_star_imported_8;
                                        PyObject *tmp_name_name_10;
                                        PyObject *tmp_globals_name_10;
                                        PyObject *tmp_locals_name_10;
                                        PyObject *tmp_fromlist_name_10;
                                        PyObject *tmp_level_name_10;
                                        tmp_name_name_10 = const_str_digest_2924342b5bc89f7a19a02b6ab2742f1e;
                                        tmp_globals_name_10 = (PyObject *)moduledict_microcontroller$pin;
                                        tmp_locals_name_10 = (PyObject *)moduledict_microcontroller$pin;
                                        tmp_fromlist_name_10 = const_tuple_str_chr_42_tuple;
                                        tmp_level_name_10 = const_int_0;
                                        frame_81db6b78901a80dfcd5a8575f7b32979->m_frame.f_lineno = 24;
                                        tmp_star_imported_8 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
                                        if ( tmp_star_imported_8 == NULL )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                            exception_lineno = 24;

                                            goto frame_exception_exit_1;
                                        }
                                        tmp_result = IMPORT_MODULE_STAR( module_microcontroller$pin, true, tmp_star_imported_8 );
                                        Py_DECREF( tmp_star_imported_8 );
                                        if ( tmp_result == false )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                            exception_lineno = 24;

                                            goto frame_exception_exit_1;
                                        }
                                    }
                                    goto branch_end_8;
                                    branch_no_8:;
                                    {
                                        nuitka_bool tmp_condition_result_9;
                                        PyObject *tmp_compexpr_left_9;
                                        PyObject *tmp_compexpr_right_9;
                                        PyObject *tmp_mvar_value_19;
                                        PyObject *tmp_source_name_9;
                                        PyObject *tmp_mvar_value_20;
                                        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_chip_id );

                                        if (unlikely( tmp_mvar_value_19 == NULL ))
                                        {
                                            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_chip_id );
                                        }

                                        if ( tmp_mvar_value_19 == NULL )
                                        {

                                            exception_type = PyExc_NameError;
                                            Py_INCREF( exception_type );
                                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "chip_id" );
                                            exception_tb = NULL;
                                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                            CHAIN_EXCEPTION( exception_value );

                                            exception_lineno = 25;

                                            goto frame_exception_exit_1;
                                        }

                                        tmp_compexpr_left_9 = tmp_mvar_value_19;
                                        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_ap_chip );

                                        if (unlikely( tmp_mvar_value_20 == NULL ))
                                        {
                                            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ap_chip );
                                        }

                                        if ( tmp_mvar_value_20 == NULL )
                                        {

                                            exception_type = PyExc_NameError;
                                            Py_INCREF( exception_type );
                                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ap_chip" );
                                            exception_tb = NULL;
                                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                            CHAIN_EXCEPTION( exception_value );

                                            exception_lineno = 25;

                                            goto frame_exception_exit_1;
                                        }

                                        tmp_source_name_9 = tmp_mvar_value_20;
                                        tmp_compexpr_right_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_T194 );
                                        if ( tmp_compexpr_right_9 == NULL )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                            exception_lineno = 25;

                                            goto frame_exception_exit_1;
                                        }
                                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_9, tmp_compexpr_right_9 );
                                        Py_DECREF( tmp_compexpr_right_9 );
                                        if ( tmp_res == -1 )
                                        {
                                            assert( ERROR_OCCURRED() );

                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                            exception_lineno = 25;

                                            goto frame_exception_exit_1;
                                        }
                                        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
                                        {
                                            goto branch_yes_9;
                                        }
                                        else
                                        {
                                            goto branch_no_9;
                                        }
                                        branch_yes_9:;
                                        {
                                            PyObject *tmp_star_imported_9;
                                            PyObject *tmp_name_name_11;
                                            PyObject *tmp_globals_name_11;
                                            PyObject *tmp_locals_name_11;
                                            PyObject *tmp_fromlist_name_11;
                                            PyObject *tmp_level_name_11;
                                            tmp_name_name_11 = const_str_digest_d1aaf6d901a3f894393de994d52a5367;
                                            tmp_globals_name_11 = (PyObject *)moduledict_microcontroller$pin;
                                            tmp_locals_name_11 = (PyObject *)moduledict_microcontroller$pin;
                                            tmp_fromlist_name_11 = const_tuple_str_chr_42_tuple;
                                            tmp_level_name_11 = const_int_0;
                                            frame_81db6b78901a80dfcd5a8575f7b32979->m_frame.f_lineno = 26;
                                            tmp_star_imported_9 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
                                            if ( tmp_star_imported_9 == NULL )
                                            {
                                                assert( ERROR_OCCURRED() );

                                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                exception_lineno = 26;

                                                goto frame_exception_exit_1;
                                            }
                                            tmp_result = IMPORT_MODULE_STAR( module_microcontroller$pin, true, tmp_star_imported_9 );
                                            Py_DECREF( tmp_star_imported_9 );
                                            if ( tmp_result == false )
                                            {
                                                assert( ERROR_OCCURRED() );

                                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                exception_lineno = 26;

                                                goto frame_exception_exit_1;
                                            }
                                        }
                                        goto branch_end_9;
                                        branch_no_9:;
                                        {
                                            nuitka_bool tmp_condition_result_10;
                                            PyObject *tmp_compexpr_left_10;
                                            PyObject *tmp_compexpr_right_10;
                                            PyObject *tmp_mvar_value_21;
                                            PyObject *tmp_source_name_10;
                                            PyObject *tmp_mvar_value_22;
                                            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_chip_id );

                                            if (unlikely( tmp_mvar_value_21 == NULL ))
                                            {
                                                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_chip_id );
                                            }

                                            if ( tmp_mvar_value_21 == NULL )
                                            {

                                                exception_type = PyExc_NameError;
                                                Py_INCREF( exception_type );
                                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "chip_id" );
                                                exception_tb = NULL;
                                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                CHAIN_EXCEPTION( exception_value );

                                                exception_lineno = 27;

                                                goto frame_exception_exit_1;
                                            }

                                            tmp_compexpr_left_10 = tmp_mvar_value_21;
                                            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_ap_chip );

                                            if (unlikely( tmp_mvar_value_22 == NULL ))
                                            {
                                                tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ap_chip );
                                            }

                                            if ( tmp_mvar_value_22 == NULL )
                                            {

                                                exception_type = PyExc_NameError;
                                                Py_INCREF( exception_type );
                                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ap_chip" );
                                                exception_tb = NULL;
                                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                CHAIN_EXCEPTION( exception_value );

                                                exception_lineno = 27;

                                                goto frame_exception_exit_1;
                                            }

                                            tmp_source_name_10 = tmp_mvar_value_22;
                                            tmp_compexpr_right_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_S905 );
                                            if ( tmp_compexpr_right_10 == NULL )
                                            {
                                                assert( ERROR_OCCURRED() );

                                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                exception_lineno = 27;

                                                goto frame_exception_exit_1;
                                            }
                                            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_10, tmp_compexpr_right_10 );
                                            Py_DECREF( tmp_compexpr_right_10 );
                                            if ( tmp_res == -1 )
                                            {
                                                assert( ERROR_OCCURRED() );

                                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                exception_lineno = 27;

                                                goto frame_exception_exit_1;
                                            }
                                            tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                            if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
                                            {
                                                goto branch_yes_10;
                                            }
                                            else
                                            {
                                                goto branch_no_10;
                                            }
                                            branch_yes_10:;
                                            {
                                                PyObject *tmp_star_imported_10;
                                                PyObject *tmp_name_name_12;
                                                PyObject *tmp_globals_name_12;
                                                PyObject *tmp_locals_name_12;
                                                PyObject *tmp_fromlist_name_12;
                                                PyObject *tmp_level_name_12;
                                                tmp_name_name_12 = const_str_digest_840781f3bcbba24c0c9d94a22c7c54d4;
                                                tmp_globals_name_12 = (PyObject *)moduledict_microcontroller$pin;
                                                tmp_locals_name_12 = (PyObject *)moduledict_microcontroller$pin;
                                                tmp_fromlist_name_12 = const_tuple_str_chr_42_tuple;
                                                tmp_level_name_12 = const_int_0;
                                                frame_81db6b78901a80dfcd5a8575f7b32979->m_frame.f_lineno = 28;
                                                tmp_star_imported_10 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
                                                if ( tmp_star_imported_10 == NULL )
                                                {
                                                    assert( ERROR_OCCURRED() );

                                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                    exception_lineno = 28;

                                                    goto frame_exception_exit_1;
                                                }
                                                tmp_result = IMPORT_MODULE_STAR( module_microcontroller$pin, true, tmp_star_imported_10 );
                                                Py_DECREF( tmp_star_imported_10 );
                                                if ( tmp_result == false )
                                                {
                                                    assert( ERROR_OCCURRED() );

                                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                    exception_lineno = 28;

                                                    goto frame_exception_exit_1;
                                                }
                                            }
                                            goto branch_end_10;
                                            branch_no_10:;
                                            {
                                                nuitka_bool tmp_condition_result_11;
                                                PyObject *tmp_compexpr_left_11;
                                                PyObject *tmp_compexpr_right_11;
                                                PyObject *tmp_mvar_value_23;
                                                PyObject *tmp_source_name_11;
                                                PyObject *tmp_mvar_value_24;
                                                tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_chip_id );

                                                if (unlikely( tmp_mvar_value_23 == NULL ))
                                                {
                                                    tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_chip_id );
                                                }

                                                if ( tmp_mvar_value_23 == NULL )
                                                {

                                                    exception_type = PyExc_NameError;
                                                    Py_INCREF( exception_type );
                                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "chip_id" );
                                                    exception_tb = NULL;
                                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                    CHAIN_EXCEPTION( exception_value );

                                                    exception_lineno = 29;

                                                    goto frame_exception_exit_1;
                                                }

                                                tmp_compexpr_left_11 = tmp_mvar_value_23;
                                                tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_ap_chip );

                                                if (unlikely( tmp_mvar_value_24 == NULL ))
                                                {
                                                    tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ap_chip );
                                                }

                                                if ( tmp_mvar_value_24 == NULL )
                                                {

                                                    exception_type = PyExc_NameError;
                                                    Py_INCREF( exception_type );
                                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ap_chip" );
                                                    exception_tb = NULL;
                                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                    CHAIN_EXCEPTION( exception_value );

                                                    exception_lineno = 29;

                                                    goto frame_exception_exit_1;
                                                }

                                                tmp_source_name_11 = tmp_mvar_value_24;
                                                tmp_compexpr_right_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_APQ8016 );
                                                if ( tmp_compexpr_right_11 == NULL )
                                                {
                                                    assert( ERROR_OCCURRED() );

                                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                    exception_lineno = 29;

                                                    goto frame_exception_exit_1;
                                                }
                                                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_11, tmp_compexpr_right_11 );
                                                Py_DECREF( tmp_compexpr_right_11 );
                                                if ( tmp_res == -1 )
                                                {
                                                    assert( ERROR_OCCURRED() );

                                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                    exception_lineno = 29;

                                                    goto frame_exception_exit_1;
                                                }
                                                tmp_condition_result_11 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                                if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
                                                {
                                                    goto branch_yes_11;
                                                }
                                                else
                                                {
                                                    goto branch_no_11;
                                                }
                                                branch_yes_11:;
                                                {
                                                    PyObject *tmp_star_imported_11;
                                                    PyObject *tmp_name_name_13;
                                                    PyObject *tmp_globals_name_13;
                                                    PyObject *tmp_locals_name_13;
                                                    PyObject *tmp_fromlist_name_13;
                                                    PyObject *tmp_level_name_13;
                                                    tmp_name_name_13 = const_str_digest_0c1898fc1f2c6d20fef19765d7f4025d;
                                                    tmp_globals_name_13 = (PyObject *)moduledict_microcontroller$pin;
                                                    tmp_locals_name_13 = (PyObject *)moduledict_microcontroller$pin;
                                                    tmp_fromlist_name_13 = const_tuple_str_chr_42_tuple;
                                                    tmp_level_name_13 = const_int_0;
                                                    frame_81db6b78901a80dfcd5a8575f7b32979->m_frame.f_lineno = 30;
                                                    tmp_star_imported_11 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
                                                    if ( tmp_star_imported_11 == NULL )
                                                    {
                                                        assert( ERROR_OCCURRED() );

                                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                        exception_lineno = 30;

                                                        goto frame_exception_exit_1;
                                                    }
                                                    tmp_result = IMPORT_MODULE_STAR( module_microcontroller$pin, true, tmp_star_imported_11 );
                                                    Py_DECREF( tmp_star_imported_11 );
                                                    if ( tmp_result == false )
                                                    {
                                                        assert( ERROR_OCCURRED() );

                                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                        exception_lineno = 30;

                                                        goto frame_exception_exit_1;
                                                    }
                                                }
                                                goto branch_end_11;
                                                branch_no_11:;
                                                {
                                                    nuitka_bool tmp_condition_result_12;
                                                    PyObject *tmp_compexpr_left_12;
                                                    PyObject *tmp_compexpr_right_12;
                                                    PyObject *tmp_mvar_value_25;
                                                    PyObject *tmp_source_name_12;
                                                    PyObject *tmp_mvar_value_26;
                                                    tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_chip_id );

                                                    if (unlikely( tmp_mvar_value_25 == NULL ))
                                                    {
                                                        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_chip_id );
                                                    }

                                                    if ( tmp_mvar_value_25 == NULL )
                                                    {

                                                        exception_type = PyExc_NameError;
                                                        Py_INCREF( exception_type );
                                                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "chip_id" );
                                                        exception_tb = NULL;
                                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                        CHAIN_EXCEPTION( exception_value );

                                                        exception_lineno = 31;

                                                        goto frame_exception_exit_1;
                                                    }

                                                    tmp_compexpr_left_12 = tmp_mvar_value_25;
                                                    tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_ap_chip );

                                                    if (unlikely( tmp_mvar_value_26 == NULL ))
                                                    {
                                                        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ap_chip );
                                                    }

                                                    if ( tmp_mvar_value_26 == NULL )
                                                    {

                                                        exception_type = PyExc_NameError;
                                                        Py_INCREF( exception_type );
                                                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ap_chip" );
                                                        exception_tb = NULL;
                                                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                        CHAIN_EXCEPTION( exception_value );

                                                        exception_lineno = 31;

                                                        goto frame_exception_exit_1;
                                                    }

                                                    tmp_source_name_12 = tmp_mvar_value_26;
                                                    tmp_compexpr_right_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_IMX8MX );
                                                    if ( tmp_compexpr_right_12 == NULL )
                                                    {
                                                        assert( ERROR_OCCURRED() );

                                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                        exception_lineno = 31;

                                                        goto frame_exception_exit_1;
                                                    }
                                                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_12, tmp_compexpr_right_12 );
                                                    Py_DECREF( tmp_compexpr_right_12 );
                                                    if ( tmp_res == -1 )
                                                    {
                                                        assert( ERROR_OCCURRED() );

                                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                        exception_lineno = 31;

                                                        goto frame_exception_exit_1;
                                                    }
                                                    tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                                    if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
                                                    {
                                                        goto branch_yes_12;
                                                    }
                                                    else
                                                    {
                                                        goto branch_no_12;
                                                    }
                                                    branch_yes_12:;
                                                    {
                                                        PyObject *tmp_star_imported_12;
                                                        PyObject *tmp_name_name_14;
                                                        PyObject *tmp_globals_name_14;
                                                        PyObject *tmp_locals_name_14;
                                                        PyObject *tmp_fromlist_name_14;
                                                        PyObject *tmp_level_name_14;
                                                        tmp_name_name_14 = const_str_digest_d0fff785ff78971c897b548f07ba60ad;
                                                        tmp_globals_name_14 = (PyObject *)moduledict_microcontroller$pin;
                                                        tmp_locals_name_14 = (PyObject *)moduledict_microcontroller$pin;
                                                        tmp_fromlist_name_14 = const_tuple_str_chr_42_tuple;
                                                        tmp_level_name_14 = const_int_0;
                                                        frame_81db6b78901a80dfcd5a8575f7b32979->m_frame.f_lineno = 32;
                                                        tmp_star_imported_12 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
                                                        if ( tmp_star_imported_12 == NULL )
                                                        {
                                                            assert( ERROR_OCCURRED() );

                                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                            exception_lineno = 32;

                                                            goto frame_exception_exit_1;
                                                        }
                                                        tmp_result = IMPORT_MODULE_STAR( module_microcontroller$pin, true, tmp_star_imported_12 );
                                                        Py_DECREF( tmp_star_imported_12 );
                                                        if ( tmp_result == false )
                                                        {
                                                            assert( ERROR_OCCURRED() );

                                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                            exception_lineno = 32;

                                                            goto frame_exception_exit_1;
                                                        }
                                                    }
                                                    goto branch_end_12;
                                                    branch_no_12:;
                                                    {
                                                        PyObject *tmp_raise_type_1;
                                                        PyObject *tmp_called_name_1;
                                                        PyObject *tmp_mvar_value_27;
                                                        PyObject *tmp_args_element_name_1;
                                                        PyObject *tmp_args_element_name_2;
                                                        PyObject *tmp_mvar_value_28;
                                                        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_NotImplementedError );

                                                        if (unlikely( tmp_mvar_value_27 == NULL ))
                                                        {
                                                            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NotImplementedError );
                                                        }

                                                        if ( tmp_mvar_value_27 == NULL )
                                                        {

                                                            exception_type = PyExc_NameError;
                                                            Py_INCREF( exception_type );
                                                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NotImplementedError" );
                                                            exception_tb = NULL;
                                                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                            CHAIN_EXCEPTION( exception_value );

                                                            exception_lineno = 34;

                                                            goto frame_exception_exit_1;
                                                        }

                                                        tmp_called_name_1 = tmp_mvar_value_27;
                                                        tmp_args_element_name_1 = const_str_digest_bbf45b9ef66d2a46daae695f7a0909ca;
                                                        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain_chip_id );

                                                        if (unlikely( tmp_mvar_value_28 == NULL ))
                                                        {
                                                            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_chip_id );
                                                        }

                                                        if ( tmp_mvar_value_28 == NULL )
                                                        {

                                                            exception_type = PyExc_NameError;
                                                            Py_INCREF( exception_type );
                                                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "chip_id" );
                                                            exception_tb = NULL;
                                                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                                            CHAIN_EXCEPTION( exception_value );

                                                            exception_lineno = 34;

                                                            goto frame_exception_exit_1;
                                                        }

                                                        tmp_args_element_name_2 = tmp_mvar_value_28;
                                                        frame_81db6b78901a80dfcd5a8575f7b32979->m_frame.f_lineno = 34;
                                                        {
                                                            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                                                            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
                                                        }

                                                        if ( tmp_raise_type_1 == NULL )
                                                        {
                                                            assert( ERROR_OCCURRED() );

                                                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                                            exception_lineno = 34;

                                                            goto frame_exception_exit_1;
                                                        }
                                                        exception_type = tmp_raise_type_1;
                                                        exception_lineno = 34;
                                                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );

                                                        goto frame_exception_exit_1;
                                                    }
                                                    branch_end_12:;
                                                }
                                                branch_end_11:;
                                            }
                                            branch_end_10:;
                                        }
                                        branch_end_9:;
                                    }
                                    branch_end_8:;
                                }
                                branch_end_7:;
                            }
                            branch_end_6:;
                        }
                        branch_end_5:;
                    }
                    branch_end_4:;
                }
                branch_end_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_81db6b78901a80dfcd5a8575f7b32979 );
#endif
    popFrameStack();

    assertFrameObject( frame_81db6b78901a80dfcd5a8575f7b32979 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_81db6b78901a80dfcd5a8575f7b32979 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_81db6b78901a80dfcd5a8575f7b32979, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_81db6b78901a80dfcd5a8575f7b32979->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_81db6b78901a80dfcd5a8575f7b32979, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_microcontroller$pin, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_microcontroller$pin );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
