// This file contains helper functions that are automatically created from
// templates.

#include "nuitka/prelude.h"

extern PyObject *callPythonFunction( PyObject *func, PyObject **args, int count );


PyObject *CALL_FUNCTION_WITH_ARGS1( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 1 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 1; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 1 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 1 * sizeof(PyObject *) );
            memcpy( python_pars + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 1 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 1 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 1; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 1 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 1 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 1 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 1 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (1 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 1 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (1 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 1 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 1, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 1 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            1
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 1 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS2( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 2 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 2; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 2 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 2 * sizeof(PyObject *) );
            memcpy( python_pars + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 2 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 2 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 2; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 2 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 2 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 2 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 2 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (2 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 2 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (2 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 2 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 2, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 2 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            2
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 2 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS3( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 3 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 3; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 3 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 3 * sizeof(PyObject *) );
            memcpy( python_pars + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 3 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 3 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 3; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 3 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 3 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 3 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 3 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (3 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 3 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (3 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 3 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 3, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 3 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            3
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 3 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS4( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 4; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 4 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 4; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 4 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 4 * sizeof(PyObject *) );
            memcpy( python_pars + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 4 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 4 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 4; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 4 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 4 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 4 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 4 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (4 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 4 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (4 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 4 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 4, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 4 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            4
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 4 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS5( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 5; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 5 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 5; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 5 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 5 * sizeof(PyObject *) );
            memcpy( python_pars + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 5 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 5 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 5; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 5 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 5 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 5 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 5 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (5 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 5 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (5 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 5 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 5, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 5 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            5
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 5 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS6( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 6; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 6 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 6; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 6 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 6 * sizeof(PyObject *) );
            memcpy( python_pars + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 6 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 6 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 6; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 6 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 6 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 6 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 6 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (6 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 6 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (6 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 6 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 6, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 6 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            6
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 6 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS9( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 9; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 9 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 9; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 9 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 9 * sizeof(PyObject *) );
            memcpy( python_pars + 9, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 9 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 9 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 9; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 9 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 9 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 9, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 9 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 9 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (9 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 9 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (9 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 9 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 9, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 9 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            9
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 9 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_METHOD_WITH_ARGS1( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    1
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS1( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    1
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS1( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS1( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS2( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    2
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS2( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    2
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS2( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS2( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS3( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    3
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS3( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    3
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS3( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS3( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS6( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 6; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    6
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS6( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    6
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS6( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS6( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS6(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS6(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS6(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}
/* Code to register embedded modules for meta path based loading if any. */

#include "nuitka/unfreezing.h"

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
MOD_INIT_DECL( Adafruit_PureIO );
MOD_INIT_DECL( Adafruit_PureIO$smbus );
MOD_INIT_DECL( __main__ );
MOD_INIT_DECL( adafruit_blinka );
MOD_INIT_DECL( adafruit_blinka$agnostic );
MOD_INIT_DECL( adafruit_blinka$agnostic$time );
MOD_INIT_DECL( adafruit_blinka$microcontroller );
MOD_INIT_DECL( adafruit_blinka$microcontroller$allwinner_h3 );
MOD_INIT_DECL( adafruit_blinka$microcontroller$allwinner_h3$pin );
MOD_INIT_DECL( adafruit_blinka$microcontroller$am335x );
MOD_INIT_DECL( adafruit_blinka$microcontroller$am335x$pin );
MOD_INIT_DECL( adafruit_blinka$microcontroller$amlogic );
MOD_INIT_DECL( adafruit_blinka$microcontroller$amlogic$s905 );
MOD_INIT_DECL( adafruit_blinka$microcontroller$amlogic$s905$pin );
MOD_INIT_DECL( adafruit_blinka$microcontroller$bcm283x );
MOD_INIT_DECL( adafruit_blinka$microcontroller$bcm283x$pin );
MOD_INIT_DECL( adafruit_blinka$microcontroller$esp8266 );
MOD_INIT_DECL( adafruit_blinka$microcontroller$esp8266$pin );
MOD_INIT_DECL( adafruit_blinka$microcontroller$generic_linux );
MOD_INIT_DECL( adafruit_blinka$microcontroller$generic_linux$i2c );
MOD_INIT_DECL( adafruit_blinka$microcontroller$generic_linux$libgpiod_pin );
MOD_INIT_DECL( adafruit_blinka$microcontroller$generic_linux$spi );
MOD_INIT_DECL( adafruit_blinka$microcontroller$nxp_imx8m );
MOD_INIT_DECL( adafruit_blinka$microcontroller$nxp_imx8m$pin );
MOD_INIT_DECL( adafruit_blinka$microcontroller$sama5 );
MOD_INIT_DECL( adafruit_blinka$microcontroller$sama5$pin );
MOD_INIT_DECL( adafruit_blinka$microcontroller$snapdragon );
MOD_INIT_DECL( adafruit_blinka$microcontroller$snapdragon$apq8016 );
MOD_INIT_DECL( adafruit_blinka$microcontroller$snapdragon$apq8016$pin );
MOD_INIT_DECL( adafruit_blinka$microcontroller$stm32 );
MOD_INIT_DECL( adafruit_blinka$microcontroller$stm32$pin );
MOD_INIT_DECL( adafruit_blinka$microcontroller$tegra );
MOD_INIT_DECL( adafruit_blinka$microcontroller$tegra$t186 );
MOD_INIT_DECL( adafruit_blinka$microcontroller$tegra$t186$pin );
MOD_INIT_DECL( adafruit_blinka$microcontroller$tegra$t194 );
MOD_INIT_DECL( adafruit_blinka$microcontroller$tegra$t194$pin );
MOD_INIT_DECL( adafruit_blinka$microcontroller$tegra$t210 );
MOD_INIT_DECL( adafruit_blinka$microcontroller$tegra$t210$pin );
MOD_INIT_DECL( adafruit_is31fl3731 );
MOD_INIT_DECL( adafruit_platformdetect );
MOD_INIT_DECL( adafruit_platformdetect$board );
MOD_INIT_DECL( adafruit_platformdetect$chip );
MOD_INIT_DECL( board );
MOD_INIT_DECL( busio );
MOD_INIT_DECL( microcontroller );
MOD_INIT_DECL( microcontroller$pin );
MOD_INIT_DECL( micropython );
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{
    { "Adafruit_PureIO", MOD_INIT_NAME( Adafruit_PureIO ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "Adafruit_PureIO.smbus", MOD_INIT_NAME( Adafruit_PureIO$smbus ), 0, 0, NUITKA_COMPILED_MODULE },
    { "__main__", MOD_INIT_NAME( __main__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { "_asyncio", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_bisect", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_blake2", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_bz2", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_codecs_cn", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_codecs_hk", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_codecs_iso2022", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_codecs_jp", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_codecs_kr", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_codecs_tw", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_contextvars", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_crypt", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_csv", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_ctypes", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_curses", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_curses_panel", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_datetime", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_dbm", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_elementtree", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_gdbm", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_hashlib", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_heapq", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_json", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_lsprof", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_lzma", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_multibytecodec", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_multiprocessing", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_opcode", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_pickle", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_posixsubprocess", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_queue", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_random", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_sha3", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_socket", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_sqlite3", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_ssl", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_struct", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_uuid", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "adafruit_blinka", MOD_INIT_NAME( adafruit_blinka ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "adafruit_blinka.agnostic", MOD_INIT_NAME( adafruit_blinka$agnostic ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "adafruit_blinka.agnostic.time", MOD_INIT_NAME( adafruit_blinka$agnostic$time ), 0, 0, NUITKA_COMPILED_MODULE },
    { "adafruit_blinka.microcontroller", MOD_INIT_NAME( adafruit_blinka$microcontroller ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "adafruit_blinka.microcontroller.allwinner_h3", MOD_INIT_NAME( adafruit_blinka$microcontroller$allwinner_h3 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "adafruit_blinka.microcontroller.allwinner_h3.pin", MOD_INIT_NAME( adafruit_blinka$microcontroller$allwinner_h3$pin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "adafruit_blinka.microcontroller.am335x", MOD_INIT_NAME( adafruit_blinka$microcontroller$am335x ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "adafruit_blinka.microcontroller.am335x.pin", MOD_INIT_NAME( adafruit_blinka$microcontroller$am335x$pin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "adafruit_blinka.microcontroller.amlogic", MOD_INIT_NAME( adafruit_blinka$microcontroller$amlogic ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "adafruit_blinka.microcontroller.amlogic.s905", MOD_INIT_NAME( adafruit_blinka$microcontroller$amlogic$s905 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "adafruit_blinka.microcontroller.amlogic.s905.pin", MOD_INIT_NAME( adafruit_blinka$microcontroller$amlogic$s905$pin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "adafruit_blinka.microcontroller.bcm283x", MOD_INIT_NAME( adafruit_blinka$microcontroller$bcm283x ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "adafruit_blinka.microcontroller.bcm283x.pin", MOD_INIT_NAME( adafruit_blinka$microcontroller$bcm283x$pin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "adafruit_blinka.microcontroller.esp8266", MOD_INIT_NAME( adafruit_blinka$microcontroller$esp8266 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "adafruit_blinka.microcontroller.esp8266.pin", MOD_INIT_NAME( adafruit_blinka$microcontroller$esp8266$pin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "adafruit_blinka.microcontroller.generic_linux", MOD_INIT_NAME( adafruit_blinka$microcontroller$generic_linux ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "adafruit_blinka.microcontroller.generic_linux.i2c", MOD_INIT_NAME( adafruit_blinka$microcontroller$generic_linux$i2c ), 0, 0, NUITKA_COMPILED_MODULE },
    { "adafruit_blinka.microcontroller.generic_linux.libgpiod_pin", MOD_INIT_NAME( adafruit_blinka$microcontroller$generic_linux$libgpiod_pin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "adafruit_blinka.microcontroller.generic_linux.spi", MOD_INIT_NAME( adafruit_blinka$microcontroller$generic_linux$spi ), 0, 0, NUITKA_COMPILED_MODULE },
    { "adafruit_blinka.microcontroller.nxp_imx8m", MOD_INIT_NAME( adafruit_blinka$microcontroller$nxp_imx8m ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "adafruit_blinka.microcontroller.nxp_imx8m.pin", MOD_INIT_NAME( adafruit_blinka$microcontroller$nxp_imx8m$pin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "adafruit_blinka.microcontroller.sama5", MOD_INIT_NAME( adafruit_blinka$microcontroller$sama5 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "adafruit_blinka.microcontroller.sama5.pin", MOD_INIT_NAME( adafruit_blinka$microcontroller$sama5$pin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "adafruit_blinka.microcontroller.snapdragon", MOD_INIT_NAME( adafruit_blinka$microcontroller$snapdragon ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "adafruit_blinka.microcontroller.snapdragon.apq8016", MOD_INIT_NAME( adafruit_blinka$microcontroller$snapdragon$apq8016 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "adafruit_blinka.microcontroller.snapdragon.apq8016.pin", MOD_INIT_NAME( adafruit_blinka$microcontroller$snapdragon$apq8016$pin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "adafruit_blinka.microcontroller.stm32", MOD_INIT_NAME( adafruit_blinka$microcontroller$stm32 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "adafruit_blinka.microcontroller.stm32.pin", MOD_INIT_NAME( adafruit_blinka$microcontroller$stm32$pin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "adafruit_blinka.microcontroller.tegra", MOD_INIT_NAME( adafruit_blinka$microcontroller$tegra ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "adafruit_blinka.microcontroller.tegra.t186", MOD_INIT_NAME( adafruit_blinka$microcontroller$tegra$t186 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "adafruit_blinka.microcontroller.tegra.t186.pin", MOD_INIT_NAME( adafruit_blinka$microcontroller$tegra$t186$pin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "adafruit_blinka.microcontroller.tegra.t194", MOD_INIT_NAME( adafruit_blinka$microcontroller$tegra$t194 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "adafruit_blinka.microcontroller.tegra.t194.pin", MOD_INIT_NAME( adafruit_blinka$microcontroller$tegra$t194$pin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "adafruit_blinka.microcontroller.tegra.t210", MOD_INIT_NAME( adafruit_blinka$microcontroller$tegra$t210 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "adafruit_blinka.microcontroller.tegra.t210.pin", MOD_INIT_NAME( adafruit_blinka$microcontroller$tegra$t210$pin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "adafruit_is31fl3731", MOD_INIT_NAME( adafruit_is31fl3731 ), 0, 0, NUITKA_COMPILED_MODULE },
    { "adafruit_platformdetect", MOD_INIT_NAME( adafruit_platformdetect ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "adafruit_platformdetect.board", MOD_INIT_NAME( adafruit_platformdetect$board ), 0, 0, NUITKA_COMPILED_MODULE },
    { "adafruit_platformdetect.chip", MOD_INIT_NAME( adafruit_platformdetect$chip ), 0, 0, NUITKA_COMPILED_MODULE },
    { "array", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "audioop", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "binascii", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "board", MOD_INIT_NAME( board ), 0, 0, NUITKA_COMPILED_MODULE },
    { "busio", MOD_INIT_NAME( busio ), 0, 0, NUITKA_COMPILED_MODULE },
    { "ctypes", NULL, 33202, 16345, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "datetime", NULL, 49547, 57215, NUITKA_BYTECODE_FLAG },
    { "fcntl", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "functools", NULL, 106762, 24181, NUITKA_BYTECODE_FLAG },
    { "grp", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "math", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "microcontroller", MOD_INIT_NAME( microcontroller ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "microcontroller.pin", MOD_INIT_NAME( microcontroller$pin ), 0, 0, NUITKA_COMPILED_MODULE },
    { "micropython", MOD_INIT_NAME( micropython ), 0, 0, NUITKA_COMPILED_MODULE },
    { "mmap", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "os", NULL, 130943, 29659, NUITKA_BYTECODE_FLAG },
    { "platform", NULL, 160602, 28130, NUITKA_BYTECODE_FLAG },
    { "pyexpat", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "re", NULL, 188732, 13770, NUITKA_BYTECODE_FLAG },
    { "readline", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "select", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "site", NULL, 202502, 13116, NUITKA_BYTECODE_FLAG },
    { "spidev", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "struct", NULL, 215618, 300, NUITKA_BYTECODE_FLAG },
    { "termios", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "types", NULL, 215918, 8942, NUITKA_BYTECODE_FLAG },
    { "unicodedata", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "zlib", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "__future__", NULL, 224860, 4098, NUITKA_BYTECODE_FLAG },
    { "_bootlocale", NULL, 228958, 1215, NUITKA_BYTECODE_FLAG },
    { "_compat_pickle", NULL, 230173, 5774, NUITKA_BYTECODE_FLAG },
    { "_dummy_thread", NULL, 235947, 5955, NUITKA_BYTECODE_FLAG },
    { "_markupbase", NULL, 241902, 7751, NUITKA_BYTECODE_FLAG },
    { "_osx_support", NULL, 249653, 9561, NUITKA_BYTECODE_FLAG },
    { "_py_abc", NULL, 259214, 4620, NUITKA_BYTECODE_FLAG },
    { "_pyio", NULL, 263834, 72834, NUITKA_BYTECODE_FLAG },
    { "_sitebuiltins", NULL, 336668, 3431, NUITKA_BYTECODE_FLAG },
    { "_strptime", NULL, 340099, 16070, NUITKA_BYTECODE_FLAG },
    { "_sysconfigdata_m_linux_x86_64-linux-gnu", NULL, 356169, 19731, NUITKA_BYTECODE_FLAG },
    { "_threading_local", NULL, 375900, 6378, NUITKA_BYTECODE_FLAG },
    { "aifc", NULL, 382278, 26109, NUITKA_BYTECODE_FLAG },
    { "argparse", NULL, 408387, 61879, NUITKA_BYTECODE_FLAG },
    { "ast", NULL, 470266, 12046, NUITKA_BYTECODE_FLAG },
    { "asynchat", NULL, 482312, 6800, NUITKA_BYTECODE_FLAG },
    { "asyncio", NULL, 489112, 656, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "asyncio.base_events", NULL, 489768, 48072, NUITKA_BYTECODE_FLAG },
    { "asyncio.base_futures", NULL, 537840, 2068, NUITKA_BYTECODE_FLAG },
    { "asyncio.base_subprocess", NULL, 539908, 9157, NUITKA_BYTECODE_FLAG },
    { "asyncio.base_tasks", NULL, 549065, 1832, NUITKA_BYTECODE_FLAG },
    { "asyncio.constants", NULL, 550897, 557, NUITKA_BYTECODE_FLAG },
    { "asyncio.coroutines", NULL, 551454, 6344, NUITKA_BYTECODE_FLAG },
    { "asyncio.events", NULL, 557798, 27821, NUITKA_BYTECODE_FLAG },
    { "asyncio.format_helpers", NULL, 585619, 2283, NUITKA_BYTECODE_FLAG },
    { "asyncio.futures", NULL, 587902, 10711, NUITKA_BYTECODE_FLAG },
    { "asyncio.locks", NULL, 598613, 15879, NUITKA_BYTECODE_FLAG },
    { "asyncio.log", NULL, 614492, 206, NUITKA_BYTECODE_FLAG },
    { "asyncio.proactor_events", NULL, 614698, 20054, NUITKA_BYTECODE_FLAG },
    { "asyncio.protocols", NULL, 634752, 8694, NUITKA_BYTECODE_FLAG },
    { "asyncio.queues", NULL, 643446, 8139, NUITKA_BYTECODE_FLAG },
    { "asyncio.runners", NULL, 651585, 1880, NUITKA_BYTECODE_FLAG },
    { "asyncio.selector_events", NULL, 653465, 28146, NUITKA_BYTECODE_FLAG },
    { "asyncio.sslproto", NULL, 681611, 21225, NUITKA_BYTECODE_FLAG },
    { "asyncio.streams", NULL, 702836, 20254, NUITKA_BYTECODE_FLAG },
    { "asyncio.subprocess", NULL, 723090, 6718, NUITKA_BYTECODE_FLAG },
    { "asyncio.tasks", NULL, 729808, 22285, NUITKA_BYTECODE_FLAG },
    { "asyncio.transports", NULL, 752093, 12177, NUITKA_BYTECODE_FLAG },
    { "asyncio.unix_events", NULL, 764270, 32095, NUITKA_BYTECODE_FLAG },
    { "asyncore", NULL, 796365, 15810, NUITKA_BYTECODE_FLAG },
    { "bdb", NULL, 812175, 24613, NUITKA_BYTECODE_FLAG },
    { "binhex", NULL, 836788, 12025, NUITKA_BYTECODE_FLAG },
    { "bisect", NULL, 848813, 2664, NUITKA_BYTECODE_FLAG },
    { "cProfile", NULL, 851477, 4774, NUITKA_BYTECODE_FLAG },
    { "calendar", NULL, 856251, 27390, NUITKA_BYTECODE_FLAG },
    { "cgi", NULL, 883641, 27157, NUITKA_BYTECODE_FLAG },
    { "cgitb", NULL, 910798, 10078, NUITKA_BYTECODE_FLAG },
    { "chunk", NULL, 920876, 4885, NUITKA_BYTECODE_FLAG },
    { "cmd", NULL, 925761, 12556, NUITKA_BYTECODE_FLAG },
    { "code", NULL, 938317, 9824, NUITKA_BYTECODE_FLAG },
    { "codeop", NULL, 948141, 6256, NUITKA_BYTECODE_FLAG },
    { "colorsys", NULL, 954397, 3263, NUITKA_BYTECODE_FLAG },
    { "compileall", NULL, 957660, 9227, NUITKA_BYTECODE_FLAG },
    { "concurrent", NULL, 966887, 112, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "concurrent.futures", NULL, 966999, 1052, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "concurrent.futures._base", NULL, 968051, 21150, NUITKA_BYTECODE_FLAG },
    { "concurrent.futures.process", NULL, 989201, 19959, NUITKA_BYTECODE_FLAG },
    { "concurrent.futures.thread", NULL, 1009160, 5399, NUITKA_BYTECODE_FLAG },
    { "configparser", NULL, 1014559, 45846, NUITKA_BYTECODE_FLAG },
    { "contextlib", NULL, 1060405, 20424, NUITKA_BYTECODE_FLAG },
    { "contextvars", NULL, 1080829, 223, NUITKA_BYTECODE_FLAG },
    { "copy", NULL, 1081052, 7067, NUITKA_BYTECODE_FLAG },
    { "crypt", NULL, 1088119, 3100, NUITKA_BYTECODE_FLAG },
    { "csv", NULL, 1091219, 11798, NUITKA_BYTECODE_FLAG },
    { "ctypes", NULL, 33202, 16345, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "ctypes._aix", NULL, 1103017, 9789, NUITKA_BYTECODE_FLAG },
    { "ctypes._endian", NULL, 1112806, 1922, NUITKA_BYTECODE_FLAG },
    { "ctypes.macholib", NULL, 1114728, 279, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "ctypes.macholib.dyld", NULL, 1115007, 4312, NUITKA_BYTECODE_FLAG },
    { "ctypes.macholib.dylib", NULL, 1119319, 1906, NUITKA_BYTECODE_FLAG },
    { "ctypes.macholib.framework", NULL, 1121225, 2186, NUITKA_BYTECODE_FLAG },
    { "ctypes.util", NULL, 1123411, 7715, NUITKA_BYTECODE_FLAG },
    { "curses", NULL, 1131126, 1906, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "curses.ascii", NULL, 1133032, 3869, NUITKA_BYTECODE_FLAG },
    { "curses.has_key", NULL, 1136901, 4233, NUITKA_BYTECODE_FLAG },
    { "curses.panel", NULL, 1141134, 203, NUITKA_BYTECODE_FLAG },
    { "curses.textpad", NULL, 1141337, 5872, NUITKA_BYTECODE_FLAG },
    { "dataclasses", NULL, 1147209, 22431, NUITKA_BYTECODE_FLAG },
    { "datetime", NULL, 49547, 57215, NUITKA_BYTECODE_FLAG },
    { "dbm", NULL, 1169640, 4132, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "dbm.dumb", NULL, 1173772, 8366, NUITKA_BYTECODE_FLAG },
    { "dbm.gnu", NULL, 1182138, 183, NUITKA_BYTECODE_FLAG },
    { "dbm.ndbm", NULL, 1182321, 182, NUITKA_BYTECODE_FLAG },
    { "decimal", NULL, 1182503, 162138, NUITKA_BYTECODE_FLAG },
    { "difflib", NULL, 1344641, 59404, NUITKA_BYTECODE_FLAG },
    { "distutils", NULL, 1404045, 364, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "distutils.archive_util", NULL, 1404409, 6498, NUITKA_BYTECODE_FLAG },
    { "distutils.bcppcompiler", NULL, 1410907, 6467, NUITKA_BYTECODE_FLAG },
    { "distutils.ccompiler", NULL, 1417374, 33182, NUITKA_BYTECODE_FLAG },
    { "distutils.cmd", NULL, 1450556, 13874, NUITKA_BYTECODE_FLAG },
    { "distutils.command", NULL, 1464430, 521, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "distutils.command.bdist", NULL, 1464951, 3620, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_dumb", NULL, 1468571, 3535, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_rpm", NULL, 1472106, 12460, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_wininst", NULL, 1484566, 7975, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build", NULL, 1492541, 3809, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_clib", NULL, 1496350, 4851, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_ext", NULL, 1501201, 15758, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_py", NULL, 1516959, 10357, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_scripts", NULL, 1527316, 4256, NUITKA_BYTECODE_FLAG },
    { "distutils.command.check", NULL, 1531572, 4805, NUITKA_BYTECODE_FLAG },
    { "distutils.command.clean", NULL, 1536377, 2058, NUITKA_BYTECODE_FLAG },
    { "distutils.command.config", NULL, 1538435, 10162, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install", NULL, 1548597, 13485, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_data", NULL, 1562082, 2251, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_egg_info", NULL, 1564333, 2949, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_headers", NULL, 1567282, 1666, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_lib", NULL, 1568948, 5044, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_scripts", NULL, 1573992, 2108, NUITKA_BYTECODE_FLAG },
    { "distutils.command.register", NULL, 1576100, 8443, NUITKA_BYTECODE_FLAG },
    { "distutils.command.sdist", NULL, 1584543, 14474, NUITKA_BYTECODE_FLAG },
    { "distutils.command.upload", NULL, 1599017, 5056, NUITKA_BYTECODE_FLAG },
    { "distutils.config", NULL, 1604073, 3451, NUITKA_BYTECODE_FLAG },
    { "distutils.core", NULL, 1607524, 6576, NUITKA_BYTECODE_FLAG },
    { "distutils.cygwinccompiler", NULL, 1614100, 8494, NUITKA_BYTECODE_FLAG },
    { "distutils.debug", NULL, 1622594, 174, NUITKA_BYTECODE_FLAG },
    { "distutils.dep_util", NULL, 1622768, 2690, NUITKA_BYTECODE_FLAG },
    { "distutils.dir_util", NULL, 1625458, 5784, NUITKA_BYTECODE_FLAG },
    { "distutils.dist", NULL, 1631242, 34405, NUITKA_BYTECODE_FLAG },
    { "distutils.errors", NULL, 1665647, 5460, NUITKA_BYTECODE_FLAG },
    { "distutils.extension", NULL, 1671107, 6871, NUITKA_BYTECODE_FLAG },
    { "distutils.fancy_getopt", NULL, 1677978, 10583, NUITKA_BYTECODE_FLAG },
    { "distutils.file_util", NULL, 1688561, 5869, NUITKA_BYTECODE_FLAG },
    { "distutils.filelist", NULL, 1694430, 9804, NUITKA_BYTECODE_FLAG },
    { "distutils.log", NULL, 1704234, 2285, NUITKA_BYTECODE_FLAG },
    { "distutils.msvccompiler", NULL, 1706519, 14537, NUITKA_BYTECODE_FLAG },
    { "distutils.spawn", NULL, 1721056, 5088, NUITKA_BYTECODE_FLAG },
    { "distutils.sysconfig", NULL, 1726144, 11962, NUITKA_BYTECODE_FLAG },
    { "distutils.text_file", NULL, 1738106, 8411, NUITKA_BYTECODE_FLAG },
    { "distutils.unixccompiler", NULL, 1746517, 6506, NUITKA_BYTECODE_FLAG },
    { "distutils.util", NULL, 1753023, 15067, NUITKA_BYTECODE_FLAG },
    { "distutils.version", NULL, 1768090, 7322, NUITKA_BYTECODE_FLAG },
    { "distutils.versionpredicate", NULL, 1775412, 5069, NUITKA_BYTECODE_FLAG },
    { "doctest", NULL, 1780481, 75400, NUITKA_BYTECODE_FLAG },
    { "dummy_threading", NULL, 1855881, 1090, NUITKA_BYTECODE_FLAG },
    { "email", NULL, 1856971, 1657, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "email._encoded_words", NULL, 1858628, 5574, NUITKA_BYTECODE_FLAG },
    { "email._header_value_parser", NULL, 1864202, 76109, NUITKA_BYTECODE_FLAG },
    { "email._parseaddr", NULL, 1940311, 12314, NUITKA_BYTECODE_FLAG },
    { "email._policybase", NULL, 1952625, 14816, NUITKA_BYTECODE_FLAG },
    { "email.base64mime", NULL, 1967441, 3201, NUITKA_BYTECODE_FLAG },
    { "email.charset", NULL, 1970642, 11495, NUITKA_BYTECODE_FLAG },
    { "email.contentmanager", NULL, 1982137, 7261, NUITKA_BYTECODE_FLAG },
    { "email.encoders", NULL, 1989398, 1630, NUITKA_BYTECODE_FLAG },
    { "email.errors", NULL, 1991028, 6157, NUITKA_BYTECODE_FLAG },
    { "email.feedparser", NULL, 1997185, 10595, NUITKA_BYTECODE_FLAG },
    { "email.generator", NULL, 2007780, 12466, NUITKA_BYTECODE_FLAG },
    { "email.header", NULL, 2020246, 16352, NUITKA_BYTECODE_FLAG },
    { "email.headerregistry", NULL, 2036598, 21263, NUITKA_BYTECODE_FLAG },
    { "email.iterators", NULL, 2057861, 1898, NUITKA_BYTECODE_FLAG },
    { "email.message", NULL, 2059759, 37906, NUITKA_BYTECODE_FLAG },
    { "email.mime", NULL, 2097665, 112, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "email.mime.application", NULL, 2097777, 1423, NUITKA_BYTECODE_FLAG },
    { "email.mime.audio", NULL, 2099200, 2582, NUITKA_BYTECODE_FLAG },
    { "email.mime.base", NULL, 2101782, 1048, NUITKA_BYTECODE_FLAG },
    { "email.mime.image", NULL, 2102830, 1868, NUITKA_BYTECODE_FLAG },
    { "email.mime.message", NULL, 2104698, 1297, NUITKA_BYTECODE_FLAG },
    { "email.mime.multipart", NULL, 2105995, 1519, NUITKA_BYTECODE_FLAG },
    { "email.mime.nonmultipart", NULL, 2107514, 734, NUITKA_BYTECODE_FLAG },
    { "email.mime.text", NULL, 2108248, 1281, NUITKA_BYTECODE_FLAG },
    { "email.parser", NULL, 2109529, 5713, NUITKA_BYTECODE_FLAG },
    { "email.policy", NULL, 2115242, 9621, NUITKA_BYTECODE_FLAG },
    { "email.quoprimime", NULL, 2124863, 7630, NUITKA_BYTECODE_FLAG },
    { "email.utils", NULL, 2132493, 9433, NUITKA_BYTECODE_FLAG },
    { "filecmp", NULL, 2141926, 8273, NUITKA_BYTECODE_FLAG },
    { "fileinput", NULL, 2150199, 13221, NUITKA_BYTECODE_FLAG },
    { "fnmatch", NULL, 2163420, 3303, NUITKA_BYTECODE_FLAG },
    { "formatter", NULL, 2166723, 17519, NUITKA_BYTECODE_FLAG },
    { "fractions", NULL, 2184242, 18394, NUITKA_BYTECODE_FLAG },
    { "ftplib", NULL, 2202636, 28033, NUITKA_BYTECODE_FLAG },
    { "getopt", NULL, 2230669, 6205, NUITKA_BYTECODE_FLAG },
    { "getpass", NULL, 2236874, 4130, NUITKA_BYTECODE_FLAG },
    { "gettext", NULL, 2241004, 14134, NUITKA_BYTECODE_FLAG },
    { "glob", NULL, 2255138, 4225, NUITKA_BYTECODE_FLAG },
    { "gzip", NULL, 2259363, 17151, NUITKA_BYTECODE_FLAG },
    { "hashlib", NULL, 2276514, 6557, NUITKA_BYTECODE_FLAG },
    { "hmac", NULL, 2283071, 6079, NUITKA_BYTECODE_FLAG },
    { "html", NULL, 2289150, 3363, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "html.entities", NULL, 2292513, 50435, NUITKA_BYTECODE_FLAG },
    { "html.parser", NULL, 2342948, 11073, NUITKA_BYTECODE_FLAG },
    { "http", NULL, 2354021, 5888, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "http.client", NULL, 2359909, 34282, NUITKA_BYTECODE_FLAG },
    { "http.cookiejar", NULL, 2394191, 53551, NUITKA_BYTECODE_FLAG },
    { "http.cookies", NULL, 2447742, 15210, NUITKA_BYTECODE_FLAG },
    { "http.server", NULL, 2462952, 33333, NUITKA_BYTECODE_FLAG },
    { "imaplib", NULL, 2496285, 41396, NUITKA_BYTECODE_FLAG },
    { "imghdr", NULL, 2537681, 4108, NUITKA_BYTECODE_FLAG },
    { "imp", NULL, 2541789, 9719, NUITKA_BYTECODE_FLAG },
    { "importlib.abc", NULL, 2551508, 13453, NUITKA_BYTECODE_FLAG },
    { "importlib.resources", NULL, 2564961, 8305, NUITKA_BYTECODE_FLAG },
    { "importlib.util", NULL, 2573266, 9322, NUITKA_BYTECODE_FLAG },
    { "ipaddress", NULL, 2582588, 63066, NUITKA_BYTECODE_FLAG },
    { "json", NULL, 2645654, 12304, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "json.decoder", NULL, 2657958, 9790, NUITKA_BYTECODE_FLAG },
    { "json.encoder", NULL, 2667748, 11272, NUITKA_BYTECODE_FLAG },
    { "json.scanner", NULL, 2679020, 1962, NUITKA_BYTECODE_FLAG },
    { "json.tool", NULL, 2680982, 1443, NUITKA_BYTECODE_FLAG },
    { "lib2to3", NULL, 2682425, 109, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lib2to3.btm_matcher", NULL, 2682534, 4859, NUITKA_BYTECODE_FLAG },
    { "lib2to3.btm_utils", NULL, 2687393, 6109, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixer_base", NULL, 2693502, 6201, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixer_util", NULL, 2699703, 12012, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes", NULL, 2711715, 115, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lib2to3.fixes.fix_apply", NULL, 2711830, 1653, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_asserts", NULL, 2713483, 1238, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_basestring", NULL, 2714721, 628, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_buffer", NULL, 2715349, 773, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_dict", NULL, 2716122, 3281, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_except", NULL, 2719403, 2783, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_exec", NULL, 2722186, 1114, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_execfile", NULL, 2723300, 1658, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_exitfunc", NULL, 2724958, 2261, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_filter", NULL, 2727219, 2326, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_funcattrs", NULL, 2729545, 939, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_future", NULL, 2730484, 749, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_getcwdu", NULL, 2731233, 753, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_has_key", NULL, 2731986, 2883, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_idioms", NULL, 2734869, 3868, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_import", NULL, 2738737, 2750, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_imports", NULL, 2741487, 4314, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_imports2", NULL, 2745801, 513, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_input", NULL, 2746314, 915, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_intern", NULL, 2747229, 1122, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_isinstance", NULL, 2748351, 1520, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_itertools", NULL, 2749871, 1509, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_itertools_imports", NULL, 2751380, 1545, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_long", NULL, 2752925, 670, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_map", NULL, 2753595, 3058, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_metaclass", NULL, 2756653, 5311, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_methodattrs", NULL, 2761964, 901, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_ne", NULL, 2762865, 772, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_next", NULL, 2763637, 3025, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_nonzero", NULL, 2766662, 888, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_numliterals", NULL, 2767550, 984, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_operator", NULL, 2768534, 4201, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_paren", NULL, 2772735, 1355, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_print", NULL, 2774090, 2290, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_raise", NULL, 2776380, 2214, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_raw_input", NULL, 2778594, 760, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_reduce", NULL, 2779354, 1095, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_reload", NULL, 2780449, 1134, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_renames", NULL, 2781583, 1958, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_repr", NULL, 2783541, 810, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_set_literal", NULL, 2784351, 1642, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_standarderror", NULL, 2785993, 685, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_sys_exc", NULL, 2786678, 1366, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_throw", NULL, 2788044, 1767, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_tuple_params", NULL, 2789811, 4561, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_types", NULL, 2794372, 1794, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_unicode", NULL, 2796166, 1506, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_urllib", NULL, 2797672, 5926, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_ws_comma", NULL, 2803598, 1088, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_xrange", NULL, 2804686, 2501, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_xreadlines", NULL, 2807187, 1082, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_zip", NULL, 2808269, 1546, NUITKA_BYTECODE_FLAG },
    { "lib2to3.main", NULL, 2809815, 8502, NUITKA_BYTECODE_FLAG },
    { "lib2to3.patcomp", NULL, 2818317, 5577, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2", NULL, 2823894, 145, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lib2to3.pgen2.driver", NULL, 2824039, 5106, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.grammar", NULL, 2829145, 6982, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.literals", NULL, 2836127, 1524, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.parse", NULL, 2837651, 6270, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.pgen", NULL, 2843921, 9746, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.token", NULL, 2853667, 1838, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.tokenize", NULL, 2855505, 15105, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pygram", NULL, 2870610, 1164, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pytree", NULL, 2871774, 24969, NUITKA_BYTECODE_FLAG },
    { "lib2to3.refactor", NULL, 2896743, 20370, NUITKA_BYTECODE_FLAG },
    { "logging", NULL, 2917113, 62368, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "logging.config", NULL, 2979481, 22981, NUITKA_BYTECODE_FLAG },
    { "logging.handlers", NULL, 3002462, 42998, NUITKA_BYTECODE_FLAG },
    { "lzma", NULL, 3045460, 11905, NUITKA_BYTECODE_FLAG },
    { "macpath", NULL, 3057365, 5773, NUITKA_BYTECODE_FLAG },
    { "mailbox", NULL, 3063138, 63614, NUITKA_BYTECODE_FLAG },
    { "mailcap", NULL, 3126752, 6450, NUITKA_BYTECODE_FLAG },
    { "mimetypes", NULL, 3133202, 15444, NUITKA_BYTECODE_FLAG },
    { "modulefinder", NULL, 3148646, 15318, NUITKA_BYTECODE_FLAG },
    { "multiprocessing", NULL, 3163964, 493, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "multiprocessing.connection", NULL, 3164457, 24898, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.context", NULL, 3189355, 13079, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.dummy", NULL, 3202434, 3771, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "multiprocessing.dummy.connection", NULL, 3206205, 2479, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.forkserver", NULL, 3208684, 7730, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.heap", NULL, 3216414, 6390, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.managers", NULL, 3222804, 34331, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.pool", NULL, 3257135, 21202, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.popen_fork", NULL, 3278337, 2492, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.popen_forkserver", NULL, 3280829, 2325, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.popen_spawn_posix", NULL, 3283154, 2107, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.process", NULL, 3285261, 9392, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.queues", NULL, 3294653, 9403, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.reduction", NULL, 3304056, 7984, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.resource_sharer", NULL, 3312040, 5170, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.semaphore_tracker", NULL, 3317210, 3706, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.sharedctypes", NULL, 3320916, 6883, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.spawn", NULL, 3327799, 6434, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.synchronize", NULL, 3334233, 11149, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.util", NULL, 3345382, 9913, NUITKA_BYTECODE_FLAG },
    { "netrc", NULL, 3355295, 3729, NUITKA_BYTECODE_FLAG },
    { "nntplib", NULL, 3359024, 33717, NUITKA_BYTECODE_FLAG },
    { "ntpath", NULL, 3392741, 12970, NUITKA_BYTECODE_FLAG },
    { "nturl2path", NULL, 3405711, 1581, NUITKA_BYTECODE_FLAG },
    { "numbers", NULL, 3407292, 12158, NUITKA_BYTECODE_FLAG },
    { "optparse", NULL, 3419450, 47859, NUITKA_BYTECODE_FLAG },
    { "pathlib", NULL, 3467309, 41712, NUITKA_BYTECODE_FLAG },
    { "pdb", NULL, 3509021, 46894, NUITKA_BYTECODE_FLAG },
    { "pickle", NULL, 3555915, 43007, NUITKA_BYTECODE_FLAG },
    { "pickletools", NULL, 3598922, 65297, NUITKA_BYTECODE_FLAG },
    { "pipes", NULL, 3664219, 7769, NUITKA_BYTECODE_FLAG },
    { "pkgutil", NULL, 3671988, 16326, NUITKA_BYTECODE_FLAG },
    { "platform", NULL, 160602, 28130, NUITKA_BYTECODE_FLAG },
    { "plistlib", NULL, 3688314, 25061, NUITKA_BYTECODE_FLAG },
    { "poplib", NULL, 3713375, 13302, NUITKA_BYTECODE_FLAG },
    { "pprint", NULL, 3726677, 15799, NUITKA_BYTECODE_FLAG },
    { "profile", NULL, 3742476, 14058, NUITKA_BYTECODE_FLAG },
    { "pstats", NULL, 3756534, 22260, NUITKA_BYTECODE_FLAG },
    { "pty", NULL, 3778794, 3849, NUITKA_BYTECODE_FLAG },
    { "py_compile", NULL, 3782643, 7157, NUITKA_BYTECODE_FLAG },
    { "pyclbr", NULL, 3789800, 10339, NUITKA_BYTECODE_FLAG },
    { "pydoc", NULL, 3800139, 84396, NUITKA_BYTECODE_FLAG },
    { "pydoc_data", NULL, 3884535, 112, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "pydoc_data.topics", NULL, 3884647, 411698, NUITKA_BYTECODE_FLAG },
    { "queue", NULL, 4296345, 11438, NUITKA_BYTECODE_FLAG },
    { "random", NULL, 4307783, 19374, NUITKA_BYTECODE_FLAG },
    { "rlcompleter", NULL, 4327157, 5713, NUITKA_BYTECODE_FLAG },
    { "runpy", NULL, 4332870, 7911, NUITKA_BYTECODE_FLAG },
    { "sched", NULL, 4340781, 6487, NUITKA_BYTECODE_FLAG },
    { "secrets", NULL, 4347268, 2150, NUITKA_BYTECODE_FLAG },
    { "selectors", NULL, 4349418, 16914, NUITKA_BYTECODE_FLAG },
    { "shelve", NULL, 4366332, 9472, NUITKA_BYTECODE_FLAG },
    { "shlex", NULL, 4375804, 6956, NUITKA_BYTECODE_FLAG },
    { "shutil", NULL, 4382760, 30946, NUITKA_BYTECODE_FLAG },
    { "signal", NULL, 4413706, 2478, NUITKA_BYTECODE_FLAG },
    { "site", NULL, 202502, 13116, NUITKA_BYTECODE_FLAG },
    { "smtpd", NULL, 4416184, 26570, NUITKA_BYTECODE_FLAG },
    { "smtplib", NULL, 4442754, 35316, NUITKA_BYTECODE_FLAG },
    { "sndhdr", NULL, 4478070, 6869, NUITKA_BYTECODE_FLAG },
    { "socket", NULL, 4484939, 21987, NUITKA_BYTECODE_FLAG },
    { "socketserver", NULL, 4506926, 24165, NUITKA_BYTECODE_FLAG },
    { "sqlite3", NULL, 4531091, 140, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "sqlite3.dbapi2", NULL, 4531231, 2459, NUITKA_BYTECODE_FLAG },
    { "sqlite3.dump", NULL, 4533690, 1902, NUITKA_BYTECODE_FLAG },
    { "ssl", NULL, 4535592, 39356, NUITKA_BYTECODE_FLAG },
    { "statistics", NULL, 4574948, 18130, NUITKA_BYTECODE_FLAG },
    { "string", NULL, 4593078, 7801, NUITKA_BYTECODE_FLAG },
    { "subprocess", NULL, 4600879, 38754, NUITKA_BYTECODE_FLAG },
    { "sunau", NULL, 4639633, 17177, NUITKA_BYTECODE_FLAG },
    { "symbol", NULL, 4656810, 2531, NUITKA_BYTECODE_FLAG },
    { "symtable", NULL, 4659341, 10411, NUITKA_BYTECODE_FLAG },
    { "sysconfig", NULL, 4669752, 15410, NUITKA_BYTECODE_FLAG },
    { "tabnanny", NULL, 4685162, 6944, NUITKA_BYTECODE_FLAG },
    { "tarfile", NULL, 4692106, 61807, NUITKA_BYTECODE_FLAG },
    { "telnetlib", NULL, 4753913, 18068, NUITKA_BYTECODE_FLAG },
    { "tempfile", NULL, 4771981, 22111, NUITKA_BYTECODE_FLAG },
    { "textwrap", NULL, 4794092, 13578, NUITKA_BYTECODE_FLAG },
    { "this", NULL, 4807670, 1243, NUITKA_BYTECODE_FLAG },
    { "timeit", NULL, 4808913, 11613, NUITKA_BYTECODE_FLAG },
    { "trace", NULL, 4820526, 19368, NUITKA_BYTECODE_FLAG },
    { "tracemalloc", NULL, 4839894, 17242, NUITKA_BYTECODE_FLAG },
    { "tty", NULL, 4857136, 1060, NUITKA_BYTECODE_FLAG },
    { "typing", NULL, 4858196, 49946, NUITKA_BYTECODE_FLAG },
    { "unittest", NULL, 4908142, 2977, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "unittest.case", NULL, 4911119, 48324, NUITKA_BYTECODE_FLAG },
    { "unittest.loader", NULL, 4959443, 14242, NUITKA_BYTECODE_FLAG },
    { "unittest.main", NULL, 4973685, 7404, NUITKA_BYTECODE_FLAG },
    { "unittest.mock", NULL, 4981089, 63388, NUITKA_BYTECODE_FLAG },
    { "unittest.result", NULL, 5044477, 7218, NUITKA_BYTECODE_FLAG },
    { "unittest.runner", NULL, 5051695, 6961, NUITKA_BYTECODE_FLAG },
    { "unittest.signals", NULL, 5058656, 2160, NUITKA_BYTECODE_FLAG },
    { "unittest.suite", NULL, 5060816, 9169, NUITKA_BYTECODE_FLAG },
    { "unittest.util", NULL, 5069985, 4487, NUITKA_BYTECODE_FLAG },
    { "urllib", NULL, 5074472, 108, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "urllib.error", NULL, 5074580, 2742, NUITKA_BYTECODE_FLAG },
    { "urllib.parse", NULL, 5077322, 30799, NUITKA_BYTECODE_FLAG },
    { "urllib.request", NULL, 5108121, 72285, NUITKA_BYTECODE_FLAG },
    { "urllib.response", NULL, 5180406, 3215, NUITKA_BYTECODE_FLAG },
    { "urllib.robotparser", NULL, 5183621, 7055, NUITKA_BYTECODE_FLAG },
    { "uu", NULL, 5190676, 3538, NUITKA_BYTECODE_FLAG },
    { "uuid", NULL, 5194214, 23165, NUITKA_BYTECODE_FLAG },
    { "venv", NULL, 5217379, 14421, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "wave", NULL, 5231800, 18254, NUITKA_BYTECODE_FLAG },
    { "weakref", NULL, 5250054, 19540, NUITKA_BYTECODE_FLAG },
    { "webbrowser", NULL, 5269594, 16340, NUITKA_BYTECODE_FLAG },
    { "wsgiref", NULL, 5285934, 704, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "wsgiref.handlers", NULL, 5286638, 16256, NUITKA_BYTECODE_FLAG },
    { "wsgiref.headers", NULL, 5302894, 7725, NUITKA_BYTECODE_FLAG },
    { "wsgiref.simple_server", NULL, 5310619, 5171, NUITKA_BYTECODE_FLAG },
    { "wsgiref.util", NULL, 5315790, 5146, NUITKA_BYTECODE_FLAG },
    { "wsgiref.validate", NULL, 5320936, 14642, NUITKA_BYTECODE_FLAG },
    { "xdrlib", NULL, 5335578, 8290, NUITKA_BYTECODE_FLAG },
    { "xml", NULL, 5343868, 672, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.dom", NULL, 5344540, 5424, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.dom.NodeFilter", NULL, 5349964, 939, NUITKA_BYTECODE_FLAG },
    { "xml.dom.domreg", NULL, 5350903, 2816, NUITKA_BYTECODE_FLAG },
    { "xml.dom.expatbuilder", NULL, 5353719, 26986, NUITKA_BYTECODE_FLAG },
    { "xml.dom.minicompat", NULL, 5380705, 2785, NUITKA_BYTECODE_FLAG },
    { "xml.dom.minidom", NULL, 5383490, 55585, NUITKA_BYTECODE_FLAG },
    { "xml.dom.pulldom", NULL, 5439075, 10458, NUITKA_BYTECODE_FLAG },
    { "xml.dom.xmlbuilder", NULL, 5449533, 12405, NUITKA_BYTECODE_FLAG },
    { "xml.etree", NULL, 5461938, 111, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.etree.ElementInclude", NULL, 5462049, 1547, NUITKA_BYTECODE_FLAG },
    { "xml.etree.ElementPath", NULL, 5463596, 6315, NUITKA_BYTECODE_FLAG },
    { "xml.etree.ElementTree", NULL, 5469911, 44779, NUITKA_BYTECODE_FLAG },
    { "xml.etree.cElementTree", NULL, 5514690, 153, NUITKA_BYTECODE_FLAG },
    { "xml.parsers", NULL, 5514843, 285, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.parsers.expat", NULL, 5515128, 314, NUITKA_BYTECODE_FLAG },
    { "xml.sax", NULL, 5515442, 3144, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.sax._exceptions", NULL, 5518586, 5453, NUITKA_BYTECODE_FLAG },
    { "xml.sax.expatreader", NULL, 5524039, 12356, NUITKA_BYTECODE_FLAG },
    { "xml.sax.handler", NULL, 5536395, 12329, NUITKA_BYTECODE_FLAG },
    { "xml.sax.saxutils", NULL, 5548724, 12782, NUITKA_BYTECODE_FLAG },
    { "xml.sax.xmlreader", NULL, 5561506, 16890, NUITKA_BYTECODE_FLAG },
    { "xmlrpc", NULL, 5578396, 108, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xmlrpc.client", NULL, 5578504, 34514, NUITKA_BYTECODE_FLAG },
    { "xmlrpc.server", NULL, 5613018, 29356, NUITKA_BYTECODE_FLAG },
    { "zipapp", NULL, 5642374, 5769, NUITKA_BYTECODE_FLAG },
    { "zipfile", NULL, 5648143, 49853, NUITKA_BYTECODE_FLAG },
    { NULL, NULL, 0, 0, 0 }
};

void setupMetaPathBasedLoader( void )
{
    static bool init_done = false;

    if ( init_done == false )
    {
        registerMetaPathBasedUnfreezer( meta_path_loader_entries );
        init_done = true;
    }
}
