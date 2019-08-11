/* Generated code for Python module 'adafruit_blinka.microcontroller.sama5.pin'
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

/* The "_module_adafruit_blinka$microcontroller$sama5$pin" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_adafruit_blinka$microcontroller$sama5$pin;
PyDictObject *moduledict_adafruit_blinka$microcontroller$sama5$pin;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_TWI0_SCL;
extern PyObject *const_str_digest_aeadebb446eb9697b49f22d96463f59a;
extern PyObject *const_tuple_int_pos_14_tuple;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_PD23;
static PyObject *const_tuple_int_pos_119_tuple;
static PyObject *const_int_pos_120;
static PyObject *const_str_plain_PD22;
extern PyObject *const_int_pos_119;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_PA14;
static PyObject *const_tuple_int_pos_33_tuple;
extern PyObject *const_int_pos_39;
extern PyObject *const_str_plain_Pin;
static PyObject *const_str_plain_AD5;
extern PyObject *const_str_plain_PA16;
static PyObject *const_tuple_int_pos_37_tuple;
extern PyObject *const_int_pos_117;
extern PyObject *const_str_plain_UART1_RX;
static PyObject *const_tuple_int_pos_118_tuple;
extern PyObject *const_int_pos_16;
extern PyObject *const_int_pos_33;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_pos_32;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_PB3;
extern PyObject *const_int_pos_99;
static PyObject *const_str_plain_PD20;
static PyObject *const_str_plain_PB0;
extern PyObject *const_str_digest_cea0edda4a37f9b21d5f316ef41250c8;
static PyObject *const_tuple_int_pos_99_tuple;
static PyObject *const_tuple_int_pos_127_tuple;
static PyObject *const_str_plain_AD3;
static PyObject *const_str_plain_PD21;
extern PyObject *const_int_pos_115;
static PyObject *const_str_digest_254fc20c37ec96ad647d43c07d69ea0a;
extern PyObject *const_int_pos_63;
extern PyObject *const_tuple_int_0_int_pos_2_tuple;
extern PyObject *const_tuple_int_pos_16_tuple;
extern PyObject *const_str_plain_SPI0_MISO;
extern PyObject *const_int_pos_98;
static PyObject *const_tuple_int_pos_109_tuple;
extern PyObject *const_str_plain_SPI0_SCLK;
static PyObject *const_str_plain_PD31;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_int_pos_120_tuple;
static PyObject *const_tuple_int_pos_98_tuple;
extern PyObject *const_str_plain_UART1_TX;
extern PyObject *const_tuple_int_pos_116_tuple;
extern PyObject *const_int_pos_14;
static PyObject *const_str_plain_PB1;
extern PyObject *const_str_plain_PWM2;
extern PyObject *const_int_pos_109;
static PyObject *const_str_plain_PB5;
extern PyObject *const_str_plain_False;
extern PyObject *const_tuple_int_0_int_pos_3_tuple;
static PyObject *const_str_plain_AD1;
extern PyObject *const_str_plain_i2cPorts;
extern PyObject *const_str_plain_pwmOuts;
extern PyObject *const_str_plain_PWM1;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_PWM3;
extern PyObject *const_int_pos_15;
extern PyObject *const_tuple_int_pos_64_tuple;
extern PyObject *const_tuple_int_0_int_pos_1_tuple;
static PyObject *const_str_plain_PD3;
extern PyObject *const_int_pos_118;
extern PyObject *const_int_pos_116;
static PyObject *const_str_plain_PD19;
extern PyObject *const_int_pos_37;
static PyObject *const_str_plain_PWML1;
extern PyObject *const_str_plain_origin;
extern PyObject *const_tuple_int_pos_32_tuple;
static PyObject *const_tuple_int_pos_115_tuple;
static PyObject *const_str_plain_AD4;
extern PyObject *const_str_plain_PC0;
extern PyObject *const_int_pos_64;
extern PyObject *const_str_plain_SPI0_MOSI;
static PyObject *const_str_plain_AD2;
static PyObject *const_tuple_int_pos_35_tuple;
static PyObject *const_str_plain_PD2;
static PyObject *const_tuple_int_pos_117_tuple;
static PyObject *const_str_digest_59a060d73d86bf0a414c99b47b8a6d25;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_int_pos_127;
extern PyObject *const_str_plain_TWI0_SDA;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_PA15;
static PyObject *const_str_plain_PD13;
extern PyObject *const_tuple_str_plain_Pin_tuple;
static PyObject *const_tuple_int_pos_63_tuple;
static PyObject *const_tuple_int_pos_39_tuple;
extern PyObject *const_int_pos_3;
static PyObject *const_str_plain_PD24;
extern PyObject *const_str_plain_uartPorts;
static PyObject *const_str_plain_PB7;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_tuple_int_pos_15_tuple;
extern PyObject *const_int_pos_35;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_PB31;
extern PyObject *const_str_plain_spiPorts;
static PyObject *const_str_plain_AD0;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_PD23 = UNSTREAM_STRING_ASCII( &constant_bin[ 11478 ], 4, 1 );
    const_tuple_int_pos_119_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_119_tuple, 0, const_int_pos_119 ); Py_INCREF( const_int_pos_119 );
    const_int_pos_120 = PyLong_FromUnsignedLong( 120ul );
    const_str_plain_PD22 = UNSTREAM_STRING_ASCII( &constant_bin[ 11482 ], 4, 1 );
    const_tuple_int_pos_33_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_33_tuple, 0, const_int_pos_33 ); Py_INCREF( const_int_pos_33 );
    const_str_plain_AD5 = UNSTREAM_STRING_ASCII( &constant_bin[ 11486 ], 3, 1 );
    const_tuple_int_pos_37_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_37_tuple, 0, const_int_pos_37 ); Py_INCREF( const_int_pos_37 );
    const_tuple_int_pos_118_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_118_tuple, 0, const_int_pos_118 ); Py_INCREF( const_int_pos_118 );
    const_str_plain_PB3 = UNSTREAM_STRING_ASCII( &constant_bin[ 11489 ], 3, 1 );
    const_str_plain_PD20 = UNSTREAM_STRING_ASCII( &constant_bin[ 11492 ], 4, 1 );
    const_str_plain_PB0 = UNSTREAM_STRING_ASCII( &constant_bin[ 11496 ], 3, 1 );
    const_tuple_int_pos_99_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_99_tuple, 0, const_int_pos_99 ); Py_INCREF( const_int_pos_99 );
    const_tuple_int_pos_127_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_127_tuple, 0, const_int_pos_127 ); Py_INCREF( const_int_pos_127 );
    const_str_plain_AD3 = UNSTREAM_STRING_ASCII( &constant_bin[ 11499 ], 3, 1 );
    const_str_plain_PD21 = UNSTREAM_STRING_ASCII( &constant_bin[ 11502 ], 4, 1 );
    const_str_digest_254fc20c37ec96ad647d43c07d69ea0a = UNSTREAM_STRING_ASCII( &constant_bin[ 11506 ], 50, 0 );
    const_tuple_int_pos_109_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_109_tuple, 0, const_int_pos_109 ); Py_INCREF( const_int_pos_109 );
    const_str_plain_PD31 = UNSTREAM_STRING_ASCII( &constant_bin[ 11556 ], 4, 1 );
    const_tuple_int_pos_120_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_120_tuple, 0, const_int_pos_120 ); Py_INCREF( const_int_pos_120 );
    const_tuple_int_pos_98_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_98_tuple, 0, const_int_pos_98 ); Py_INCREF( const_int_pos_98 );
    const_str_plain_PB1 = UNSTREAM_STRING_ASCII( &constant_bin[ 11560 ], 3, 1 );
    const_str_plain_PB5 = UNSTREAM_STRING_ASCII( &constant_bin[ 11563 ], 3, 1 );
    const_str_plain_AD1 = UNSTREAM_STRING_ASCII( &constant_bin[ 11566 ], 3, 1 );
    const_str_plain_PD3 = UNSTREAM_STRING_ASCII( &constant_bin[ 11556 ], 3, 1 );
    const_str_plain_PD19 = UNSTREAM_STRING_ASCII( &constant_bin[ 11569 ], 4, 1 );
    const_str_plain_PWML1 = UNSTREAM_STRING_ASCII( &constant_bin[ 11573 ], 5, 1 );
    const_tuple_int_pos_115_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_115_tuple, 0, const_int_pos_115 ); Py_INCREF( const_int_pos_115 );
    const_str_plain_AD4 = UNSTREAM_STRING_ASCII( &constant_bin[ 11578 ], 3, 1 );
    const_str_plain_AD2 = UNSTREAM_STRING_ASCII( &constant_bin[ 11581 ], 3, 1 );
    const_tuple_int_pos_35_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_35_tuple, 0, const_int_pos_35 ); Py_INCREF( const_int_pos_35 );
    const_str_plain_PD2 = UNSTREAM_STRING_ASCII( &constant_bin[ 11478 ], 3, 1 );
    const_tuple_int_pos_117_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_117_tuple, 0, const_int_pos_117 ); Py_INCREF( const_int_pos_117 );
    const_str_digest_59a060d73d86bf0a414c99b47b8a6d25 = UNSTREAM_STRING_ASCII( &constant_bin[ 11584 ], 44, 0 );
    const_str_plain_PD13 = UNSTREAM_STRING_ASCII( &constant_bin[ 11628 ], 4, 1 );
    const_tuple_int_pos_63_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_63_tuple, 0, const_int_pos_63 ); Py_INCREF( const_int_pos_63 );
    const_tuple_int_pos_39_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_39_tuple, 0, const_int_pos_39 ); Py_INCREF( const_int_pos_39 );
    const_str_plain_PD24 = UNSTREAM_STRING_ASCII( &constant_bin[ 11632 ], 4, 1 );
    const_str_plain_PB7 = UNSTREAM_STRING_ASCII( &constant_bin[ 11636 ], 3, 1 );
    const_str_plain_PB31 = UNSTREAM_STRING_ASCII( &constant_bin[ 11639 ], 4, 1 );
    const_str_plain_AD0 = UNSTREAM_STRING_ASCII( &constant_bin[ 11643 ], 3, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_adafruit_blinka$microcontroller$sama5$pin( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9881c9e7647cdb57f52cb9e1cc97dab4;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_59a060d73d86bf0a414c99b47b8a6d25 );
    codeobj_9881c9e7647cdb57f52cb9e1cc97dab4 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_254fc20c37ec96ad647d43c07d69ea0a, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_adafruit_blinka$microcontroller$sama5$pin =
{
    PyModuleDef_HEAD_INIT,
    "adafruit_blinka.microcontroller.sama5.pin",
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

MOD_INIT_DECL( adafruit_blinka$microcontroller$sama5$pin )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_adafruit_blinka$microcontroller$sama5$pin );
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
    puts("adafruit_blinka.microcontroller.sama5.pin: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("adafruit_blinka.microcontroller.sama5.pin: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("adafruit_blinka.microcontroller.sama5.pin: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initadafruit_blinka$microcontroller$sama5$pin" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_adafruit_blinka$microcontroller$sama5$pin = Py_InitModule4(
        "adafruit_blinka.microcontroller.sama5.pin",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_adafruit_blinka$microcontroller$sama5$pin = PyModule_Create( &mdef_adafruit_blinka$microcontroller$sama5$pin );
#endif

    moduledict_adafruit_blinka$microcontroller$sama5$pin = MODULE_DICT( module_adafruit_blinka$microcontroller$sama5$pin );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_adafruit_blinka$microcontroller$sama5$pin,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_adafruit_blinka$microcontroller$sama5$pin,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_adafruit_blinka$microcontroller$sama5$pin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_adafruit_blinka$microcontroller$sama5$pin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_adafruit_blinka$microcontroller$sama5$pin );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_cea0edda4a37f9b21d5f316ef41250c8, module_adafruit_blinka$microcontroller$sama5$pin );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_9881c9e7647cdb57f52cb9e1cc97dab4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_9881c9e7647cdb57f52cb9e1cc97dab4 = MAKE_MODULE_FRAME( codeobj_9881c9e7647cdb57f52cb9e1cc97dab4, module_adafruit_blinka$microcontroller$sama5$pin );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_9881c9e7647cdb57f52cb9e1cc97dab4 );
    assert( Py_REFCNT( frame_9881c9e7647cdb57f52cb9e1cc97dab4 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_aeadebb446eb9697b49f22d96463f59a;
        tmp_globals_name_1 = (PyObject *)moduledict_adafruit_blinka$microcontroller$sama5$pin;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_Pin_tuple;
        tmp_level_name_1 = const_int_0;
        frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Pin );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_Pin, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_called_name_1 = tmp_mvar_value_3;
        frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame.f_lineno = 3;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_int_pos_119_tuple, 0 ) );

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PD23, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PD23 );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PD23 );
        }

        CHECK_OBJECT( tmp_mvar_value_4 );
        tmp_assign_source_6 = tmp_mvar_value_4;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_AD4, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_Pin );

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

            exception_lineno = 5;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_5;
        frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame.f_lineno = 5;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_int_pos_117_tuple, 0 ) );

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PD21, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PD21 );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PD21 );
        }

        CHECK_OBJECT( tmp_mvar_value_6 );
        tmp_assign_source_8 = tmp_mvar_value_6;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_AD2, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_Pin );

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

            exception_lineno = 7;

            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_7;
        frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame.f_lineno = 7;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_int_pos_116_tuple, 0 ) );

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PD20, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PD20 );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PD20 );
        }

        CHECK_OBJECT( tmp_mvar_value_8 );
        tmp_assign_source_10 = tmp_mvar_value_8;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_AD1, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_Pin );

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

            exception_lineno = 9;

            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_9;
        frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame.f_lineno = 9;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_int_pos_120_tuple, 0 ) );

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PD24, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PD24 );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PD24 );
        }

        CHECK_OBJECT( tmp_mvar_value_10 );
        tmp_assign_source_12 = tmp_mvar_value_10;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_AD5, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_Pin );

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

            exception_lineno = 11;

            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_11;
        frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame.f_lineno = 11;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_int_pos_118_tuple, 0 ) );

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PD22, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_mvar_value_12;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PD22 );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PD22 );
        }

        CHECK_OBJECT( tmp_mvar_value_12 );
        tmp_assign_source_14 = tmp_mvar_value_12;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_AD3, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_13;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_Pin );

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

            exception_lineno = 13;

            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_13;
        frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame.f_lineno = 13;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_int_pos_115_tuple, 0 ) );

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PD19, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_mvar_value_14;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PD19 );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PD19 );
        }

        CHECK_OBJECT( tmp_mvar_value_14 );
        tmp_assign_source_16 = tmp_mvar_value_14;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_AD0, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_15;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_15 == NULL )
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

        tmp_called_name_7 = tmp_mvar_value_15;
        frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame.f_lineno = 15;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_int_pos_14_tuple, 0 ) );

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PA14, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_mvar_value_16;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PA14 );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PA14 );
        }

        CHECK_OBJECT( tmp_mvar_value_16 );
        tmp_assign_source_18 = tmp_mvar_value_16;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_SPI0_SCLK, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_17;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_17;
        frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame.f_lineno = 17;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_int_pos_15_tuple, 0 ) );

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PA15, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_mvar_value_18;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PA15 );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PA15 );
        }

        CHECK_OBJECT( tmp_mvar_value_18 );
        tmp_assign_source_20 = tmp_mvar_value_18;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_SPI0_MOSI, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_19;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_19;
        frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame.f_lineno = 19;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_int_pos_16_tuple, 0 ) );

        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PA16, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_mvar_value_20;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PA16 );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PA16 );
        }

        CHECK_OBJECT( tmp_mvar_value_20 );
        tmp_assign_source_22 = tmp_mvar_value_20;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_SPI0_MISO, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_21;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }

        tmp_called_name_10 = tmp_mvar_value_21;
        frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame.f_lineno = 21;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, &PyTuple_GET_ITEM( const_tuple_int_pos_98_tuple, 0 ) );

        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PD2, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_mvar_value_22;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PD2 );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PD2 );
        }

        CHECK_OBJECT( tmp_mvar_value_22 );
        tmp_assign_source_24 = tmp_mvar_value_22;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_UART1_RX, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_23;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_23;
        frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame.f_lineno = 23;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, &PyTuple_GET_ITEM( const_tuple_int_pos_99_tuple, 0 ) );

        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PD3, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_mvar_value_24;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PD3 );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PD3 );
        }

        CHECK_OBJECT( tmp_mvar_value_24 );
        tmp_assign_source_26 = tmp_mvar_value_24;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_UART1_TX, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_25;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }

        tmp_called_name_12 = tmp_mvar_value_25;
        frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame.f_lineno = 26;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, &PyTuple_GET_ITEM( const_tuple_int_pos_109_tuple, 0 ) );

        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PD13, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_26;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_26 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 27;

            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_26;
        frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame.f_lineno = 27;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, &PyTuple_GET_ITEM( const_tuple_int_pos_127_tuple, 0 ) );

        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PD31, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_14;
        PyObject *tmp_mvar_value_27;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 28;

            goto frame_exception_exit_1;
        }

        tmp_called_name_14 = tmp_mvar_value_27;
        frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame.f_lineno = 28;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, &PyTuple_GET_ITEM( const_tuple_int_pos_32_tuple, 0 ) );

        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PB0, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_mvar_value_28;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PB0 );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PB0 );
        }

        CHECK_OBJECT( tmp_mvar_value_28 );
        tmp_assign_source_30 = tmp_mvar_value_28;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PWM1, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_name_15;
        PyObject *tmp_mvar_value_29;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }

        tmp_called_name_15 = tmp_mvar_value_29;
        frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame.f_lineno = 30;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, &PyTuple_GET_ITEM( const_tuple_int_pos_39_tuple, 0 ) );

        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PB7, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_mvar_value_30;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PB7 );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PB7 );
        }

        CHECK_OBJECT( tmp_mvar_value_30 );
        tmp_assign_source_32 = tmp_mvar_value_30;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PWM3, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_name_16;
        PyObject *tmp_mvar_value_31;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_31 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }

        tmp_called_name_16 = tmp_mvar_value_31;
        frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame.f_lineno = 32;
        tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, &PyTuple_GET_ITEM( const_tuple_int_pos_33_tuple, 0 ) );

        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PB1, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_mvar_value_32;
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PB1 );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PB1 );
        }

        CHECK_OBJECT( tmp_mvar_value_32 );
        tmp_assign_source_34 = tmp_mvar_value_32;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PWML1, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_name_17;
        PyObject *tmp_mvar_value_33;
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_33 == NULL ))
        {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_33 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }

        tmp_called_name_17 = tmp_mvar_value_33;
        frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame.f_lineno = 34;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, &PyTuple_GET_ITEM( const_tuple_int_pos_37_tuple, 0 ) );

        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PB5, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_mvar_value_34;
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PB5 );

        if (unlikely( tmp_mvar_value_34 == NULL ))
        {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PB5 );
        }

        CHECK_OBJECT( tmp_mvar_value_34 );
        tmp_assign_source_36 = tmp_mvar_value_34;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PWM2, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_18;
        PyObject *tmp_mvar_value_35;
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_35 == NULL ))
        {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_35 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }

        tmp_called_name_18 = tmp_mvar_value_35;
        frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame.f_lineno = 36;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, &PyTuple_GET_ITEM( const_tuple_int_pos_35_tuple, 0 ) );

        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PB3, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_name_19;
        PyObject *tmp_mvar_value_36;
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_36 == NULL ))
        {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_36 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }

        tmp_called_name_19 = tmp_mvar_value_36;
        frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame.f_lineno = 37;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, &PyTuple_GET_ITEM( const_tuple_int_pos_64_tuple, 0 ) );

        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PC0, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_mvar_value_37;
        tmp_mvar_value_37 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PC0 );

        if (unlikely( tmp_mvar_value_37 == NULL ))
        {
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PC0 );
        }

        CHECK_OBJECT( tmp_mvar_value_37 );
        tmp_assign_source_39 = tmp_mvar_value_37;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_TWI0_SCL, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_name_20;
        PyObject *tmp_mvar_value_38;
        tmp_mvar_value_38 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_Pin );

        if (unlikely( tmp_mvar_value_38 == NULL ))
        {
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Pin );
        }

        if ( tmp_mvar_value_38 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Pin" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }

        tmp_called_name_20 = tmp_mvar_value_38;
        frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame.f_lineno = 39;
        tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, &PyTuple_GET_ITEM( const_tuple_int_pos_63_tuple, 0 ) );

        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PB31, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_mvar_value_39;
        tmp_mvar_value_39 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PB31 );

        if (unlikely( tmp_mvar_value_39 == NULL ))
        {
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PB31 );
        }

        CHECK_OBJECT( tmp_mvar_value_39 );
        tmp_assign_source_41 = tmp_mvar_value_39;
        UPDATE_STRING_DICT0( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_TWI0_SDA, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_40;
        PyObject *tmp_mvar_value_41;
        tmp_tuple_element_2 = const_int_0;
        tmp_tuple_element_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        tmp_mvar_value_40 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_TWI0_SCL );

        if (unlikely( tmp_mvar_value_40 == NULL ))
        {
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TWI0_SCL );
        }

        if ( tmp_mvar_value_40 == NULL )
        {
            Py_DECREF( tmp_tuple_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TWI0_SCL" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_40;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        tmp_mvar_value_41 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_TWI0_SDA );

        if (unlikely( tmp_mvar_value_41 == NULL ))
        {
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TWI0_SDA );
        }

        CHECK_OBJECT( tmp_mvar_value_41 );
        tmp_tuple_element_2 = tmp_mvar_value_41;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 2, tmp_tuple_element_2 );
        tmp_assign_source_42 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_42, 0, tmp_tuple_element_1 );
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_i2cPorts, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_42;
        PyObject *tmp_mvar_value_43;
        PyObject *tmp_mvar_value_44;
        tmp_tuple_element_4 = const_int_0;
        tmp_tuple_element_3 = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_tuple_element_3, 0, tmp_tuple_element_4 );
        tmp_mvar_value_42 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_SPI0_SCLK );

        if (unlikely( tmp_mvar_value_42 == NULL ))
        {
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPI0_SCLK );
        }

        if ( tmp_mvar_value_42 == NULL )
        {
            Py_DECREF( tmp_tuple_element_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SPI0_SCLK" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_4 = tmp_mvar_value_42;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_tuple_element_3, 1, tmp_tuple_element_4 );
        tmp_mvar_value_43 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_SPI0_MOSI );

        if (unlikely( tmp_mvar_value_43 == NULL ))
        {
            tmp_mvar_value_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPI0_MOSI );
        }

        if ( tmp_mvar_value_43 == NULL )
        {
            Py_DECREF( tmp_tuple_element_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SPI0_MOSI" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_4 = tmp_mvar_value_43;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_tuple_element_3, 2, tmp_tuple_element_4 );
        tmp_mvar_value_44 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_SPI0_MISO );

        if (unlikely( tmp_mvar_value_44 == NULL ))
        {
            tmp_mvar_value_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPI0_MISO );
        }

        if ( tmp_mvar_value_44 == NULL )
        {
            Py_DECREF( tmp_tuple_element_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SPI0_MISO" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_4 = tmp_mvar_value_44;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_tuple_element_3, 3, tmp_tuple_element_4 );
        tmp_assign_source_43 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_43, 0, tmp_tuple_element_3 );
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_spiPorts, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_mvar_value_45;
        PyObject *tmp_mvar_value_46;
        tmp_tuple_element_6 = const_int_pos_1;
        tmp_tuple_element_5 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_tuple_element_5, 0, tmp_tuple_element_6 );
        tmp_mvar_value_45 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_UART1_TX );

        if (unlikely( tmp_mvar_value_45 == NULL ))
        {
            tmp_mvar_value_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UART1_TX );
        }

        if ( tmp_mvar_value_45 == NULL )
        {
            Py_DECREF( tmp_tuple_element_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UART1_TX" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_6 = tmp_mvar_value_45;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_tuple_element_5, 1, tmp_tuple_element_6 );
        tmp_mvar_value_46 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_UART1_RX );

        if (unlikely( tmp_mvar_value_46 == NULL ))
        {
            tmp_mvar_value_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UART1_RX );
        }

        if ( tmp_mvar_value_46 == NULL )
        {
            Py_DECREF( tmp_tuple_element_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UART1_RX" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_6 = tmp_mvar_value_46;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_tuple_element_5, 2, tmp_tuple_element_6 );
        tmp_assign_source_44 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_44, 0, tmp_tuple_element_5 );
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_uartPorts, tmp_assign_source_44 );
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_mvar_value_47;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_mvar_value_48;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_mvar_value_49;
        tmp_tuple_element_8 = const_tuple_int_0_int_pos_1_tuple;
        tmp_tuple_element_7 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_tuple_element_7, 0, tmp_tuple_element_8 );
        tmp_mvar_value_47 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PWM1 );

        if (unlikely( tmp_mvar_value_47 == NULL ))
        {
            tmp_mvar_value_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PWM1 );
        }

        if ( tmp_mvar_value_47 == NULL )
        {
            Py_DECREF( tmp_tuple_element_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PWM1" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_8 = tmp_mvar_value_47;
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_tuple_element_7, 1, tmp_tuple_element_8 );
        tmp_assign_source_45 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_assign_source_45, 0, tmp_tuple_element_7 );
        tmp_tuple_element_9 = const_tuple_int_0_int_pos_2_tuple;
        tmp_tuple_element_7 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_tuple_element_7, 0, tmp_tuple_element_9 );
        tmp_mvar_value_48 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PWM2 );

        if (unlikely( tmp_mvar_value_48 == NULL ))
        {
            tmp_mvar_value_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PWM2 );
        }

        if ( tmp_mvar_value_48 == NULL )
        {
            Py_DECREF( tmp_assign_source_45 );
            Py_DECREF( tmp_tuple_element_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PWM2" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_9 = tmp_mvar_value_48;
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_tuple_element_7, 1, tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_assign_source_45, 1, tmp_tuple_element_7 );
        tmp_tuple_element_10 = const_tuple_int_0_int_pos_3_tuple;
        tmp_tuple_element_7 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_tuple_element_7, 0, tmp_tuple_element_10 );
        tmp_mvar_value_49 = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_PWM3 );

        if (unlikely( tmp_mvar_value_49 == NULL ))
        {
            tmp_mvar_value_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PWM3 );
        }

        if ( tmp_mvar_value_49 == NULL )
        {
            Py_DECREF( tmp_assign_source_45 );
            Py_DECREF( tmp_tuple_element_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PWM3" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_10 = tmp_mvar_value_49;
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_tuple_element_7, 1, tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_assign_source_45, 2, tmp_tuple_element_7 );
        UPDATE_STRING_DICT1( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain_pwmOuts, tmp_assign_source_45 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9881c9e7647cdb57f52cb9e1cc97dab4 );
#endif
    popFrameStack();

    assertFrameObject( frame_9881c9e7647cdb57f52cb9e1cc97dab4 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9881c9e7647cdb57f52cb9e1cc97dab4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9881c9e7647cdb57f52cb9e1cc97dab4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9881c9e7647cdb57f52cb9e1cc97dab4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9881c9e7647cdb57f52cb9e1cc97dab4, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_adafruit_blinka$microcontroller$sama5$pin, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_adafruit_blinka$microcontroller$sama5$pin );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
