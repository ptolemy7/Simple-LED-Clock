/* Generated code for Python module 'busio'
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

/* The "_module_busio" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_busio;
PyDictObject *moduledict_busio;

/* The declarations of module constants used, if any. */
static PyObject *const_tuple_5e05cf7762ec0d4f732140f1fa27c914_tuple;
extern PyObject *const_tuple_int_0_none_int_0_tuple;
static PyObject *const_str_plain_portScl;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_writeto;
extern PyObject *const_str_digest_6fba6dcdb09ebe74c73d220c28a4c8b9;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_digest_0735d9757ad8e5d4ec8b7ec410edcf64;
static PyObject *const_str_plain_nbytes;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_str_digest_4a7345505cb7cac003dc637e474a7d88;
extern PyObject *const_str_plain_traceback;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_1d36560db8127ee3509956e97eac89fc;
extern PyObject *const_str_plain_out_start;
static PyObject *const_str_digest_6809aef55b85de24b5d3fbf30c29c563;
static PyObject *const_str_plain_readline;
extern PyObject *const_str_digest_d0fff785ff78971c897b548f07ba60ad;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_digest_840781f3bcbba24c0c9d94a22c7c54d4;
static PyObject *const_str_digest_d6693a7a890ebd72e9fdbdacb6c2cfef;
static PyObject *const_int_pos_9600;
static PyObject *const_tuple_str_plain_self_str_plain_buf_str_plain_nbytes_tuple;
extern PyObject *const_str_digest_f4a5b997d0b3c1411d2a276dc0aa3d6e;
extern PyObject *const_str_plain_bits;
extern PyObject *const_str_plain_Pin;
extern PyObject *const_str_digest_a92f659b27c80c84236371e5d850c570;
extern PyObject *const_tuple_int_0_none_int_0_none_tuple;
static PyObject *const_str_plain__uart;
extern PyObject *const_str_digest_0c1898fc1f2c6d20fef19765d7f4025d;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_plain_id;
extern PyObject *const_str_plain_miso;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_digest_c606d455df1b0b1ff46033ccb0d515a0;
extern PyObject *const_str_plain_busio;
extern PyObject *const_str_digest_2ab60b4f55405026964a3306bc31e42a;
extern PyObject *const_str_plain_end;
extern PyObject *const_dict_8aeb909f6fefcf5760c5c4604f52a0cc;
extern PyObject *const_str_digest_4e7aad7c88b0724a830e614462e04cb4;
extern PyObject *const_str_plain_ORANGE_PI_PC;
static PyObject *const_str_plain__i2c;
extern PyObject *const_str_plain___enter__;
static PyObject *const_tuple_str_plain_uartPorts_tuple;
extern PyObject *const_str_plain_MASTER;
static PyObject *const_str_plain_read_buf_len;
extern PyObject *const_str_digest_4fbae985f092f4091e6fdcac3426d015;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain_agnostic;
static PyObject *const_str_digest_c75fc79708aba974c0bab00a5f89770e;
static PyObject *const_dict_13ade500ff25e5785a0570f89af7d3c6;
static PyObject *const_tuple_str_plain_self_str_plain_buf_tuple;
extern PyObject *const_str_plain_start;
static PyObject *const_str_digest_e561117a1293b1e66f339f8beab67aeb;
extern PyObject *const_str_plain_polarity;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_mosi;
extern PyObject *const_str_plain_write_value;
extern PyObject *const_str_plain_clock;
static PyObject *const_str_plain_timeout;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_portRx;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_digest_4b129ba630d1386329126974bf8bb58f;
extern PyObject *const_str_digest_0e0545f125585b80111045982f829c0c;
static PyObject *const_str_digest_9525d2ff182206c4851df34a27ac7e28;
static PyObject *const_tuple_8a681feaa3b70ece8ae3159a2d986a0a_tuple;
extern PyObject *const_str_plain_buffer_in;
static PyObject *const_tuple_str_plain_self_str_plain_nbytes_tuple;
extern PyObject *const_str_digest_cea0edda4a37f9b21d5f316ef41250c8;
static PyObject *const_str_plain_str;
extern PyObject *const_tuple_int_0_none_tuple;
extern PyObject *const_str_plain_phase;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_tuple_str_plain_self_str_plain_buf_str_plain_start_str_plain_end_tuple;
static PyObject *const_str_digest_ec3c60490c5d09e695aa6fc05055faaa;
extern PyObject *const_str_plain_write_readinto;
extern PyObject *const_str_digest_461f5cb03aca48d6eb285a5f7999fc4a;
extern PyObject *const_str_plain_sck;
static PyObject *const_str_plain__pins;
static PyObject *const_tuple_a183dc631236275f8e94857bc6169f3f_tuple;
extern PyObject *const_str_plain_any_raspberry_pi_40_pin;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_plain_portTx;
static PyObject *const_tuple_str_plain_SPI_tuple;
static PyObject *const_tuple_str_plain_Enum_str_plain_Lockable_str_plain_agnostic_tuple;
static PyObject *const_str_plain_flow;
static PyObject *const_dict_fd673cabee27081bd7f8c6d8a32f4596;
extern PyObject *const_str_plain_init;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain_DRAGONBOARD_410C;
static PyObject *const_str_digest_1fb47adee9db6c08574330e5076de85f;
extern PyObject *const_str_plain_exc_type;
static PyObject *const_str_digest_62398ab4dc1d3efd3c277bc9632b3381;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_MOSI;
static PyObject *const_tuple_str_plain_i2cPorts_tuple;
extern PyObject *const_str_plain_board;
extern PyObject *const_str_plain_ODROID_C2;
extern PyObject *const_str_plain_MISO;
static PyObject *const_str_plain_portId;
static PyObject *const_str_plain_parity;
static PyObject *const_str_plain_Parity;
extern PyObject *const_str_digest_f25895fd22019cc3589993928699e319;
extern PyObject *const_str_plain__spi;
static PyObject *const_tuple_str_plain_I2C_tuple;
static PyObject *const_tuple_int_pos_100000_int_0_int_0_int_pos_8_tuple;
extern PyObject *const_tuple_str_plain_x_tuple;
static PyObject *const_str_plain_receiver_buffer_size;
extern PyObject *const_int_pos_100000;
static PyObject *const_str_plain__SPI;
static PyObject *const_str_plain_frequency;
static PyObject *const_str_plain_EVEN;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_1f1228ac633fb4d3cb0e03ad02e23d39;
extern PyObject *const_str_plain_GIANT_BOARD;
extern PyObject *const_str_plain_buffer;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_CORAL_EDGE_TPU_DEV;
static PyObject *const_str_plain_ODD;
extern PyObject *const_str_digest_7b1b39b143d57c01cb563cf6e2abebeb;
static PyObject *const_str_digest_6e662eb86859be8adce9b83e6bb07217;
extern PyObject *const_str_plain_out_end;
extern PyObject *const_str_plain_any_raspberry_pi;
static PyObject *const_tuple_3783bd469833257dbe24f8a8bce6c9b7_tuple;
extern PyObject *const_str_plain_i2cPorts;
extern PyObject *const_str_plain_buf;
static PyObject *const_str_plain_memoryview;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_board_id;
static PyObject *const_str_digest_20a8726c6072529a3ee3678b83e80986;
extern PyObject *const_str_plain_buffer_out;
static PyObject *const_str_digest_f6463a9e4f9ba98dcc70831d97062d31;
extern PyObject *const_str_digest_8a90b7bc90ab321ed5fdeb2f8c407d36;
static PyObject *const_str_digest_ce6d54f226df71c96d0452299f323856;
static PyObject *const_int_pos_1000;
static PyObject *const_tuple_str_plain_board_id_str_plain_detector_tuple;
extern PyObject *const_str_digest_8eeb75553705ba0dd652b93d50f3a4ac;
extern PyObject *const_str_plain_in_start;
static PyObject *const_str_plain_tx;
static PyObject *const_str_plain_rx;
static PyObject *const_str_digest_21e1d84b542bdbb523d654374ba2fe57;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_4e256d114264995ca73901ec126f97c3;
static PyObject *const_tuple_acddb50595164bb57fc1e3d97d968d64_tuple;
static PyObject *const_str_plain__I2C;
extern PyObject *const_str_plain_firstbit;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_int_pos_64;
static PyObject *const_str_plain__UART;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_deinit;
extern PyObject *const_dict_bd9acfb6650818d787e11cf74e7981d1;
extern PyObject *const_str_plain_Enum;
static PyObject *const_tuple_58cf021ac937efda0bb699f4395e63f4_tuple;
static PyObject *const_str_digest_17b84cd9551e6d49511b289faa1b0e4c;
extern PyObject *const_str_digest_0daddf6c4886f3926c22848feb4b084b;
static PyObject *const_tuple_str_plain_UART_tuple;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_2f90ea6b5af7b0b85aec7ddb197e2464_tuple;
static PyObject *const_tuple_str_plain_spiPorts_tuple;
static PyObject *const_str_plain_machine;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_portMiso;
static PyObject *const_str_plain__pinIds;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_plain_UART;
extern PyObject *const_tuple_c5266559b4545301f11ca05d84cab86b_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_SPI;
extern PyObject *const_str_plain_detector;
extern PyObject *const_str_digest_27590e9627cdd4999c774bf4c1f1962f;
extern PyObject *const_str_plain_any_beaglebone;
extern PyObject *const_str_plain__locked;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_ORANGE_PI_R1;
extern PyObject *const_str_plain_baudrate;
static PyObject *const_str_digest_e2dba374cc149d5aaee823f451e04867;
extern PyObject *const_str_plain_I2C;
static PyObject *const_tuple_int_pos_400000_tuple;
static PyObject *const_tuple_5ccec0608b977d3f660ce8fb16b7be92_tuple;
static PyObject *const_str_digest_ed065d1af1912bf2d3e92d0b74ef81be;
extern PyObject *const_str_plain_stop;
extern PyObject *const_str_digest_042902472e0ae572ba4bf463d0fc37cd;
extern PyObject *const_str_plain_readfrom_into;
extern PyObject *const_tuple_str_plain_Pin_tuple;
static PyObject *const_str_digest_d62ccf3a01905b1fd56a98b1f09253ae;
extern PyObject *const_str_plain_exc_value;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_plain_ap_board;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_MSB;
extern PyObject *const_str_plain_address;
static PyObject *const_str_plain_sda;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_uartPorts;
static PyObject *const_int_pos_400000;
extern PyObject *const_str_plain_any_embedded_linux;
static PyObject *const_tuple_4a51954a84a1d81b9cc9dbf3048ebc7e_tuple;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain_readinto;
static PyObject *const_str_plain_portSda;
extern PyObject *const_str_plain_in_end;
extern PyObject *const_str_plain_writeto_then_readfrom;
extern PyObject *const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_scan;
static PyObject *const_str_plain_portMosi;
extern PyObject *const_str_plain_format;
static PyObject *const_str_digest_17f991a0fbbb017291c47b5565c8d18d;
static PyObject *const_str_plain_configure;
static PyObject *const_str_plain_scl;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_plain_portSck;
extern PyObject *const_str_plain_adafruit_blinka;
extern PyObject *const_str_plain_spiPorts;
extern PyObject *const_str_plain_Lockable;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_5e05cf7762ec0d4f732140f1fa27c914_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_5e05cf7762ec0d4f732140f1fa27c914_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_5e05cf7762ec0d4f732140f1fa27c914_tuple, 1, const_str_plain_buffer_out ); Py_INCREF( const_str_plain_buffer_out );
    PyTuple_SET_ITEM( const_tuple_5e05cf7762ec0d4f732140f1fa27c914_tuple, 2, const_str_plain_buffer_in ); Py_INCREF( const_str_plain_buffer_in );
    PyTuple_SET_ITEM( const_tuple_5e05cf7762ec0d4f732140f1fa27c914_tuple, 3, const_str_plain_out_start ); Py_INCREF( const_str_plain_out_start );
    PyTuple_SET_ITEM( const_tuple_5e05cf7762ec0d4f732140f1fa27c914_tuple, 4, const_str_plain_out_end ); Py_INCREF( const_str_plain_out_end );
    PyTuple_SET_ITEM( const_tuple_5e05cf7762ec0d4f732140f1fa27c914_tuple, 5, const_str_plain_in_start ); Py_INCREF( const_str_plain_in_start );
    PyTuple_SET_ITEM( const_tuple_5e05cf7762ec0d4f732140f1fa27c914_tuple, 6, const_str_plain_in_end ); Py_INCREF( const_str_plain_in_end );
    const_str_plain_portScl = UNSTREAM_STRING_ASCII( &constant_bin[ 30210 ], 7, 1 );
    const_str_digest_0735d9757ad8e5d4ec8b7ec410edcf64 = UNSTREAM_STRING_ASCII( &constant_bin[ 30217 ], 9, 0 );
    const_str_plain_nbytes = UNSTREAM_STRING_ASCII( &constant_bin[ 30226 ], 6, 1 );
    const_str_digest_4a7345505cb7cac003dc637e474a7d88 = UNSTREAM_STRING_ASCII( &constant_bin[ 30232 ], 13, 0 );
    const_str_digest_1d36560db8127ee3509956e97eac89fc = UNSTREAM_STRING_ASCII( &constant_bin[ 30245 ], 14, 0 );
    const_str_digest_6809aef55b85de24b5d3fbf30c29c563 = UNSTREAM_STRING_ASCII( &constant_bin[ 30259 ], 51, 0 );
    const_str_plain_readline = UNSTREAM_STRING_ASCII( &constant_bin[ 30310 ], 8, 1 );
    const_str_digest_d6693a7a890ebd72e9fdbdacb6c2cfef = UNSTREAM_STRING_ASCII( &constant_bin[ 30318 ], 10, 0 );
    const_int_pos_9600 = PyLong_FromUnsignedLong( 9600ul );
    const_tuple_str_plain_self_str_plain_buf_str_plain_nbytes_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_buf_str_plain_nbytes_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_buf_str_plain_nbytes_tuple, 1, const_str_plain_buf ); Py_INCREF( const_str_plain_buf );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_buf_str_plain_nbytes_tuple, 2, const_str_plain_nbytes ); Py_INCREF( const_str_plain_nbytes );
    const_str_plain__uart = UNSTREAM_STRING_ASCII( &constant_bin[ 30328 ], 5, 1 );
    const_str_plain__i2c = UNSTREAM_STRING_ASCII( &constant_bin[ 2930 ], 4, 1 );
    const_tuple_str_plain_uartPorts_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_uartPorts_tuple, 0, const_str_plain_uartPorts ); Py_INCREF( const_str_plain_uartPorts );
    const_str_plain_read_buf_len = UNSTREAM_STRING_ASCII( &constant_bin[ 30333 ], 12, 1 );
    const_str_digest_c75fc79708aba974c0bab00a5f89770e = UNSTREAM_STRING_ASCII( &constant_bin[ 30345 ], 13, 0 );
    const_dict_13ade500ff25e5785a0570f89af7d3c6 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_13ade500ff25e5785a0570f89af7d3c6, const_str_plain_start, const_int_0 );
    PyDict_SetItem( const_dict_13ade500ff25e5785a0570f89af7d3c6, const_str_plain_end, Py_None );
    assert( PyDict_Size( const_dict_13ade500ff25e5785a0570f89af7d3c6 ) == 2 );
    const_tuple_str_plain_self_str_plain_buf_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_buf_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_buf_tuple, 1, const_str_plain_buf ); Py_INCREF( const_str_plain_buf );
    const_str_digest_e561117a1293b1e66f339f8beab67aeb = UNSTREAM_STRING_ASCII( &constant_bin[ 30358 ], 32, 0 );
    const_str_plain_timeout = UNSTREAM_STRING_ASCII( &constant_bin[ 30390 ], 7, 1 );
    const_str_plain_portRx = UNSTREAM_STRING_ASCII( &constant_bin[ 30397 ], 6, 1 );
    const_str_digest_4b129ba630d1386329126974bf8bb58f = UNSTREAM_STRING_ASCII( &constant_bin[ 30403 ], 8, 0 );
    const_str_digest_9525d2ff182206c4851df34a27ac7e28 = UNSTREAM_STRING_ASCII( &constant_bin[ 30411 ], 14, 0 );
    const_tuple_8a681feaa3b70ece8ae3159a2d986a0a_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_8a681feaa3b70ece8ae3159a2d986a0a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_8a681feaa3b70ece8ae3159a2d986a0a_tuple, 1, const_str_plain_buf ); Py_INCREF( const_str_plain_buf );
    PyTuple_SET_ITEM( const_tuple_8a681feaa3b70ece8ae3159a2d986a0a_tuple, 2, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_8a681feaa3b70ece8ae3159a2d986a0a_tuple, 3, const_str_plain_end ); Py_INCREF( const_str_plain_end );
    PyTuple_SET_ITEM( const_tuple_8a681feaa3b70ece8ae3159a2d986a0a_tuple, 4, const_str_plain_write_value ); Py_INCREF( const_str_plain_write_value );
    const_tuple_str_plain_self_str_plain_nbytes_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_nbytes_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_nbytes_tuple, 1, const_str_plain_nbytes ); Py_INCREF( const_str_plain_nbytes );
    const_str_plain_str = UNSTREAM_STRING_ASCII( &constant_bin[ 175 ], 3, 1 );
    const_tuple_str_plain_self_str_plain_buf_str_plain_start_str_plain_end_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_buf_str_plain_start_str_plain_end_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_buf_str_plain_start_str_plain_end_tuple, 1, const_str_plain_buf ); Py_INCREF( const_str_plain_buf );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_buf_str_plain_start_str_plain_end_tuple, 2, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_buf_str_plain_start_str_plain_end_tuple, 3, const_str_plain_end ); Py_INCREF( const_str_plain_end );
    const_str_digest_ec3c60490c5d09e695aa6fc05055faaa = UNSTREAM_STRING_ASCII( &constant_bin[ 30425 ], 180, 0 );
    const_str_plain__pins = UNSTREAM_STRING_ASCII( &constant_bin[ 30605 ], 5, 1 );
    const_tuple_a183dc631236275f8e94857bc6169f3f_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_a183dc631236275f8e94857bc6169f3f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a183dc631236275f8e94857bc6169f3f_tuple, 1, const_str_plain_clock ); Py_INCREF( const_str_plain_clock );
    PyTuple_SET_ITEM( const_tuple_a183dc631236275f8e94857bc6169f3f_tuple, 2, const_str_plain_MOSI ); Py_INCREF( const_str_plain_MOSI );
    PyTuple_SET_ITEM( const_tuple_a183dc631236275f8e94857bc6169f3f_tuple, 3, const_str_plain_MISO ); Py_INCREF( const_str_plain_MISO );
    const_str_plain__SPI = UNSTREAM_STRING_ASCII( &constant_bin[ 30610 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_a183dc631236275f8e94857bc6169f3f_tuple, 4, const_str_plain__SPI ); Py_INCREF( const_str_plain__SPI );
    PyTuple_SET_ITEM( const_tuple_a183dc631236275f8e94857bc6169f3f_tuple, 5, const_str_plain_spiPorts ); Py_INCREF( const_str_plain_spiPorts );
    const_str_plain_portId = UNSTREAM_STRING_ASCII( &constant_bin[ 30614 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_a183dc631236275f8e94857bc6169f3f_tuple, 6, const_str_plain_portId ); Py_INCREF( const_str_plain_portId );
    const_str_plain_portSck = UNSTREAM_STRING_ASCII( &constant_bin[ 30620 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_a183dc631236275f8e94857bc6169f3f_tuple, 7, const_str_plain_portSck ); Py_INCREF( const_str_plain_portSck );
    const_str_plain_portMosi = UNSTREAM_STRING_ASCII( &constant_bin[ 30627 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_a183dc631236275f8e94857bc6169f3f_tuple, 8, const_str_plain_portMosi ); Py_INCREF( const_str_plain_portMosi );
    const_str_plain_portMiso = UNSTREAM_STRING_ASCII( &constant_bin[ 30635 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_a183dc631236275f8e94857bc6169f3f_tuple, 9, const_str_plain_portMiso ); Py_INCREF( const_str_plain_portMiso );
    const_str_plain_portTx = UNSTREAM_STRING_ASCII( &constant_bin[ 30643 ], 6, 1 );
    const_tuple_str_plain_SPI_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SPI_tuple, 0, const_str_plain_SPI ); Py_INCREF( const_str_plain_SPI );
    const_tuple_str_plain_Enum_str_plain_Lockable_str_plain_agnostic_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Enum_str_plain_Lockable_str_plain_agnostic_tuple, 0, const_str_plain_Enum ); Py_INCREF( const_str_plain_Enum );
    PyTuple_SET_ITEM( const_tuple_str_plain_Enum_str_plain_Lockable_str_plain_agnostic_tuple, 1, const_str_plain_Lockable ); Py_INCREF( const_str_plain_Lockable );
    PyTuple_SET_ITEM( const_tuple_str_plain_Enum_str_plain_Lockable_str_plain_agnostic_tuple, 2, const_str_plain_agnostic ); Py_INCREF( const_str_plain_agnostic );
    const_str_plain_flow = UNSTREAM_STRING_ASCII( &constant_bin[ 30649 ], 4, 1 );
    const_dict_fd673cabee27081bd7f8c6d8a32f4596 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_fd673cabee27081bd7f8c6d8a32f4596, const_str_plain_stop, Py_True );
    assert( PyDict_Size( const_dict_fd673cabee27081bd7f8c6d8a32f4596 ) == 1 );
    const_str_digest_1fb47adee9db6c08574330e5076de85f = UNSTREAM_STRING_ASCII( &constant_bin[ 30653 ], 13, 0 );
    const_str_digest_62398ab4dc1d3efd3c277bc9632b3381 = UNSTREAM_STRING_ASCII( &constant_bin[ 30666 ], 59, 0 );
    const_tuple_str_plain_i2cPorts_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_i2cPorts_tuple, 0, const_str_plain_i2cPorts ); Py_INCREF( const_str_plain_i2cPorts );
    const_str_plain_parity = UNSTREAM_STRING_ASCII( &constant_bin[ 30253 ], 6, 1 );
    const_str_plain_Parity = UNSTREAM_STRING_ASCII( &constant_bin[ 30725 ], 6, 1 );
    const_tuple_str_plain_I2C_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_I2C_tuple, 0, const_str_plain_I2C ); Py_INCREF( const_str_plain_I2C );
    const_tuple_int_pos_100000_int_0_int_0_int_pos_8_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_int_pos_100000_int_0_int_0_int_pos_8_tuple, 0, const_int_pos_100000 ); Py_INCREF( const_int_pos_100000 );
    PyTuple_SET_ITEM( const_tuple_int_pos_100000_int_0_int_0_int_pos_8_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_pos_100000_int_0_int_0_int_pos_8_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_pos_100000_int_0_int_0_int_pos_8_tuple, 3, const_int_pos_8 ); Py_INCREF( const_int_pos_8 );
    const_str_plain_receiver_buffer_size = UNSTREAM_STRING_ASCII( &constant_bin[ 30731 ], 20, 1 );
    const_str_plain_frequency = UNSTREAM_STRING_ASCII( &constant_bin[ 30751 ], 9, 1 );
    const_str_plain_EVEN = UNSTREAM_STRING_ASCII( &constant_bin[ 30760 ], 4, 1 );
    const_str_digest_1f1228ac633fb4d3cb0e03ad02e23d39 = UNSTREAM_STRING_ASCII( &constant_bin[ 30764 ], 52, 0 );
    const_str_plain_ODD = UNSTREAM_STRING_ASCII( &constant_bin[ 30816 ], 3, 1 );
    const_str_digest_6e662eb86859be8adce9b83e6bb07217 = UNSTREAM_STRING_ASCII( &constant_bin[ 30819 ], 10, 0 );
    const_tuple_3783bd469833257dbe24f8a8bce6c9b7_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_3783bd469833257dbe24f8a8bce6c9b7_tuple, 0, const_int_pos_9600 ); Py_INCREF( const_int_pos_9600 );
    PyTuple_SET_ITEM( const_tuple_3783bd469833257dbe24f8a8bce6c9b7_tuple, 1, const_int_pos_8 ); Py_INCREF( const_int_pos_8 );
    PyTuple_SET_ITEM( const_tuple_3783bd469833257dbe24f8a8bce6c9b7_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_3783bd469833257dbe24f8a8bce6c9b7_tuple, 3, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_int_pos_1000 = PyLong_FromUnsignedLong( 1000ul );
    PyTuple_SET_ITEM( const_tuple_3783bd469833257dbe24f8a8bce6c9b7_tuple, 4, const_int_pos_1000 ); Py_INCREF( const_int_pos_1000 );
    PyTuple_SET_ITEM( const_tuple_3783bd469833257dbe24f8a8bce6c9b7_tuple, 5, const_int_pos_64 ); Py_INCREF( const_int_pos_64 );
    PyTuple_SET_ITEM( const_tuple_3783bd469833257dbe24f8a8bce6c9b7_tuple, 6, Py_None ); Py_INCREF( Py_None );
    const_str_plain_memoryview = UNSTREAM_STRING_ASCII( &constant_bin[ 30829 ], 10, 1 );
    const_str_digest_20a8726c6072529a3ee3678b83e80986 = UNSTREAM_STRING_ASCII( &constant_bin[ 30839 ], 21, 0 );
    const_str_digest_f6463a9e4f9ba98dcc70831d97062d31 = UNSTREAM_STRING_ASCII( &constant_bin[ 30860 ], 13, 0 );
    const_str_digest_ce6d54f226df71c96d0452299f323856 = UNSTREAM_STRING_ASCII( &constant_bin[ 30873 ], 11, 0 );
    const_tuple_str_plain_board_id_str_plain_detector_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_board_id_str_plain_detector_tuple, 0, const_str_plain_board_id ); Py_INCREF( const_str_plain_board_id );
    PyTuple_SET_ITEM( const_tuple_str_plain_board_id_str_plain_detector_tuple, 1, const_str_plain_detector ); Py_INCREF( const_str_plain_detector );
    const_str_plain_tx = UNSTREAM_STRING_ASCII( &constant_bin[ 21495 ], 2, 1 );
    const_str_plain_rx = UNSTREAM_STRING_ASCII( &constant_bin[ 30283 ], 2, 1 );
    const_str_digest_21e1d84b542bdbb523d654374ba2fe57 = UNSTREAM_STRING_ASCII( &constant_bin[ 30884 ], 10, 0 );
    const_tuple_acddb50595164bb57fc1e3d97d968d64_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_acddb50595164bb57fc1e3d97d968d64_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_acddb50595164bb57fc1e3d97d968d64_tuple, 1, const_str_plain_address ); Py_INCREF( const_str_plain_address );
    PyTuple_SET_ITEM( const_tuple_acddb50595164bb57fc1e3d97d968d64_tuple, 2, const_str_plain_buffer_out ); Py_INCREF( const_str_plain_buffer_out );
    PyTuple_SET_ITEM( const_tuple_acddb50595164bb57fc1e3d97d968d64_tuple, 3, const_str_plain_buffer_in ); Py_INCREF( const_str_plain_buffer_in );
    PyTuple_SET_ITEM( const_tuple_acddb50595164bb57fc1e3d97d968d64_tuple, 4, const_str_plain_out_start ); Py_INCREF( const_str_plain_out_start );
    PyTuple_SET_ITEM( const_tuple_acddb50595164bb57fc1e3d97d968d64_tuple, 5, const_str_plain_out_end ); Py_INCREF( const_str_plain_out_end );
    PyTuple_SET_ITEM( const_tuple_acddb50595164bb57fc1e3d97d968d64_tuple, 6, const_str_plain_in_start ); Py_INCREF( const_str_plain_in_start );
    PyTuple_SET_ITEM( const_tuple_acddb50595164bb57fc1e3d97d968d64_tuple, 7, const_str_plain_in_end ); Py_INCREF( const_str_plain_in_end );
    PyTuple_SET_ITEM( const_tuple_acddb50595164bb57fc1e3d97d968d64_tuple, 8, const_str_plain_stop ); Py_INCREF( const_str_plain_stop );
    const_str_plain__I2C = UNSTREAM_STRING_ASCII( &constant_bin[ 2242 ], 4, 1 );
    const_str_plain__UART = UNSTREAM_STRING_ASCII( &constant_bin[ 30872 ], 5, 1 );
    const_tuple_58cf021ac937efda0bb699f4395e63f4_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_58cf021ac937efda0bb699f4395e63f4_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_58cf021ac937efda0bb699f4395e63f4_tuple, 1, const_str_plain_tx ); Py_INCREF( const_str_plain_tx );
    PyTuple_SET_ITEM( const_tuple_58cf021ac937efda0bb699f4395e63f4_tuple, 2, const_str_plain_rx ); Py_INCREF( const_str_plain_rx );
    PyTuple_SET_ITEM( const_tuple_58cf021ac937efda0bb699f4395e63f4_tuple, 3, const_str_plain_baudrate ); Py_INCREF( const_str_plain_baudrate );
    PyTuple_SET_ITEM( const_tuple_58cf021ac937efda0bb699f4395e63f4_tuple, 4, const_str_plain_bits ); Py_INCREF( const_str_plain_bits );
    PyTuple_SET_ITEM( const_tuple_58cf021ac937efda0bb699f4395e63f4_tuple, 5, const_str_plain_parity ); Py_INCREF( const_str_plain_parity );
    PyTuple_SET_ITEM( const_tuple_58cf021ac937efda0bb699f4395e63f4_tuple, 6, const_str_plain_stop ); Py_INCREF( const_str_plain_stop );
    PyTuple_SET_ITEM( const_tuple_58cf021ac937efda0bb699f4395e63f4_tuple, 7, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    PyTuple_SET_ITEM( const_tuple_58cf021ac937efda0bb699f4395e63f4_tuple, 8, const_str_plain_receiver_buffer_size ); Py_INCREF( const_str_plain_receiver_buffer_size );
    PyTuple_SET_ITEM( const_tuple_58cf021ac937efda0bb699f4395e63f4_tuple, 9, const_str_plain_flow ); Py_INCREF( const_str_plain_flow );
    PyTuple_SET_ITEM( const_tuple_58cf021ac937efda0bb699f4395e63f4_tuple, 10, const_str_plain__UART ); Py_INCREF( const_str_plain__UART );
    PyTuple_SET_ITEM( const_tuple_58cf021ac937efda0bb699f4395e63f4_tuple, 11, const_str_plain_uartPorts ); Py_INCREF( const_str_plain_uartPorts );
    PyTuple_SET_ITEM( const_tuple_58cf021ac937efda0bb699f4395e63f4_tuple, 12, const_str_plain_portId ); Py_INCREF( const_str_plain_portId );
    PyTuple_SET_ITEM( const_tuple_58cf021ac937efda0bb699f4395e63f4_tuple, 13, const_str_plain_portTx ); Py_INCREF( const_str_plain_portTx );
    PyTuple_SET_ITEM( const_tuple_58cf021ac937efda0bb699f4395e63f4_tuple, 14, const_str_plain_portRx ); Py_INCREF( const_str_plain_portRx );
    const_str_digest_17b84cd9551e6d49511b289faa1b0e4c = UNSTREAM_STRING_ASCII( &constant_bin[ 30894 ], 11, 0 );
    const_tuple_str_plain_UART_tuple = PyTuple_New( 1 );
    const_str_plain_UART = UNSTREAM_STRING_ASCII( &constant_bin[ 6643 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_UART_tuple, 0, const_str_plain_UART ); Py_INCREF( const_str_plain_UART );
    const_tuple_2f90ea6b5af7b0b85aec7ddb197e2464_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_2f90ea6b5af7b0b85aec7ddb197e2464_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_scl = UNSTREAM_STRING_ASCII( &constant_bin[ 30784 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_2f90ea6b5af7b0b85aec7ddb197e2464_tuple, 1, const_str_plain_scl ); Py_INCREF( const_str_plain_scl );
    const_str_plain_sda = UNSTREAM_STRING_ASCII( &constant_bin[ 30788 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_2f90ea6b5af7b0b85aec7ddb197e2464_tuple, 2, const_str_plain_sda ); Py_INCREF( const_str_plain_sda );
    PyTuple_SET_ITEM( const_tuple_2f90ea6b5af7b0b85aec7ddb197e2464_tuple, 3, const_str_plain_frequency ); Py_INCREF( const_str_plain_frequency );
    const_tuple_str_plain_spiPorts_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_spiPorts_tuple, 0, const_str_plain_spiPorts ); Py_INCREF( const_str_plain_spiPorts );
    const_str_plain_machine = UNSTREAM_STRING_ASCII( &constant_bin[ 30905 ], 7, 1 );
    const_str_plain__pinIds = UNSTREAM_STRING_ASCII( &constant_bin[ 30912 ], 7, 1 );
    const_str_digest_e2dba374cc149d5aaee823f451e04867 = UNSTREAM_STRING_ASCII( &constant_bin[ 30919 ], 8, 0 );
    const_tuple_int_pos_400000_tuple = PyTuple_New( 1 );
    const_int_pos_400000 = PyLong_FromUnsignedLong( 400000ul );
    PyTuple_SET_ITEM( const_tuple_int_pos_400000_tuple, 0, const_int_pos_400000 ); Py_INCREF( const_int_pos_400000 );
    const_tuple_5ccec0608b977d3f660ce8fb16b7be92_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_5ccec0608b977d3f660ce8fb16b7be92_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_5ccec0608b977d3f660ce8fb16b7be92_tuple, 1, const_str_plain_baudrate ); Py_INCREF( const_str_plain_baudrate );
    PyTuple_SET_ITEM( const_tuple_5ccec0608b977d3f660ce8fb16b7be92_tuple, 2, const_str_plain_polarity ); Py_INCREF( const_str_plain_polarity );
    PyTuple_SET_ITEM( const_tuple_5ccec0608b977d3f660ce8fb16b7be92_tuple, 3, const_str_plain_phase ); Py_INCREF( const_str_plain_phase );
    PyTuple_SET_ITEM( const_tuple_5ccec0608b977d3f660ce8fb16b7be92_tuple, 4, const_str_plain_bits ); Py_INCREF( const_str_plain_bits );
    PyTuple_SET_ITEM( const_tuple_5ccec0608b977d3f660ce8fb16b7be92_tuple, 5, const_str_plain_Pin ); Py_INCREF( const_str_plain_Pin );
    PyTuple_SET_ITEM( const_tuple_5ccec0608b977d3f660ce8fb16b7be92_tuple, 6, const_str_plain__SPI ); Py_INCREF( const_str_plain__SPI );
    const_str_digest_ed065d1af1912bf2d3e92d0b74ef81be = UNSTREAM_STRING_ASCII( &constant_bin[ 30927 ], 13, 0 );
    const_str_digest_d62ccf3a01905b1fd56a98b1f09253ae = UNSTREAM_STRING_ASCII( &constant_bin[ 30940 ], 71, 0 );
    const_str_plain_ap_board = UNSTREAM_STRING_ASCII( &constant_bin[ 31011 ], 8, 1 );
    const_tuple_4a51954a84a1d81b9cc9dbf3048ebc7e_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_4a51954a84a1d81b9cc9dbf3048ebc7e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4a51954a84a1d81b9cc9dbf3048ebc7e_tuple, 1, const_str_plain_scl ); Py_INCREF( const_str_plain_scl );
    PyTuple_SET_ITEM( const_tuple_4a51954a84a1d81b9cc9dbf3048ebc7e_tuple, 2, const_str_plain_sda ); Py_INCREF( const_str_plain_sda );
    PyTuple_SET_ITEM( const_tuple_4a51954a84a1d81b9cc9dbf3048ebc7e_tuple, 3, const_str_plain_frequency ); Py_INCREF( const_str_plain_frequency );
    PyTuple_SET_ITEM( const_tuple_4a51954a84a1d81b9cc9dbf3048ebc7e_tuple, 4, const_str_plain__I2C ); Py_INCREF( const_str_plain__I2C );
    PyTuple_SET_ITEM( const_tuple_4a51954a84a1d81b9cc9dbf3048ebc7e_tuple, 5, const_str_plain_i2cPorts ); Py_INCREF( const_str_plain_i2cPorts );
    PyTuple_SET_ITEM( const_tuple_4a51954a84a1d81b9cc9dbf3048ebc7e_tuple, 6, const_str_plain_portId ); Py_INCREF( const_str_plain_portId );
    PyTuple_SET_ITEM( const_tuple_4a51954a84a1d81b9cc9dbf3048ebc7e_tuple, 7, const_str_plain_portScl ); Py_INCREF( const_str_plain_portScl );
    const_str_plain_portSda = UNSTREAM_STRING_ASCII( &constant_bin[ 31019 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_4a51954a84a1d81b9cc9dbf3048ebc7e_tuple, 8, const_str_plain_portSda ); Py_INCREF( const_str_plain_portSda );
    const_str_digest_17f991a0fbbb017291c47b5565c8d18d = UNSTREAM_STRING_ASCII( &constant_bin[ 31026 ], 12, 0 );
    const_str_plain_configure = UNSTREAM_STRING_ASCII( &constant_bin[ 30349 ], 9, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_busio( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f67867df5c2b8dc929ca3afd89317a1c;
static PyCodeObject *codeobj_abccb80909eba7f7b99632a7b8905200;
static PyCodeObject *codeobj_42563ab4225941908f3257de174a961e;
static PyCodeObject *codeobj_c68f752ccd7f8053442a693aac654fee;
static PyCodeObject *codeobj_b3f9b2128e5b3cb7176744c20ee2db75;
static PyCodeObject *codeobj_d86bcf1fa8f3b7fa1191213a8f44f82d;
static PyCodeObject *codeobj_a38a20c43a64658745bc07a29bc4a04c;
static PyCodeObject *codeobj_b3a88b9e73949fa7eea4c20f14598266;
static PyCodeObject *codeobj_bdc0fc3236b6ac949e4dfa52a3ff5e09;
static PyCodeObject *codeobj_d07cff22b21aefd96944100f593452f3;
static PyCodeObject *codeobj_dff8381c8f9a8162a34012e2d58a35c5;
static PyCodeObject *codeobj_3f0a59487159d599810394da57331112;
static PyCodeObject *codeobj_9035c2a47b7065891c9067ea1ae6839f;
static PyCodeObject *codeobj_c92339785e4716153e025574d43a4864;
static PyCodeObject *codeobj_b3a6e4cc4c31951fe87824bb6f8bc182;
static PyCodeObject *codeobj_b5730302ec0482584eab2d8cd28a2294;
static PyCodeObject *codeobj_a34d827081845a3a5f26c66df6fd0a73;
static PyCodeObject *codeobj_0026c0d0d564354878e7015a5011078a;
static PyCodeObject *codeobj_c7dacc4836f0cdc802ef0f0b70da5368;
static PyCodeObject *codeobj_a17f1ac4a12957f997cf5c52a544f24d;
static PyCodeObject *codeobj_ab396123cd37927b225100e84d717ba5;
static PyCodeObject *codeobj_aa094631bba4a07ddbc32eaa3be5a0a8;
static PyCodeObject *codeobj_c464e1bcac2567c8b4125128e88d32a0;
static PyCodeObject *codeobj_9f5a529fc52240a54b6600739f19fd00;
static PyCodeObject *codeobj_86a5712905a3346d7566c4951daa19d9;
static PyCodeObject *codeobj_d9598f3cfefbd02a50510d9d3c303022;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_e2dba374cc149d5aaee823f451e04867 );
    codeobj_f67867df5c2b8dc929ca3afd89317a1c = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 59, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_abccb80909eba7f7b99632a7b8905200 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_9525d2ff182206c4851df34a27ac7e28, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_42563ab4225941908f3257de174a961e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_I2C, 14, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_c68f752ccd7f8053442a693aac654fee = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SPI, 72, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_b3f9b2128e5b3cb7176744c20ee2db75 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_UART, 147, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_d86bcf1fa8f3b7fa1191213a8f44f82d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___enter__, 40, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a38a20c43a64658745bc07a29bc4a04c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___exit__, 43, const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b3a88b9e73949fa7eea4c20f14598266 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 15, const_tuple_2f90ea6b5af7b0b85aec7ddb197e2464_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bdc0fc3236b6ac949e4dfa52a3ff5e09 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 73, const_tuple_a183dc631236275f8e94857bc6169f3f_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d07cff22b21aefd96944100f593452f3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 154, const_tuple_58cf021ac937efda0bb699f4395e63f4_tuple, 10, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dff8381c8f9a8162a34012e2d58a35c5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_configure, 92, const_tuple_5ccec0608b977d3f660ce8fb16b7be92_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3f0a59487159d599810394da57331112 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_deinit, 34, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9035c2a47b7065891c9067ea1ae6839f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_deinit, 133, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c92339785e4716153e025574d43a4864 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_deinit, 205, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b3a6e4cc4c31951fe87824bb6f8bc182 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_init, 18, const_tuple_4a51954a84a1d81b9cc9dbf3048ebc7e_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b5730302ec0482584eab2d8cd28a2294 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read, 208, const_tuple_str_plain_self_str_plain_nbytes_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a34d827081845a3a5f26c66df6fd0a73 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_readfrom_into, 49, const_tuple_c5266559b4545301f11ca05d84cab86b_tuple, 3, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0026c0d0d564354878e7015a5011078a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_readinto, 140, const_tuple_8a681feaa3b70ece8ae3159a2d986a0a_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c7dacc4836f0cdc802ef0f0b70da5368 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_readinto, 211, const_tuple_str_plain_self_str_plain_buf_str_plain_nbytes_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a17f1ac4a12957f997cf5c52a544f24d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_readline, 214, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ab396123cd37927b225100e84d717ba5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_scan, 46, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_aa094631bba4a07ddbc32eaa3be5a0a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_write, 137, const_tuple_str_plain_self_str_plain_buf_str_plain_start_str_plain_end_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c464e1bcac2567c8b4125128e88d32a0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_write, 217, const_tuple_str_plain_self_str_plain_buf_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9f5a529fc52240a54b6600739f19fd00 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_write_readinto, 143, const_tuple_5e05cf7762ec0d4f732140f1fa27c914_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_86a5712905a3346d7566c4951daa19d9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_writeto, 57, const_tuple_c5266559b4545301f11ca05d84cab86b_tuple, 3, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d9598f3cfefbd02a50510d9d3c303022 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_writeto_then_readfrom, 67, const_tuple_acddb50595164bb57fc1e3d97d968d64_tuple, 4, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_busio$$$function_10___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_busio$$$function_11_configure( PyObject *defaults );


static PyObject *MAKE_FUNCTION_busio$$$function_12_deinit(  );


static PyObject *MAKE_FUNCTION_busio$$$function_13_write( PyObject *defaults );


static PyObject *MAKE_FUNCTION_busio$$$function_14_readinto( PyObject *defaults );


static PyObject *MAKE_FUNCTION_busio$$$function_15_write_readinto( PyObject *defaults );


static PyObject *MAKE_FUNCTION_busio$$$function_16___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_busio$$$function_17_deinit(  );


static PyObject *MAKE_FUNCTION_busio$$$function_18_read( PyObject *defaults );


static PyObject *MAKE_FUNCTION_busio$$$function_19_readinto( PyObject *defaults );


static PyObject *MAKE_FUNCTION_busio$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_busio$$$function_20_readline(  );


static PyObject *MAKE_FUNCTION_busio$$$function_21_write(  );


static PyObject *MAKE_FUNCTION_busio$$$function_2_init(  );


static PyObject *MAKE_FUNCTION_busio$$$function_3_deinit(  );


static PyObject *MAKE_FUNCTION_busio$$$function_4___enter__(  );


static PyObject *MAKE_FUNCTION_busio$$$function_5___exit__(  );


static PyObject *MAKE_FUNCTION_busio$$$function_6_scan(  );


static PyObject *MAKE_FUNCTION_busio$$$function_7_readfrom_into( PyObject *kw_defaults );


static PyObject *MAKE_FUNCTION_busio$$$function_8_writeto( PyObject *kw_defaults );


static PyObject *MAKE_FUNCTION_busio$$$function_9_writeto_then_readfrom( PyObject *kw_defaults );


// The module function definitions.
static PyObject *impl_busio$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_scl = python_pars[ 1 ];
    PyObject *par_sda = python_pars[ 2 ];
    PyObject *par_frequency = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_b3a88b9e73949fa7eea4c20f14598266;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b3a88b9e73949fa7eea4c20f14598266 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b3a88b9e73949fa7eea4c20f14598266, codeobj_b3a88b9e73949fa7eea4c20f14598266, module_busio, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b3a88b9e73949fa7eea4c20f14598266 = cache_frame_b3a88b9e73949fa7eea4c20f14598266;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b3a88b9e73949fa7eea4c20f14598266 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b3a88b9e73949fa7eea4c20f14598266 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_scl );
        tmp_args_element_name_1 = par_scl;
        CHECK_OBJECT( par_sda );
        tmp_args_element_name_2 = par_sda;
        CHECK_OBJECT( par_frequency );
        tmp_args_element_name_3 = par_frequency;
        frame_b3a88b9e73949fa7eea4c20f14598266->m_frame.f_lineno = 16;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_init, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3a88b9e73949fa7eea4c20f14598266 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3a88b9e73949fa7eea4c20f14598266 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b3a88b9e73949fa7eea4c20f14598266, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b3a88b9e73949fa7eea4c20f14598266->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b3a88b9e73949fa7eea4c20f14598266, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b3a88b9e73949fa7eea4c20f14598266,
        type_description_1,
        par_self,
        par_scl,
        par_sda,
        par_frequency
    );


    // Release cached frame.
    if ( frame_b3a88b9e73949fa7eea4c20f14598266 == cache_frame_b3a88b9e73949fa7eea4c20f14598266 )
    {
        Py_DECREF( frame_b3a88b9e73949fa7eea4c20f14598266 );
    }
    cache_frame_b3a88b9e73949fa7eea4c20f14598266 = NULL;

    assertFrameObject( frame_b3a88b9e73949fa7eea4c20f14598266 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_scl );
    Py_DECREF( par_scl );
    par_scl = NULL;

    CHECK_OBJECT( (PyObject *)par_sda );
    Py_DECREF( par_sda );
    par_sda = NULL;

    CHECK_OBJECT( (PyObject *)par_frequency );
    Py_DECREF( par_frequency );
    par_frequency = NULL;

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

    CHECK_OBJECT( (PyObject *)par_scl );
    Py_DECREF( par_scl );
    par_scl = NULL;

    CHECK_OBJECT( (PyObject *)par_sda );
    Py_DECREF( par_sda );
    par_sda = NULL;

    CHECK_OBJECT( (PyObject *)par_frequency );
    Py_DECREF( par_frequency );
    par_frequency = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( busio$$$function_1___init__ );
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


static PyObject *impl_busio$$$function_2_init( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_scl = python_pars[ 1 ];
    PyObject *par_sda = python_pars[ 2 ];
    PyObject *par_frequency = python_pars[ 3 ];
    PyObject *var__I2C = NULL;
    PyObject *var_i2cPorts = NULL;
    PyObject *var_portId = NULL;
    PyObject *var_portScl = NULL;
    PyObject *var_portSda = NULL;
    nuitka_bool tmp_for_loop_1__break_indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b3a6e4cc4c31951fe87824bb6f8bc182;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_b3a6e4cc4c31951fe87824bb6f8bc182 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b3a6e4cc4c31951fe87824bb6f8bc182, codeobj_b3a6e4cc4c31951fe87824bb6f8bc182, module_busio, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b3a6e4cc4c31951fe87824bb6f8bc182 = cache_frame_b3a6e4cc4c31951fe87824bb6f8bc182;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b3a6e4cc4c31951fe87824bb6f8bc182 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b3a6e4cc4c31951fe87824bb6f8bc182 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_b3a6e4cc4c31951fe87824bb6f8bc182->m_frame.f_lineno = 19;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_deinit );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_detector );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_detector );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "detector" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 20;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_board );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_any_embedded_linux );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 20;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_import_name_from_1;
            PyObject *tmp_name_name_1;
            PyObject *tmp_globals_name_1;
            PyObject *tmp_locals_name_1;
            PyObject *tmp_fromlist_name_1;
            PyObject *tmp_level_name_1;
            tmp_name_name_1 = const_str_digest_0e0545f125585b80111045982f829c0c;
            tmp_globals_name_1 = (PyObject *)moduledict_busio;
            tmp_locals_name_1 = Py_None;
            tmp_fromlist_name_1 = const_tuple_str_plain_I2C_tuple;
            tmp_level_name_1 = const_int_0;
            frame_b3a6e4cc4c31951fe87824bb6f8bc182->m_frame.f_lineno = 21;
            tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
            if ( tmp_import_name_from_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_I2C );
            Py_DECREF( tmp_import_name_from_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var__I2C == NULL );
            var__I2C = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_import_name_from_2;
            PyObject *tmp_name_name_2;
            PyObject *tmp_globals_name_2;
            PyObject *tmp_locals_name_2;
            PyObject *tmp_fromlist_name_2;
            PyObject *tmp_level_name_2;
            tmp_name_name_2 = const_str_plain_machine;
            tmp_globals_name_2 = (PyObject *)moduledict_busio;
            tmp_locals_name_2 = Py_None;
            tmp_fromlist_name_2 = const_tuple_str_plain_I2C_tuple;
            tmp_level_name_2 = const_int_0;
            frame_b3a6e4cc4c31951fe87824bb6f8bc182->m_frame.f_lineno = 23;
            tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
            if ( tmp_import_name_from_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_I2C );
            Py_DECREF( tmp_import_name_from_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var__I2C == NULL );
            var__I2C = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_4e7aad7c88b0724a830e614462e04cb4;
        tmp_globals_name_3 = (PyObject *)moduledict_busio;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_i2cPorts_tuple;
        tmp_level_name_3 = const_int_0;
        frame_b3a6e4cc4c31951fe87824bb6f8bc182->m_frame.f_lineno = 24;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_i2cPorts );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_i2cPorts == NULL );
        var_i2cPorts = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_FALSE;
        tmp_for_loop_1__break_indicator = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_i2cPorts );
        tmp_iter_arg_1 = var_i2cPorts;
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_value_name_1;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_value_name_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT( tmp_value_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 25;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = exception_keeper_type_1;
        tmp_compexpr_right_1 = PyExc_StopIteration;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_1 );
            Py_XDECREF( exception_keeper_value_1 );
            Py_XDECREF( exception_keeper_tb_1 );

            exception_lineno = 25;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
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
            nuitka_bool tmp_assign_source_7;
            tmp_assign_source_7 = NUITKA_BOOL_TRUE;
            tmp_for_loop_1__break_indicator = tmp_assign_source_7;
        }
        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );
        goto loop_end_1;
        goto branch_end_2;
        branch_no_2:;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_3;
        branch_end_2:;
    }
    // End of try:
    try_end_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
        if ( tmp_assign_source_9 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 25;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
        if ( tmp_assign_source_10 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 25;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
        if ( tmp_assign_source_11 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 25;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "ooooooooo";
                    exception_lineno = 25;
                    goto try_except_handler_6;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooo";
            exception_lineno = 25;
            goto try_except_handler_6;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_5;
    // End of try:
    try_end_2:;
    goto try_end_3;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_portId;
            var_portId = tmp_assign_source_12;
            Py_INCREF( var_portId );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_portScl;
            var_portScl = tmp_assign_source_13;
            Py_INCREF( var_portScl );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_portSda;
            var_portSda = tmp_assign_source_14;
            Py_INCREF( var_portSda );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_scl );
        tmp_compexpr_left_2 = par_scl;
        CHECK_OBJECT( var_portScl );
        tmp_compexpr_right_2 = var_portScl;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT( par_sda );
        tmp_compexpr_left_3 = par_sda;
        CHECK_OBJECT( var_portSda );
        tmp_compexpr_right_3 = var_portSda;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( var__I2C );
            tmp_called_name_1 = var__I2C;
            CHECK_OBJECT( var_portId );
            tmp_tuple_element_1 = var_portId;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_mode;
            CHECK_OBJECT( var__I2C );
            tmp_source_name_3 = var__I2C;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_MASTER );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 27;
                type_description_1 = "ooooooooo";
                goto try_except_handler_3;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_baudrate;
            CHECK_OBJECT( par_frequency );
            tmp_dict_value_2 = par_frequency;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_b3a6e4cc4c31951fe87824bb6f8bc182->m_frame.f_lineno = 27;
            tmp_assattr_name_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 27;
                type_description_1 = "ooooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__i2c, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 27;
                type_description_1 = "ooooooooo";
                goto try_except_handler_3;
            }
        }
        goto loop_end_1;
        branch_no_3:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "ooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_4;
        nuitka_bool tmp_compexpr_right_4;
        assert( tmp_for_loop_1__break_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_4 = tmp_for_loop_1__break_indicator;
        tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_args_element_name_2;
            tmp_called_instance_2 = const_str_digest_1f1228ac633fb4d3cb0e03ad02e23d39;
            CHECK_OBJECT( par_scl );
            tmp_tuple_element_2 = par_scl;
            tmp_args_element_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_sda );
            tmp_tuple_element_2 = par_sda;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( var_i2cPorts );
            tmp_args_element_name_2 = var_i2cPorts;
            frame_b3a6e4cc4c31951fe87824bb6f8bc182->m_frame.f_lineno = 31;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_make_exception_arg_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_format, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 31;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            frame_b3a6e4cc4c31951fe87824bb6f8bc182->m_frame.f_lineno = 30;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 30;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        branch_no_4:;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3a6e4cc4c31951fe87824bb6f8bc182 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3a6e4cc4c31951fe87824bb6f8bc182 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b3a6e4cc4c31951fe87824bb6f8bc182, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b3a6e4cc4c31951fe87824bb6f8bc182->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b3a6e4cc4c31951fe87824bb6f8bc182, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b3a6e4cc4c31951fe87824bb6f8bc182,
        type_description_1,
        par_self,
        par_scl,
        par_sda,
        par_frequency,
        var__I2C,
        var_i2cPorts,
        var_portId,
        var_portScl,
        var_portSda
    );


    // Release cached frame.
    if ( frame_b3a6e4cc4c31951fe87824bb6f8bc182 == cache_frame_b3a6e4cc4c31951fe87824bb6f8bc182 )
    {
        Py_DECREF( frame_b3a6e4cc4c31951fe87824bb6f8bc182 );
    }
    cache_frame_b3a6e4cc4c31951fe87824bb6f8bc182 = NULL;

    assertFrameObject( frame_b3a6e4cc4c31951fe87824bb6f8bc182 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_2_init );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_scl );
    Py_DECREF( par_scl );
    par_scl = NULL;

    CHECK_OBJECT( (PyObject *)par_sda );
    Py_DECREF( par_sda );
    par_sda = NULL;

    CHECK_OBJECT( (PyObject *)par_frequency );
    Py_DECREF( par_frequency );
    par_frequency = NULL;

    CHECK_OBJECT( (PyObject *)var__I2C );
    Py_DECREF( var__I2C );
    var__I2C = NULL;

    CHECK_OBJECT( (PyObject *)var_i2cPorts );
    Py_DECREF( var_i2cPorts );
    var_i2cPorts = NULL;

    Py_XDECREF( var_portId );
    var_portId = NULL;

    Py_XDECREF( var_portScl );
    var_portScl = NULL;

    Py_XDECREF( var_portSda );
    var_portSda = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_scl );
    Py_DECREF( par_scl );
    par_scl = NULL;

    CHECK_OBJECT( (PyObject *)par_sda );
    Py_DECREF( par_sda );
    par_sda = NULL;

    CHECK_OBJECT( (PyObject *)par_frequency );
    Py_DECREF( par_frequency );
    par_frequency = NULL;

    Py_XDECREF( var__I2C );
    var__I2C = NULL;

    Py_XDECREF( var_i2cPorts );
    var_i2cPorts = NULL;

    Py_XDECREF( var_portId );
    var_portId = NULL;

    Py_XDECREF( var_portScl );
    var_portScl = NULL;

    Py_XDECREF( var_portSda );
    var_portSda = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( busio$$$function_2_init );
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


static PyObject *impl_busio$$$function_3_deinit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_3f0a59487159d599810394da57331112;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_3f0a59487159d599810394da57331112 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3f0a59487159d599810394da57331112, codeobj_3f0a59487159d599810394da57331112, module_busio, sizeof(void *) );
    frame_3f0a59487159d599810394da57331112 = cache_frame_3f0a59487159d599810394da57331112;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3f0a59487159d599810394da57331112 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3f0a59487159d599810394da57331112 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_attrdel_target_1;
        CHECK_OBJECT( par_self );
        tmp_attrdel_target_1 = par_self;
        tmp_res = PyObject_DelAttr( tmp_attrdel_target_1, const_str_plain__i2c );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_3f0a59487159d599810394da57331112, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_3f0a59487159d599810394da57331112, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "o";
            goto try_except_handler_3;
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
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 35;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_3f0a59487159d599810394da57331112->m_frame) frame_3f0a59487159d599810394da57331112->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "o";
        goto try_except_handler_3;
        branch_no_1:;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
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
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_3_deinit );
    return NULL;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f0a59487159d599810394da57331112 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f0a59487159d599810394da57331112 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3f0a59487159d599810394da57331112, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3f0a59487159d599810394da57331112->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3f0a59487159d599810394da57331112, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3f0a59487159d599810394da57331112,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_3f0a59487159d599810394da57331112 == cache_frame_3f0a59487159d599810394da57331112 )
    {
        Py_DECREF( frame_3f0a59487159d599810394da57331112 );
    }
    cache_frame_3f0a59487159d599810394da57331112 = NULL;

    assertFrameObject( frame_3f0a59487159d599810394da57331112 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_3_deinit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( busio$$$function_3_deinit );
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


static PyObject *impl_busio$$$function_4___enter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_self );
    tmp_return_value = par_self;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_4___enter__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( busio$$$function_4___enter__ );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_busio$$$function_5___exit__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_exc_type = python_pars[ 1 ];
    PyObject *par_exc_value = python_pars[ 2 ];
    PyObject *par_traceback = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_a38a20c43a64658745bc07a29bc4a04c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a38a20c43a64658745bc07a29bc4a04c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a38a20c43a64658745bc07a29bc4a04c, codeobj_a38a20c43a64658745bc07a29bc4a04c, module_busio, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a38a20c43a64658745bc07a29bc4a04c = cache_frame_a38a20c43a64658745bc07a29bc4a04c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a38a20c43a64658745bc07a29bc4a04c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a38a20c43a64658745bc07a29bc4a04c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_a38a20c43a64658745bc07a29bc4a04c->m_frame.f_lineno = 44;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_deinit );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a38a20c43a64658745bc07a29bc4a04c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a38a20c43a64658745bc07a29bc4a04c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a38a20c43a64658745bc07a29bc4a04c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a38a20c43a64658745bc07a29bc4a04c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a38a20c43a64658745bc07a29bc4a04c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a38a20c43a64658745bc07a29bc4a04c,
        type_description_1,
        par_self,
        par_exc_type,
        par_exc_value,
        par_traceback
    );


    // Release cached frame.
    if ( frame_a38a20c43a64658745bc07a29bc4a04c == cache_frame_a38a20c43a64658745bc07a29bc4a04c )
    {
        Py_DECREF( frame_a38a20c43a64658745bc07a29bc4a04c );
    }
    cache_frame_a38a20c43a64658745bc07a29bc4a04c = NULL;

    assertFrameObject( frame_a38a20c43a64658745bc07a29bc4a04c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_5___exit__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_exc_type );
    Py_DECREF( par_exc_type );
    par_exc_type = NULL;

    CHECK_OBJECT( (PyObject *)par_exc_value );
    Py_DECREF( par_exc_value );
    par_exc_value = NULL;

    CHECK_OBJECT( (PyObject *)par_traceback );
    Py_DECREF( par_traceback );
    par_traceback = NULL;

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

    CHECK_OBJECT( (PyObject *)par_exc_type );
    Py_DECREF( par_exc_type );
    par_exc_type = NULL;

    CHECK_OBJECT( (PyObject *)par_exc_value );
    Py_DECREF( par_exc_value );
    par_exc_value = NULL;

    CHECK_OBJECT( (PyObject *)par_traceback );
    Py_DECREF( par_traceback );
    par_traceback = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( busio$$$function_5___exit__ );
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


static PyObject *impl_busio$$$function_6_scan( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_ab396123cd37927b225100e84d717ba5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ab396123cd37927b225100e84d717ba5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ab396123cd37927b225100e84d717ba5, codeobj_ab396123cd37927b225100e84d717ba5, module_busio, sizeof(void *) );
    frame_ab396123cd37927b225100e84d717ba5 = cache_frame_ab396123cd37927b225100e84d717ba5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ab396123cd37927b225100e84d717ba5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ab396123cd37927b225100e84d717ba5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__i2c );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ab396123cd37927b225100e84d717ba5->m_frame.f_lineno = 47;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_scan );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ab396123cd37927b225100e84d717ba5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ab396123cd37927b225100e84d717ba5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ab396123cd37927b225100e84d717ba5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ab396123cd37927b225100e84d717ba5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ab396123cd37927b225100e84d717ba5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ab396123cd37927b225100e84d717ba5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ab396123cd37927b225100e84d717ba5,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_ab396123cd37927b225100e84d717ba5 == cache_frame_ab396123cd37927b225100e84d717ba5 )
    {
        Py_DECREF( frame_ab396123cd37927b225100e84d717ba5 );
    }
    cache_frame_ab396123cd37927b225100e84d717ba5 = NULL;

    assertFrameObject( frame_ab396123cd37927b225100e84d717ba5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_6_scan );
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
    NUITKA_CANNOT_GET_HERE( busio$$$function_6_scan );
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


static PyObject *impl_busio$$$function_7_readfrom_into( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_address = python_pars[ 1 ];
    PyObject *par_buffer = python_pars[ 2 ];
    PyObject *par_start = python_pars[ 3 ];
    PyObject *par_end = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_a34d827081845a3a5f26c66df6fd0a73;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a34d827081845a3a5f26c66df6fd0a73 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a34d827081845a3a5f26c66df6fd0a73, codeobj_a34d827081845a3a5f26c66df6fd0a73, module_busio, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a34d827081845a3a5f26c66df6fd0a73 = cache_frame_a34d827081845a3a5f26c66df6fd0a73;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a34d827081845a3a5f26c66df6fd0a73 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a34d827081845a3a5f26c66df6fd0a73 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_start );
        tmp_compexpr_left_1 = par_start;
        tmp_compexpr_right_1 = const_int_0;
        tmp_or_left_value_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_end );
        tmp_compexpr_left_2 = par_end;
        tmp_compexpr_right_2 = Py_None;
        tmp_or_right_value_1 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( par_end );
            tmp_compexpr_left_3 = par_end;
            tmp_compexpr_right_3 = Py_None;
            tmp_condition_result_2 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_1;
                PyObject *tmp_len_arg_1;
                CHECK_OBJECT( par_buffer );
                tmp_len_arg_1 = par_buffer;
                tmp_assign_source_1 = BUILTIN_LEN( tmp_len_arg_1 );
                if ( tmp_assign_source_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 52;
                    type_description_1 = "oooooN";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_end;
                    assert( old != NULL );
                    par_end = tmp_assign_source_1;
                    Py_DECREF( old );
                }

            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_step_name_1;
            tmp_called_name_1 = (PyObject *)&PyMemoryView_Type;
            CHECK_OBJECT( par_buffer );
            tmp_args_element_name_1 = par_buffer;
            frame_a34d827081845a3a5f26c66df6fd0a73->m_frame.f_lineno = 53;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "oooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_start );
            tmp_start_name_1 = par_start;
            CHECK_OBJECT( par_end );
            tmp_stop_name_1 = par_end;
            tmp_step_name_1 = Py_None;
            tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            assert( !(tmp_subscript_name_1 == NULL) );
            tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "oooooN";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_buffer;
                assert( old != NULL );
                par_buffer = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__i2c );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_readfrom_into );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_address );
        tmp_tuple_element_1 = par_address;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_buffer );
        tmp_tuple_element_1 = par_buffer;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_fd673cabee27081bd7f8c6d8a32f4596 );
        frame_a34d827081845a3a5f26c66df6fd0a73->m_frame.f_lineno = 55;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a34d827081845a3a5f26c66df6fd0a73 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a34d827081845a3a5f26c66df6fd0a73 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a34d827081845a3a5f26c66df6fd0a73 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a34d827081845a3a5f26c66df6fd0a73, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a34d827081845a3a5f26c66df6fd0a73->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a34d827081845a3a5f26c66df6fd0a73, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a34d827081845a3a5f26c66df6fd0a73,
        type_description_1,
        par_self,
        par_address,
        par_buffer,
        par_start,
        par_end,
        NULL
    );


    // Release cached frame.
    if ( frame_a34d827081845a3a5f26c66df6fd0a73 == cache_frame_a34d827081845a3a5f26c66df6fd0a73 )
    {
        Py_DECREF( frame_a34d827081845a3a5f26c66df6fd0a73 );
    }
    cache_frame_a34d827081845a3a5f26c66df6fd0a73 = NULL;

    assertFrameObject( frame_a34d827081845a3a5f26c66df6fd0a73 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_7_readfrom_into );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_address );
    Py_DECREF( par_address );
    par_address = NULL;

    CHECK_OBJECT( (PyObject *)par_buffer );
    Py_DECREF( par_buffer );
    par_buffer = NULL;

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    Py_XDECREF( par_end );
    par_end = NULL;

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

    CHECK_OBJECT( (PyObject *)par_address );
    Py_DECREF( par_address );
    par_address = NULL;

    Py_XDECREF( par_buffer );
    par_buffer = NULL;

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    Py_XDECREF( par_end );
    par_end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( busio$$$function_7_readfrom_into );
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


static PyObject *impl_busio$$$function_8_writeto( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_address = python_pars[ 1 ];
    PyObject *par_buffer = python_pars[ 2 ];
    PyObject *par_start = python_pars[ 3 ];
    PyObject *par_end = python_pars[ 4 ];
    PyObject *par_stop = python_pars[ 5 ];
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_86a5712905a3346d7566c4951daa19d9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_f67867df5c2b8dc929ca3afd89317a1c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_f67867df5c2b8dc929ca3afd89317a1c_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_86a5712905a3346d7566c4951daa19d9 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_86a5712905a3346d7566c4951daa19d9, codeobj_86a5712905a3346d7566c4951daa19d9, module_busio, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_86a5712905a3346d7566c4951daa19d9 = cache_frame_86a5712905a3346d7566c4951daa19d9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_86a5712905a3346d7566c4951daa19d9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_86a5712905a3346d7566c4951daa19d9 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_buffer );
        tmp_isinstance_inst_1 = par_buffer;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "oooooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_bytes_arg_1;
            // Tried code:
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_iter_arg_1;
                CHECK_OBJECT( par_buffer );
                tmp_iter_arg_1 = par_buffer;
                tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 59;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                assert( tmp_listcomp_1__$0 == NULL );
                tmp_listcomp_1__$0 = tmp_assign_source_2;
            }
            {
                PyObject *tmp_assign_source_3;
                tmp_assign_source_3 = PyList_New( 0 );
                assert( tmp_listcomp_1__contraction == NULL );
                tmp_listcomp_1__contraction = tmp_assign_source_3;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_f67867df5c2b8dc929ca3afd89317a1c_2, codeobj_f67867df5c2b8dc929ca3afd89317a1c, module_busio, sizeof(void *) );
            frame_f67867df5c2b8dc929ca3afd89317a1c_2 = cache_frame_f67867df5c2b8dc929ca3afd89317a1c_2;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_f67867df5c2b8dc929ca3afd89317a1c_2 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_f67867df5c2b8dc929ca3afd89317a1c_2 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_4;
                CHECK_OBJECT( tmp_listcomp_1__$0 );
                tmp_next_source_1 = tmp_listcomp_1__$0;
                tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
                if ( tmp_assign_source_4 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_1;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_2 = "o";
                        exception_lineno = 59;
                        goto try_except_handler_3;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_1__iter_value_0;
                    tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_5;
                CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
                tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_0_var_x;
                    outline_0_var_x = tmp_assign_source_5;
                    Py_INCREF( outline_0_var_x );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_ord_arg_1;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                CHECK_OBJECT( outline_0_var_x );
                tmp_ord_arg_1 = outline_0_var_x;
                tmp_append_value_1 = BUILTIN_ORD( tmp_ord_arg_1 );
                if ( tmp_append_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 59;
                    type_description_2 = "o";
                    goto try_except_handler_3;
                }
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                Py_DECREF( tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 59;
                    type_description_2 = "o";
                    goto try_except_handler_3;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_bytes_arg_1 = tmp_listcomp_1__contraction;
            Py_INCREF( tmp_bytes_arg_1 );
            goto try_return_handler_3;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( busio$$$function_8_writeto );
            return NULL;
            // Return handler code:
            try_return_handler_3:;
            CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
            Py_DECREF( tmp_listcomp_1__$0 );
            tmp_listcomp_1__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
            Py_DECREF( tmp_listcomp_1__contraction );
            tmp_listcomp_1__contraction = NULL;

            Py_XDECREF( tmp_listcomp_1__iter_value_0 );
            tmp_listcomp_1__iter_value_0 = NULL;

            goto frame_return_exit_2;
            // Exception handler code:
            try_except_handler_3:;
            exception_keeper_type_1 = exception_type;
            exception_keeper_value_1 = exception_value;
            exception_keeper_tb_1 = exception_tb;
            exception_keeper_lineno_1 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
            Py_DECREF( tmp_listcomp_1__$0 );
            tmp_listcomp_1__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
            Py_DECREF( tmp_listcomp_1__contraction );
            tmp_listcomp_1__contraction = NULL;

            Py_XDECREF( tmp_listcomp_1__iter_value_0 );
            tmp_listcomp_1__iter_value_0 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto frame_exception_exit_2;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION( frame_f67867df5c2b8dc929ca3afd89317a1c_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_2:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_f67867df5c2b8dc929ca3afd89317a1c_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_2;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_f67867df5c2b8dc929ca3afd89317a1c_2 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_f67867df5c2b8dc929ca3afd89317a1c_2, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_f67867df5c2b8dc929ca3afd89317a1c_2->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_f67867df5c2b8dc929ca3afd89317a1c_2, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_f67867df5c2b8dc929ca3afd89317a1c_2,
                type_description_2,
                outline_0_var_x
            );


            // Release cached frame.
            if ( frame_f67867df5c2b8dc929ca3afd89317a1c_2 == cache_frame_f67867df5c2b8dc929ca3afd89317a1c_2 )
            {
                Py_DECREF( frame_f67867df5c2b8dc929ca3afd89317a1c_2 );
            }
            cache_frame_f67867df5c2b8dc929ca3afd89317a1c_2 = NULL;

            assertFrameObject( frame_f67867df5c2b8dc929ca3afd89317a1c_2 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
            skip_nested_handling_1:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( busio$$$function_8_writeto );
            return NULL;
            // Return handler code:
            try_return_handler_2:;
            Py_XDECREF( outline_0_var_x );
            outline_0_var_x = NULL;

            goto outline_result_1;
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

            Py_XDECREF( outline_0_var_x );
            outline_0_var_x = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( busio$$$function_8_writeto );
            return NULL;
            outline_exception_1:;
            exception_lineno = 59;
            goto frame_exception_exit_1;
            outline_result_1:;
            tmp_assign_source_1 = BUILTIN_BYTES1( tmp_bytes_arg_1 );
            Py_DECREF( tmp_bytes_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_buffer;
                assert( old != NULL );
                par_buffer = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_start );
        tmp_compexpr_left_1 = par_start;
        tmp_compexpr_right_1 = const_int_0;
        tmp_or_left_value_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_end );
        tmp_compexpr_left_2 = par_end;
        tmp_compexpr_right_2 = Py_None;
        tmp_or_right_value_1 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( par_end );
            tmp_compexpr_left_3 = par_end;
            tmp_compexpr_right_3 = Py_None;
            tmp_condition_result_3 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_1;
                PyObject *tmp_source_name_2;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_subscript_name_1;
                PyObject *tmp_start_name_1;
                PyObject *tmp_stop_name_1;
                PyObject *tmp_step_name_1;
                PyObject *tmp_kw_name_1;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                CHECK_OBJECT( par_self );
                tmp_source_name_2 = par_self;
                tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__i2c );
                if ( tmp_source_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 62;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_writeto );
                Py_DECREF( tmp_source_name_1 );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 62;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_address );
                tmp_tuple_element_1 = par_address;
                tmp_args_name_1 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
                tmp_called_name_2 = (PyObject *)&PyMemoryView_Type;
                CHECK_OBJECT( par_buffer );
                tmp_args_element_name_1 = par_buffer;
                frame_86a5712905a3346d7566c4951daa19d9->m_frame.f_lineno = 62;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                if ( tmp_subscribed_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );
                    Py_DECREF( tmp_args_name_1 );

                    exception_lineno = 62;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_start );
                tmp_start_name_1 = par_start;
                tmp_stop_name_1 = Py_None;
                tmp_step_name_1 = Py_None;
                tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
                assert( !(tmp_subscript_name_1 == NULL) );
                tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                Py_DECREF( tmp_subscribed_name_1 );
                Py_DECREF( tmp_subscript_name_1 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );
                    Py_DECREF( tmp_args_name_1 );

                    exception_lineno = 62;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
                tmp_dict_key_1 = const_str_plain_stop;
                CHECK_OBJECT( par_stop );
                tmp_dict_value_1 = par_stop;
                tmp_kw_name_1 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
                assert( !(tmp_res != 0) );
                frame_86a5712905a3346d7566c4951daa19d9->m_frame.f_lineno = 62;
                tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 62;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_3;
                PyObject *tmp_source_name_4;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_called_name_4;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_start_name_2;
                PyObject *tmp_stop_name_2;
                PyObject *tmp_step_name_2;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                CHECK_OBJECT( par_self );
                tmp_source_name_4 = par_self;
                tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__i2c );
                if ( tmp_source_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 64;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_writeto );
                Py_DECREF( tmp_source_name_3 );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 64;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_address );
                tmp_tuple_element_2 = par_address;
                tmp_args_name_2 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
                tmp_called_name_4 = (PyObject *)&PyMemoryView_Type;
                CHECK_OBJECT( par_buffer );
                tmp_args_element_name_2 = par_buffer;
                frame_86a5712905a3346d7566c4951daa19d9->m_frame.f_lineno = 64;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_subscribed_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                if ( tmp_subscribed_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_args_name_2 );

                    exception_lineno = 64;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_start );
                tmp_start_name_2 = par_start;
                CHECK_OBJECT( par_end );
                tmp_stop_name_2 = par_end;
                tmp_step_name_2 = Py_None;
                tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
                assert( !(tmp_subscript_name_2 == NULL) );
                tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                Py_DECREF( tmp_subscribed_name_2 );
                Py_DECREF( tmp_subscript_name_2 );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_args_name_2 );

                    exception_lineno = 64;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
                tmp_dict_key_2 = const_str_plain_stop;
                CHECK_OBJECT( par_stop );
                tmp_dict_value_2 = par_stop;
                tmp_kw_name_2 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                frame_86a5712905a3346d7566c4951daa19d9->m_frame.f_lineno = 64;
                tmp_return_value = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 64;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_end_3:;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__i2c );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_writeto );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_address );
        tmp_tuple_element_3 = par_address;
        tmp_args_name_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( par_buffer );
        tmp_tuple_element_3 = par_buffer;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_3 );
        tmp_dict_key_3 = const_str_plain_stop;
        CHECK_OBJECT( par_stop );
        tmp_dict_value_3 = par_stop;
        tmp_kw_name_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_86a5712905a3346d7566c4951daa19d9->m_frame.f_lineno = 65;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86a5712905a3346d7566c4951daa19d9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_86a5712905a3346d7566c4951daa19d9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86a5712905a3346d7566c4951daa19d9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_86a5712905a3346d7566c4951daa19d9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_86a5712905a3346d7566c4951daa19d9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_86a5712905a3346d7566c4951daa19d9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_86a5712905a3346d7566c4951daa19d9,
        type_description_1,
        par_self,
        par_address,
        par_buffer,
        par_start,
        par_end,
        par_stop
    );


    // Release cached frame.
    if ( frame_86a5712905a3346d7566c4951daa19d9 == cache_frame_86a5712905a3346d7566c4951daa19d9 )
    {
        Py_DECREF( frame_86a5712905a3346d7566c4951daa19d9 );
    }
    cache_frame_86a5712905a3346d7566c4951daa19d9 = NULL;

    assertFrameObject( frame_86a5712905a3346d7566c4951daa19d9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_8_writeto );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_address );
    Py_DECREF( par_address );
    par_address = NULL;

    CHECK_OBJECT( (PyObject *)par_buffer );
    Py_DECREF( par_buffer );
    par_buffer = NULL;

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_end );
    Py_DECREF( par_end );
    par_end = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_address );
    Py_DECREF( par_address );
    par_address = NULL;

    Py_XDECREF( par_buffer );
    par_buffer = NULL;

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_end );
    Py_DECREF( par_end );
    par_end = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( busio$$$function_8_writeto );
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


static PyObject *impl_busio$$$function_9_writeto_then_readfrom( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_address = python_pars[ 1 ];
    PyObject *par_buffer_out = python_pars[ 2 ];
    PyObject *par_buffer_in = python_pars[ 3 ];
    PyObject *par_out_start = python_pars[ 4 ];
    PyObject *par_out_end = python_pars[ 5 ];
    PyObject *par_in_start = python_pars[ 6 ];
    PyObject *par_in_end = python_pars[ 7 ];
    PyObject *par_stop = python_pars[ 8 ];
    struct Nuitka_FrameObject *frame_d9598f3cfefbd02a50510d9d3c303022;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d9598f3cfefbd02a50510d9d3c303022 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d9598f3cfefbd02a50510d9d3c303022, codeobj_d9598f3cfefbd02a50510d9d3c303022, module_busio, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d9598f3cfefbd02a50510d9d3c303022 = cache_frame_d9598f3cfefbd02a50510d9d3c303022;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d9598f3cfefbd02a50510d9d3c303022 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d9598f3cfefbd02a50510d9d3c303022 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__i2c );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_writeto_then_readfrom );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_address );
        tmp_tuple_element_1 = par_address;
        tmp_args_name_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_buffer_out );
        tmp_tuple_element_1 = par_buffer_out;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_buffer_in );
        tmp_tuple_element_1 = par_buffer_in;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_out_start;
        CHECK_OBJECT( par_out_start );
        tmp_dict_value_1 = par_out_start;
        tmp_kw_name_1 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_out_end;
        CHECK_OBJECT( par_out_end );
        tmp_dict_value_2 = par_out_end;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_in_start;
        CHECK_OBJECT( par_in_start );
        tmp_dict_value_3 = par_in_start;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_in_end;
        CHECK_OBJECT( par_in_end );
        tmp_dict_value_4 = par_in_end;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_stop;
        CHECK_OBJECT( par_stop );
        tmp_dict_value_5 = par_stop;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        frame_d9598f3cfefbd02a50510d9d3c303022->m_frame.f_lineno = 68;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9598f3cfefbd02a50510d9d3c303022 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9598f3cfefbd02a50510d9d3c303022 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9598f3cfefbd02a50510d9d3c303022 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d9598f3cfefbd02a50510d9d3c303022, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d9598f3cfefbd02a50510d9d3c303022->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d9598f3cfefbd02a50510d9d3c303022, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d9598f3cfefbd02a50510d9d3c303022,
        type_description_1,
        par_self,
        par_address,
        par_buffer_out,
        par_buffer_in,
        par_out_start,
        par_out_end,
        par_in_start,
        par_in_end,
        par_stop
    );


    // Release cached frame.
    if ( frame_d9598f3cfefbd02a50510d9d3c303022 == cache_frame_d9598f3cfefbd02a50510d9d3c303022 )
    {
        Py_DECREF( frame_d9598f3cfefbd02a50510d9d3c303022 );
    }
    cache_frame_d9598f3cfefbd02a50510d9d3c303022 = NULL;

    assertFrameObject( frame_d9598f3cfefbd02a50510d9d3c303022 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_9_writeto_then_readfrom );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_address );
    Py_DECREF( par_address );
    par_address = NULL;

    CHECK_OBJECT( (PyObject *)par_buffer_out );
    Py_DECREF( par_buffer_out );
    par_buffer_out = NULL;

    CHECK_OBJECT( (PyObject *)par_buffer_in );
    Py_DECREF( par_buffer_in );
    par_buffer_in = NULL;

    CHECK_OBJECT( (PyObject *)par_out_start );
    Py_DECREF( par_out_start );
    par_out_start = NULL;

    CHECK_OBJECT( (PyObject *)par_out_end );
    Py_DECREF( par_out_end );
    par_out_end = NULL;

    CHECK_OBJECT( (PyObject *)par_in_start );
    Py_DECREF( par_in_start );
    par_in_start = NULL;

    CHECK_OBJECT( (PyObject *)par_in_end );
    Py_DECREF( par_in_end );
    par_in_end = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

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

    CHECK_OBJECT( (PyObject *)par_address );
    Py_DECREF( par_address );
    par_address = NULL;

    CHECK_OBJECT( (PyObject *)par_buffer_out );
    Py_DECREF( par_buffer_out );
    par_buffer_out = NULL;

    CHECK_OBJECT( (PyObject *)par_buffer_in );
    Py_DECREF( par_buffer_in );
    par_buffer_in = NULL;

    CHECK_OBJECT( (PyObject *)par_out_start );
    Py_DECREF( par_out_start );
    par_out_start = NULL;

    CHECK_OBJECT( (PyObject *)par_out_end );
    Py_DECREF( par_out_end );
    par_out_end = NULL;

    CHECK_OBJECT( (PyObject *)par_in_start );
    Py_DECREF( par_in_start );
    par_in_start = NULL;

    CHECK_OBJECT( (PyObject *)par_in_end );
    Py_DECREF( par_in_end );
    par_in_end = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( busio$$$function_9_writeto_then_readfrom );
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


static PyObject *impl_busio$$$function_10___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_clock = python_pars[ 1 ];
    PyObject *par_MOSI = python_pars[ 2 ];
    PyObject *par_MISO = python_pars[ 3 ];
    PyObject *var__SPI = NULL;
    PyObject *var_spiPorts = NULL;
    PyObject *var_portId = NULL;
    PyObject *var_portSck = NULL;
    PyObject *var_portMosi = NULL;
    PyObject *var_portMiso = NULL;
    nuitka_bool tmp_for_loop_1__break_indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_bdc0fc3236b6ac949e4dfa52a3ff5e09;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_bdc0fc3236b6ac949e4dfa52a3ff5e09 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bdc0fc3236b6ac949e4dfa52a3ff5e09, codeobj_bdc0fc3236b6ac949e4dfa52a3ff5e09, module_busio, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bdc0fc3236b6ac949e4dfa52a3ff5e09 = cache_frame_bdc0fc3236b6ac949e4dfa52a3ff5e09;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bdc0fc3236b6ac949e4dfa52a3ff5e09 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bdc0fc3236b6ac949e4dfa52a3ff5e09 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_bdc0fc3236b6ac949e4dfa52a3ff5e09->m_frame.f_lineno = 74;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_deinit );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_detector );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_detector );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "detector" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 75;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_board );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_any_embedded_linux );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 75;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_import_name_from_1;
            PyObject *tmp_name_name_1;
            PyObject *tmp_globals_name_1;
            PyObject *tmp_locals_name_1;
            PyObject *tmp_fromlist_name_1;
            PyObject *tmp_level_name_1;
            tmp_name_name_1 = const_str_digest_8eeb75553705ba0dd652b93d50f3a4ac;
            tmp_globals_name_1 = (PyObject *)moduledict_busio;
            tmp_locals_name_1 = Py_None;
            tmp_fromlist_name_1 = const_tuple_str_plain_SPI_tuple;
            tmp_level_name_1 = const_int_0;
            frame_bdc0fc3236b6ac949e4dfa52a3ff5e09->m_frame.f_lineno = 76;
            tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
            if ( tmp_import_name_from_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_SPI );
            Py_DECREF( tmp_import_name_from_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var__SPI == NULL );
            var__SPI = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_import_name_from_2;
            PyObject *tmp_name_name_2;
            PyObject *tmp_globals_name_2;
            PyObject *tmp_locals_name_2;
            PyObject *tmp_fromlist_name_2;
            PyObject *tmp_level_name_2;
            tmp_name_name_2 = const_str_plain_machine;
            tmp_globals_name_2 = (PyObject *)moduledict_busio;
            tmp_locals_name_2 = Py_None;
            tmp_fromlist_name_2 = const_tuple_str_plain_SPI_tuple;
            tmp_level_name_2 = const_int_0;
            frame_bdc0fc3236b6ac949e4dfa52a3ff5e09->m_frame.f_lineno = 78;
            tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
            if ( tmp_import_name_from_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 78;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_SPI );
            Py_DECREF( tmp_import_name_from_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 78;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var__SPI == NULL );
            var__SPI = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_4e7aad7c88b0724a830e614462e04cb4;
        tmp_globals_name_3 = (PyObject *)moduledict_busio;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_spiPorts_tuple;
        tmp_level_name_3 = const_int_0;
        frame_bdc0fc3236b6ac949e4dfa52a3ff5e09->m_frame.f_lineno = 79;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_spiPorts );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_spiPorts == NULL );
        var_spiPorts = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_FALSE;
        tmp_for_loop_1__break_indicator = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_spiPorts );
        tmp_iter_arg_1 = var_spiPorts;
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_value_name_1;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_value_name_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT( tmp_value_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 80;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = exception_keeper_type_1;
        tmp_compexpr_right_1 = PyExc_StopIteration;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_1 );
            Py_XDECREF( exception_keeper_value_1 );
            Py_XDECREF( exception_keeper_tb_1 );

            exception_lineno = 80;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
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
            nuitka_bool tmp_assign_source_7;
            tmp_assign_source_7 = NUITKA_BOOL_TRUE;
            tmp_for_loop_1__break_indicator = tmp_assign_source_7;
        }
        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );
        goto loop_end_1;
        goto branch_end_2;
        branch_no_2:;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_3;
        branch_end_2:;
    }
    // End of try:
    try_end_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_1, 0, 4 );
        if ( tmp_assign_source_9 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 80;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_2, 1, 4 );
        if ( tmp_assign_source_10 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 80;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_3, 2, 4 );
        if ( tmp_assign_source_11 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 80;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_4, 3, 4 );
        if ( tmp_assign_source_12 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 80;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_4;
            tmp_tuple_unpack_1__element_4 = tmp_assign_source_12;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "oooooooooo";
                    exception_lineno = 80;
                    goto try_except_handler_6;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooo";
            exception_lineno = 80;
            goto try_except_handler_6;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_5;
    // End of try:
    try_end_2:;
    goto try_end_3;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_portId;
            var_portId = tmp_assign_source_13;
            Py_INCREF( var_portId );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_portSck;
            var_portSck = tmp_assign_source_14;
            Py_INCREF( var_portSck );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_portMosi;
            var_portMosi = tmp_assign_source_15;
            Py_INCREF( var_portMosi );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = var_portMiso;
            var_portMiso = tmp_assign_source_16;
            Py_INCREF( var_portMiso );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( par_clock );
        tmp_compexpr_left_2 = par_clock;
        CHECK_OBJECT( var_portSck );
        tmp_compexpr_right_2 = var_portSck;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT( par_MOSI );
        tmp_compexpr_left_3 = par_MOSI;
        CHECK_OBJECT( var_portMosi );
        tmp_compexpr_right_3 = var_portMosi;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_or_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_MOSI );
        tmp_compexpr_left_4 = par_MOSI;
        tmp_compexpr_right_4 = Py_None;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_value_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_left_value_2 = tmp_or_left_value_1;
        or_end_1:;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_2 == 1 )
        {
            goto and_right_2;
        }
        else
        {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT( par_MISO );
        tmp_compexpr_left_5 = par_MISO;
        CHECK_OBJECT( var_portMiso );
        tmp_compexpr_right_5 = var_portMiso;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_or_left_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_2 == 1 )
        {
            goto or_left_2;
        }
        else
        {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT( par_MISO );
        tmp_compexpr_left_6 = par_MISO;
        tmp_compexpr_right_6 = Py_None;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "oooooooooo";
            goto try_except_handler_3;
        }
        tmp_or_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_2 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_and_right_value_2 = tmp_or_left_value_2;
        or_end_2:;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( var__SPI );
            tmp_called_name_1 = var__SPI;
            CHECK_OBJECT( var_portId );
            tmp_args_element_name_1 = var_portId;
            frame_bdc0fc3236b6ac949e4dfa52a3ff5e09->m_frame.f_lineno = 84;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__spi, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
        }
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_assattr_target_2;
            CHECK_OBJECT( var_portSck );
            tmp_tuple_element_1 = var_portSck;
            tmp_assattr_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assattr_name_2, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_portMosi );
            tmp_tuple_element_1 = var_portMosi;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assattr_name_2, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( var_portMiso );
            tmp_tuple_element_1 = var_portMiso;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assattr_name_2, 2, tmp_tuple_element_1 );
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__pins, tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
        }
        goto loop_end_1;
        branch_no_3:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_7;
        nuitka_bool tmp_compexpr_right_7;
        assert( tmp_for_loop_1__break_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_7 = tmp_for_loop_1__break_indicator;
        tmp_compexpr_right_7 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = ( tmp_compexpr_left_7 == tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_args_element_name_3;
            tmp_called_instance_2 = const_str_digest_62398ab4dc1d3efd3c277bc9632b3381;
            CHECK_OBJECT( par_clock );
            tmp_tuple_element_2 = par_clock;
            tmp_args_element_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_MOSI );
            tmp_tuple_element_2 = par_MOSI;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( par_MISO );
            tmp_tuple_element_2 = par_MISO;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( var_spiPorts );
            tmp_args_element_name_3 = var_spiPorts;
            frame_bdc0fc3236b6ac949e4dfa52a3ff5e09->m_frame.f_lineno = 89;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_make_exception_arg_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_format, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 89;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            frame_bdc0fc3236b6ac949e4dfa52a3ff5e09->m_frame.f_lineno = 88;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 88;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        branch_no_4:;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bdc0fc3236b6ac949e4dfa52a3ff5e09 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bdc0fc3236b6ac949e4dfa52a3ff5e09 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bdc0fc3236b6ac949e4dfa52a3ff5e09, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bdc0fc3236b6ac949e4dfa52a3ff5e09->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bdc0fc3236b6ac949e4dfa52a3ff5e09, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bdc0fc3236b6ac949e4dfa52a3ff5e09,
        type_description_1,
        par_self,
        par_clock,
        par_MOSI,
        par_MISO,
        var__SPI,
        var_spiPorts,
        var_portId,
        var_portSck,
        var_portMosi,
        var_portMiso
    );


    // Release cached frame.
    if ( frame_bdc0fc3236b6ac949e4dfa52a3ff5e09 == cache_frame_bdc0fc3236b6ac949e4dfa52a3ff5e09 )
    {
        Py_DECREF( frame_bdc0fc3236b6ac949e4dfa52a3ff5e09 );
    }
    cache_frame_bdc0fc3236b6ac949e4dfa52a3ff5e09 = NULL;

    assertFrameObject( frame_bdc0fc3236b6ac949e4dfa52a3ff5e09 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_10___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_clock );
    Py_DECREF( par_clock );
    par_clock = NULL;

    CHECK_OBJECT( (PyObject *)par_MOSI );
    Py_DECREF( par_MOSI );
    par_MOSI = NULL;

    CHECK_OBJECT( (PyObject *)par_MISO );
    Py_DECREF( par_MISO );
    par_MISO = NULL;

    CHECK_OBJECT( (PyObject *)var__SPI );
    Py_DECREF( var__SPI );
    var__SPI = NULL;

    CHECK_OBJECT( (PyObject *)var_spiPorts );
    Py_DECREF( var_spiPorts );
    var_spiPorts = NULL;

    Py_XDECREF( var_portId );
    var_portId = NULL;

    Py_XDECREF( var_portSck );
    var_portSck = NULL;

    Py_XDECREF( var_portMosi );
    var_portMosi = NULL;

    Py_XDECREF( var_portMiso );
    var_portMiso = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_clock );
    Py_DECREF( par_clock );
    par_clock = NULL;

    CHECK_OBJECT( (PyObject *)par_MOSI );
    Py_DECREF( par_MOSI );
    par_MOSI = NULL;

    CHECK_OBJECT( (PyObject *)par_MISO );
    Py_DECREF( par_MISO );
    par_MISO = NULL;

    Py_XDECREF( var__SPI );
    var__SPI = NULL;

    Py_XDECREF( var_spiPorts );
    var_spiPorts = NULL;

    Py_XDECREF( var_portId );
    var_portId = NULL;

    Py_XDECREF( var_portSck );
    var_portSck = NULL;

    Py_XDECREF( var_portMosi );
    var_portMosi = NULL;

    Py_XDECREF( var_portMiso );
    var_portMiso = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( busio$$$function_10___init__ );
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


static PyObject *impl_busio$$$function_11_configure( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_baudrate = python_pars[ 1 ];
    PyObject *par_polarity = python_pars[ 2 ];
    PyObject *par_phase = python_pars[ 3 ];
    PyObject *par_bits = python_pars[ 4 ];
    PyObject *var_Pin = NULL;
    PyObject *var__SPI = NULL;
    struct Nuitka_FrameObject *frame_dff8381c8f9a8162a34012e2d58a35c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_dff8381c8f9a8162a34012e2d58a35c5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dff8381c8f9a8162a34012e2d58a35c5, codeobj_dff8381c8f9a8162a34012e2d58a35c5, module_busio, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_dff8381c8f9a8162a34012e2d58a35c5 = cache_frame_dff8381c8f9a8162a34012e2d58a35c5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dff8381c8f9a8162a34012e2d58a35c5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dff8381c8f9a8162a34012e2d58a35c5 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_detector );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_detector );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "detector" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_board );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_any_raspberry_pi );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_detector );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_detector );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "detector" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_2;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_board );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_any_raspberry_pi_40_pin );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_attribute_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_2 );

            exception_lineno = 93;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_2 );
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_import_name_from_1;
            PyObject *tmp_name_name_1;
            PyObject *tmp_globals_name_1;
            PyObject *tmp_locals_name_1;
            PyObject *tmp_fromlist_name_1;
            PyObject *tmp_level_name_1;
            tmp_name_name_1 = const_str_digest_27590e9627cdd4999c774bf4c1f1962f;
            tmp_globals_name_1 = (PyObject *)moduledict_busio;
            tmp_locals_name_1 = Py_None;
            tmp_fromlist_name_1 = const_tuple_str_plain_Pin_tuple;
            tmp_level_name_1 = const_int_0;
            frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame.f_lineno = 94;
            tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
            if ( tmp_import_name_from_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Pin );
            Py_DECREF( tmp_import_name_from_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_Pin == NULL );
            var_Pin = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_import_name_from_2;
            PyObject *tmp_name_name_2;
            PyObject *tmp_globals_name_2;
            PyObject *tmp_locals_name_2;
            PyObject *tmp_fromlist_name_2;
            PyObject *tmp_level_name_2;
            tmp_name_name_2 = const_str_digest_8eeb75553705ba0dd652b93d50f3a4ac;
            tmp_globals_name_2 = (PyObject *)moduledict_busio;
            tmp_locals_name_2 = Py_None;
            tmp_fromlist_name_2 = const_tuple_str_plain_SPI_tuple;
            tmp_level_name_2 = const_int_0;
            frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame.f_lineno = 95;
            tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
            if ( tmp_import_name_from_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_SPI );
            Py_DECREF( tmp_import_name_from_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var__SPI == NULL );
            var__SPI = tmp_assign_source_2;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_attribute_value_3;
            int tmp_truth_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_detector );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_detector );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "detector" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 96;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_3;
            tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_board );
            if ( tmp_source_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_attribute_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_any_beaglebone );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_attribute_value_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_3 = CHECK_IF_TRUE( tmp_attribute_value_3 );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_3 );

                exception_lineno = 96;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_3 );
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
                PyObject *tmp_assign_source_3;
                PyObject *tmp_import_name_from_3;
                PyObject *tmp_name_name_3;
                PyObject *tmp_globals_name_3;
                PyObject *tmp_locals_name_3;
                PyObject *tmp_fromlist_name_3;
                PyObject *tmp_level_name_3;
                tmp_name_name_3 = const_str_digest_c606d455df1b0b1ff46033ccb0d515a0;
                tmp_globals_name_3 = (PyObject *)moduledict_busio;
                tmp_locals_name_3 = Py_None;
                tmp_fromlist_name_3 = const_tuple_str_plain_Pin_tuple;
                tmp_level_name_3 = const_int_0;
                frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame.f_lineno = 97;
                tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
                if ( tmp_import_name_from_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 97;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Pin );
                Py_DECREF( tmp_import_name_from_3 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 97;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_Pin == NULL );
                var_Pin = tmp_assign_source_3;
            }
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_import_name_from_4;
                PyObject *tmp_name_name_4;
                PyObject *tmp_globals_name_4;
                PyObject *tmp_locals_name_4;
                PyObject *tmp_fromlist_name_4;
                PyObject *tmp_level_name_4;
                tmp_name_name_4 = const_str_digest_8eeb75553705ba0dd652b93d50f3a4ac;
                tmp_globals_name_4 = (PyObject *)moduledict_busio;
                tmp_locals_name_4 = Py_None;
                tmp_fromlist_name_4 = const_tuple_str_plain_SPI_tuple;
                tmp_level_name_4 = const_int_0;
                frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame.f_lineno = 98;
                tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
                if ( tmp_import_name_from_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 98;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_SPI );
                Py_DECREF( tmp_import_name_from_4 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 98;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var__SPI == NULL );
                var__SPI = tmp_assign_source_4;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                int tmp_or_left_truth_2;
                nuitka_bool tmp_or_left_value_2;
                nuitka_bool tmp_or_right_value_2;
                PyObject *tmp_compexpr_left_1;
                PyObject *tmp_compexpr_right_1;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_source_name_7;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_source_name_8;
                PyObject *tmp_mvar_value_7;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_board_id );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board_id );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board_id" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 99;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_compexpr_left_1 = tmp_mvar_value_4;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_ap_board );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ap_board );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ap_board" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 99;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_7 = tmp_mvar_value_5;
                tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ORANGE_PI_PC );
                if ( tmp_compexpr_right_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 99;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
                Py_DECREF( tmp_compexpr_right_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 99;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_or_left_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
                if ( tmp_or_left_truth_2 == 1 )
                {
                    goto or_left_2;
                }
                else
                {
                    goto or_right_2;
                }
                or_right_2:;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_board_id );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board_id );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board_id" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 99;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_compexpr_left_2 = tmp_mvar_value_6;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_ap_board );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ap_board );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ap_board" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 99;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_8 = tmp_mvar_value_7;
                tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_ORANGE_PI_R1 );
                if ( tmp_compexpr_right_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 99;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
                Py_DECREF( tmp_compexpr_right_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 99;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_or_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_3 = tmp_or_right_value_2;
                goto or_end_2;
                or_left_2:;
                tmp_condition_result_3 = tmp_or_left_value_2;
                or_end_2:;
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
                    PyObject *tmp_assign_source_5;
                    PyObject *tmp_import_name_from_5;
                    PyObject *tmp_name_name_5;
                    PyObject *tmp_globals_name_5;
                    PyObject *tmp_locals_name_5;
                    PyObject *tmp_fromlist_name_5;
                    PyObject *tmp_level_name_5;
                    tmp_name_name_5 = const_str_digest_7b1b39b143d57c01cb563cf6e2abebeb;
                    tmp_globals_name_5 = (PyObject *)moduledict_busio;
                    tmp_locals_name_5 = Py_None;
                    tmp_fromlist_name_5 = const_tuple_str_plain_Pin_tuple;
                    tmp_level_name_5 = const_int_0;
                    frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame.f_lineno = 100;
                    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
                    if ( tmp_import_name_from_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 100;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_Pin );
                    Py_DECREF( tmp_import_name_from_5 );
                    if ( tmp_assign_source_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 100;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_Pin == NULL );
                    var_Pin = tmp_assign_source_5;
                }
                {
                    PyObject *tmp_assign_source_6;
                    PyObject *tmp_import_name_from_6;
                    PyObject *tmp_name_name_6;
                    PyObject *tmp_globals_name_6;
                    PyObject *tmp_locals_name_6;
                    PyObject *tmp_fromlist_name_6;
                    PyObject *tmp_level_name_6;
                    tmp_name_name_6 = const_str_digest_8eeb75553705ba0dd652b93d50f3a4ac;
                    tmp_globals_name_6 = (PyObject *)moduledict_busio;
                    tmp_locals_name_6 = Py_None;
                    tmp_fromlist_name_6 = const_tuple_str_plain_SPI_tuple;
                    tmp_level_name_6 = const_int_0;
                    frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame.f_lineno = 101;
                    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
                    if ( tmp_import_name_from_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 101;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_SPI );
                    Py_DECREF( tmp_import_name_from_6 );
                    if ( tmp_assign_source_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 101;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var__SPI == NULL );
                    var__SPI = tmp_assign_source_6;
                }
                goto branch_end_3;
                branch_no_3:;
                {
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_compexpr_left_3;
                    PyObject *tmp_compexpr_right_3;
                    PyObject *tmp_mvar_value_8;
                    PyObject *tmp_source_name_9;
                    PyObject *tmp_mvar_value_9;
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_board_id );

                    if (unlikely( tmp_mvar_value_8 == NULL ))
                    {
                        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board_id );
                    }

                    if ( tmp_mvar_value_8 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board_id" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 102;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_compexpr_left_3 = tmp_mvar_value_8;
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_ap_board );

                    if (unlikely( tmp_mvar_value_9 == NULL ))
                    {
                        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ap_board );
                    }

                    if ( tmp_mvar_value_9 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ap_board" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 102;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_9 = tmp_mvar_value_9;
                    tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_GIANT_BOARD );
                    if ( tmp_compexpr_right_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 102;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                    Py_DECREF( tmp_compexpr_right_3 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 102;
                        type_description_1 = "ooooooo";
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
                        PyObject *tmp_assign_source_7;
                        PyObject *tmp_import_name_from_7;
                        PyObject *tmp_name_name_7;
                        PyObject *tmp_globals_name_7;
                        PyObject *tmp_locals_name_7;
                        PyObject *tmp_fromlist_name_7;
                        PyObject *tmp_level_name_7;
                        tmp_name_name_7 = const_str_digest_cea0edda4a37f9b21d5f316ef41250c8;
                        tmp_globals_name_7 = (PyObject *)moduledict_busio;
                        tmp_locals_name_7 = Py_None;
                        tmp_fromlist_name_7 = const_tuple_str_plain_Pin_tuple;
                        tmp_level_name_7 = const_int_0;
                        frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame.f_lineno = 103;
                        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
                        if ( tmp_import_name_from_7 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 103;
                            type_description_1 = "ooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_Pin );
                        Py_DECREF( tmp_import_name_from_7 );
                        if ( tmp_assign_source_7 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 103;
                            type_description_1 = "ooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_Pin == NULL );
                        var_Pin = tmp_assign_source_7;
                    }
                    {
                        PyObject *tmp_assign_source_8;
                        PyObject *tmp_import_name_from_8;
                        PyObject *tmp_name_name_8;
                        PyObject *tmp_globals_name_8;
                        PyObject *tmp_locals_name_8;
                        PyObject *tmp_fromlist_name_8;
                        PyObject *tmp_level_name_8;
                        tmp_name_name_8 = const_str_digest_8eeb75553705ba0dd652b93d50f3a4ac;
                        tmp_globals_name_8 = (PyObject *)moduledict_busio;
                        tmp_locals_name_8 = Py_None;
                        tmp_fromlist_name_8 = const_tuple_str_plain_SPI_tuple;
                        tmp_level_name_8 = const_int_0;
                        frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame.f_lineno = 104;
                        tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
                        if ( tmp_import_name_from_8 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 104;
                            type_description_1 = "ooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_SPI );
                        Py_DECREF( tmp_import_name_from_8 );
                        if ( tmp_assign_source_8 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 104;
                            type_description_1 = "ooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var__SPI == NULL );
                        var__SPI = tmp_assign_source_8;
                    }
                    goto branch_end_4;
                    branch_no_4:;
                    {
                        nuitka_bool tmp_condition_result_5;
                        PyObject *tmp_compexpr_left_4;
                        PyObject *tmp_compexpr_right_4;
                        PyObject *tmp_mvar_value_10;
                        PyObject *tmp_source_name_10;
                        PyObject *tmp_mvar_value_11;
                        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_board_id );

                        if (unlikely( tmp_mvar_value_10 == NULL ))
                        {
                            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board_id );
                        }

                        if ( tmp_mvar_value_10 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board_id" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 105;
                            type_description_1 = "ooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_compexpr_left_4 = tmp_mvar_value_10;
                        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_ap_board );

                        if (unlikely( tmp_mvar_value_11 == NULL ))
                        {
                            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ap_board );
                        }

                        if ( tmp_mvar_value_11 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ap_board" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 105;
                            type_description_1 = "ooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_10 = tmp_mvar_value_11;
                        tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_CORAL_EDGE_TPU_DEV );
                        if ( tmp_compexpr_right_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 105;
                            type_description_1 = "ooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                        Py_DECREF( tmp_compexpr_right_4 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 105;
                            type_description_1 = "ooooooo";
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
                            PyObject *tmp_assign_source_9;
                            PyObject *tmp_import_name_from_9;
                            PyObject *tmp_name_name_9;
                            PyObject *tmp_globals_name_9;
                            PyObject *tmp_locals_name_9;
                            PyObject *tmp_fromlist_name_9;
                            PyObject *tmp_level_name_9;
                            tmp_name_name_9 = const_str_digest_d0fff785ff78971c897b548f07ba60ad;
                            tmp_globals_name_9 = (PyObject *)moduledict_busio;
                            tmp_locals_name_9 = Py_None;
                            tmp_fromlist_name_9 = const_tuple_str_plain_Pin_tuple;
                            tmp_level_name_9 = const_int_0;
                            frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame.f_lineno = 106;
                            tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
                            if ( tmp_import_name_from_9 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 106;
                                type_description_1 = "ooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_Pin );
                            Py_DECREF( tmp_import_name_from_9 );
                            if ( tmp_assign_source_9 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 106;
                                type_description_1 = "ooooooo";
                                goto frame_exception_exit_1;
                            }
                            assert( var_Pin == NULL );
                            var_Pin = tmp_assign_source_9;
                        }
                        {
                            PyObject *tmp_assign_source_10;
                            PyObject *tmp_import_name_from_10;
                            PyObject *tmp_name_name_10;
                            PyObject *tmp_globals_name_10;
                            PyObject *tmp_locals_name_10;
                            PyObject *tmp_fromlist_name_10;
                            PyObject *tmp_level_name_10;
                            tmp_name_name_10 = const_str_digest_8eeb75553705ba0dd652b93d50f3a4ac;
                            tmp_globals_name_10 = (PyObject *)moduledict_busio;
                            tmp_locals_name_10 = Py_None;
                            tmp_fromlist_name_10 = const_tuple_str_plain_SPI_tuple;
                            tmp_level_name_10 = const_int_0;
                            frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame.f_lineno = 107;
                            tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
                            if ( tmp_import_name_from_10 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 107;
                                type_description_1 = "ooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_SPI );
                            Py_DECREF( tmp_import_name_from_10 );
                            if ( tmp_assign_source_10 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 107;
                                type_description_1 = "ooooooo";
                                goto frame_exception_exit_1;
                            }
                            assert( var__SPI == NULL );
                            var__SPI = tmp_assign_source_10;
                        }
                        goto branch_end_5;
                        branch_no_5:;
                        {
                            nuitka_bool tmp_condition_result_6;
                            PyObject *tmp_compexpr_left_5;
                            PyObject *tmp_compexpr_right_5;
                            PyObject *tmp_mvar_value_12;
                            PyObject *tmp_source_name_11;
                            PyObject *tmp_mvar_value_13;
                            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_board_id );

                            if (unlikely( tmp_mvar_value_12 == NULL ))
                            {
                                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board_id );
                            }

                            if ( tmp_mvar_value_12 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board_id" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 108;
                                type_description_1 = "ooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_compexpr_left_5 = tmp_mvar_value_12;
                            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_ap_board );

                            if (unlikely( tmp_mvar_value_13 == NULL ))
                            {
                                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ap_board );
                            }

                            if ( tmp_mvar_value_13 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ap_board" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 108;
                                type_description_1 = "ooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_source_name_11 = tmp_mvar_value_13;
                            tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_ODROID_C2 );
                            if ( tmp_compexpr_right_5 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 108;
                                type_description_1 = "ooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                            Py_DECREF( tmp_compexpr_right_5 );
                            if ( tmp_res == -1 )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 108;
                                type_description_1 = "ooooooo";
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
                                PyObject *tmp_assign_source_11;
                                PyObject *tmp_import_name_from_11;
                                PyObject *tmp_name_name_11;
                                PyObject *tmp_globals_name_11;
                                PyObject *tmp_locals_name_11;
                                PyObject *tmp_fromlist_name_11;
                                PyObject *tmp_level_name_11;
                                tmp_name_name_11 = const_str_digest_840781f3bcbba24c0c9d94a22c7c54d4;
                                tmp_globals_name_11 = (PyObject *)moduledict_busio;
                                tmp_locals_name_11 = Py_None;
                                tmp_fromlist_name_11 = const_tuple_str_plain_Pin_tuple;
                                tmp_level_name_11 = const_int_0;
                                frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame.f_lineno = 109;
                                tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
                                if ( tmp_import_name_from_11 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 109;
                                    type_description_1 = "ooooooo";
                                    goto frame_exception_exit_1;
                                }
                                tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_Pin );
                                Py_DECREF( tmp_import_name_from_11 );
                                if ( tmp_assign_source_11 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 109;
                                    type_description_1 = "ooooooo";
                                    goto frame_exception_exit_1;
                                }
                                assert( var_Pin == NULL );
                                var_Pin = tmp_assign_source_11;
                            }
                            {
                                PyObject *tmp_assign_source_12;
                                PyObject *tmp_import_name_from_12;
                                PyObject *tmp_name_name_12;
                                PyObject *tmp_globals_name_12;
                                PyObject *tmp_locals_name_12;
                                PyObject *tmp_fromlist_name_12;
                                PyObject *tmp_level_name_12;
                                tmp_name_name_12 = const_str_digest_8eeb75553705ba0dd652b93d50f3a4ac;
                                tmp_globals_name_12 = (PyObject *)moduledict_busio;
                                tmp_locals_name_12 = Py_None;
                                tmp_fromlist_name_12 = const_tuple_str_plain_SPI_tuple;
                                tmp_level_name_12 = const_int_0;
                                frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame.f_lineno = 110;
                                tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
                                if ( tmp_import_name_from_12 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 110;
                                    type_description_1 = "ooooooo";
                                    goto frame_exception_exit_1;
                                }
                                tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_SPI );
                                Py_DECREF( tmp_import_name_from_12 );
                                if ( tmp_assign_source_12 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 110;
                                    type_description_1 = "ooooooo";
                                    goto frame_exception_exit_1;
                                }
                                assert( var__SPI == NULL );
                                var__SPI = tmp_assign_source_12;
                            }
                            goto branch_end_6;
                            branch_no_6:;
                            {
                                nuitka_bool tmp_condition_result_7;
                                PyObject *tmp_compexpr_left_6;
                                PyObject *tmp_compexpr_right_6;
                                PyObject *tmp_mvar_value_14;
                                PyObject *tmp_source_name_12;
                                PyObject *tmp_mvar_value_15;
                                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_board_id );

                                if (unlikely( tmp_mvar_value_14 == NULL ))
                                {
                                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_board_id );
                                }

                                if ( tmp_mvar_value_14 == NULL )
                                {

                                    exception_type = PyExc_NameError;
                                    Py_INCREF( exception_type );
                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "board_id" );
                                    exception_tb = NULL;
                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                    CHAIN_EXCEPTION( exception_value );

                                    exception_lineno = 111;
                                    type_description_1 = "ooooooo";
                                    goto frame_exception_exit_1;
                                }

                                tmp_compexpr_left_6 = tmp_mvar_value_14;
                                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_ap_board );

                                if (unlikely( tmp_mvar_value_15 == NULL ))
                                {
                                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ap_board );
                                }

                                if ( tmp_mvar_value_15 == NULL )
                                {

                                    exception_type = PyExc_NameError;
                                    Py_INCREF( exception_type );
                                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ap_board" );
                                    exception_tb = NULL;
                                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                    CHAIN_EXCEPTION( exception_value );

                                    exception_lineno = 111;
                                    type_description_1 = "ooooooo";
                                    goto frame_exception_exit_1;
                                }

                                tmp_source_name_12 = tmp_mvar_value_15;
                                tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_DRAGONBOARD_410C );
                                if ( tmp_compexpr_right_6 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 111;
                                    type_description_1 = "ooooooo";
                                    goto frame_exception_exit_1;
                                }
                                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                                Py_DECREF( tmp_compexpr_right_6 );
                                if ( tmp_res == -1 )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 111;
                                    type_description_1 = "ooooooo";
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
                                    PyObject *tmp_assign_source_13;
                                    PyObject *tmp_import_name_from_13;
                                    PyObject *tmp_name_name_13;
                                    PyObject *tmp_globals_name_13;
                                    PyObject *tmp_locals_name_13;
                                    PyObject *tmp_fromlist_name_13;
                                    PyObject *tmp_level_name_13;
                                    tmp_name_name_13 = const_str_digest_0c1898fc1f2c6d20fef19765d7f4025d;
                                    tmp_globals_name_13 = (PyObject *)moduledict_busio;
                                    tmp_locals_name_13 = Py_None;
                                    tmp_fromlist_name_13 = const_tuple_str_plain_Pin_tuple;
                                    tmp_level_name_13 = const_int_0;
                                    frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame.f_lineno = 112;
                                    tmp_import_name_from_13 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
                                    if ( tmp_import_name_from_13 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 112;
                                        type_description_1 = "ooooooo";
                                        goto frame_exception_exit_1;
                                    }
                                    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_Pin );
                                    Py_DECREF( tmp_import_name_from_13 );
                                    if ( tmp_assign_source_13 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 112;
                                        type_description_1 = "ooooooo";
                                        goto frame_exception_exit_1;
                                    }
                                    assert( var_Pin == NULL );
                                    var_Pin = tmp_assign_source_13;
                                }
                                {
                                    PyObject *tmp_assign_source_14;
                                    PyObject *tmp_import_name_from_14;
                                    PyObject *tmp_name_name_14;
                                    PyObject *tmp_globals_name_14;
                                    PyObject *tmp_locals_name_14;
                                    PyObject *tmp_fromlist_name_14;
                                    PyObject *tmp_level_name_14;
                                    tmp_name_name_14 = const_str_digest_8eeb75553705ba0dd652b93d50f3a4ac;
                                    tmp_globals_name_14 = (PyObject *)moduledict_busio;
                                    tmp_locals_name_14 = Py_None;
                                    tmp_fromlist_name_14 = const_tuple_str_plain_SPI_tuple;
                                    tmp_level_name_14 = const_int_0;
                                    frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame.f_lineno = 113;
                                    tmp_import_name_from_14 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
                                    if ( tmp_import_name_from_14 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 113;
                                        type_description_1 = "ooooooo";
                                        goto frame_exception_exit_1;
                                    }
                                    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_SPI );
                                    Py_DECREF( tmp_import_name_from_14 );
                                    if ( tmp_assign_source_14 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 113;
                                        type_description_1 = "ooooooo";
                                        goto frame_exception_exit_1;
                                    }
                                    assert( var__SPI == NULL );
                                    var__SPI = tmp_assign_source_14;
                                }
                                goto branch_end_7;
                                branch_no_7:;
                                {
                                    PyObject *tmp_assign_source_15;
                                    PyObject *tmp_import_name_from_15;
                                    PyObject *tmp_name_name_15;
                                    PyObject *tmp_globals_name_15;
                                    PyObject *tmp_locals_name_15;
                                    PyObject *tmp_fromlist_name_15;
                                    PyObject *tmp_level_name_15;
                                    tmp_name_name_15 = const_str_plain_machine;
                                    tmp_globals_name_15 = (PyObject *)moduledict_busio;
                                    tmp_locals_name_15 = Py_None;
                                    tmp_fromlist_name_15 = const_tuple_str_plain_SPI_tuple;
                                    tmp_level_name_15 = const_int_0;
                                    frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame.f_lineno = 115;
                                    tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15 );
                                    if ( tmp_import_name_from_15 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 115;
                                        type_description_1 = "ooooooo";
                                        goto frame_exception_exit_1;
                                    }
                                    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_SPI );
                                    Py_DECREF( tmp_import_name_from_15 );
                                    if ( tmp_assign_source_15 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 115;
                                        type_description_1 = "ooooooo";
                                        goto frame_exception_exit_1;
                                    }
                                    assert( var__SPI == NULL );
                                    var__SPI = tmp_assign_source_15;
                                }
                                {
                                    PyObject *tmp_assign_source_16;
                                    PyObject *tmp_import_name_from_16;
                                    PyObject *tmp_name_name_16;
                                    PyObject *tmp_globals_name_16;
                                    PyObject *tmp_locals_name_16;
                                    PyObject *tmp_fromlist_name_16;
                                    PyObject *tmp_level_name_16;
                                    tmp_name_name_16 = const_str_plain_machine;
                                    tmp_globals_name_16 = (PyObject *)moduledict_busio;
                                    tmp_locals_name_16 = Py_None;
                                    tmp_fromlist_name_16 = const_tuple_str_plain_Pin_tuple;
                                    tmp_level_name_16 = const_int_0;
                                    frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame.f_lineno = 116;
                                    tmp_import_name_from_16 = IMPORT_MODULE5( tmp_name_name_16, tmp_globals_name_16, tmp_locals_name_16, tmp_fromlist_name_16, tmp_level_name_16 );
                                    if ( tmp_import_name_from_16 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 116;
                                        type_description_1 = "ooooooo";
                                        goto frame_exception_exit_1;
                                    }
                                    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_Pin );
                                    Py_DECREF( tmp_import_name_from_16 );
                                    if ( tmp_assign_source_16 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 116;
                                        type_description_1 = "ooooooo";
                                        goto frame_exception_exit_1;
                                    }
                                    assert( var_Pin == NULL );
                                    var_Pin = tmp_assign_source_16;
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
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_source_name_13;
        PyObject *tmp_attribute_value_4;
        int tmp_truth_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_13 = par_self;
        tmp_attribute_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__locked );
        if ( tmp_attribute_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_attribute_value_4 );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_4 );

            exception_lineno = 118;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_4 );
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_14;
            PyObject *tmp_source_name_15;
            PyObject *tmp_call_result_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_source_name_16;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_17;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_18;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_19;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_20;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_21;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_source_name_22;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_15 = par_self;
            tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__spi );
            if ( tmp_source_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_init );
            Py_DECREF( tmp_source_name_14 );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_1 = const_str_plain_baudrate;
            CHECK_OBJECT( par_baudrate );
            tmp_dict_value_1 = par_baudrate;
            tmp_kw_name_1 = _PyDict_NewPresized( 8 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_polarity;
            CHECK_OBJECT( par_polarity );
            tmp_dict_value_2 = par_polarity;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_3 = const_str_plain_phase;
            CHECK_OBJECT( par_phase );
            tmp_dict_value_3 = par_phase;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_4 = const_str_plain_bits;
            CHECK_OBJECT( par_bits );
            tmp_dict_value_4 = par_bits;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_5 = const_str_plain_firstbit;
            if ( var__SPI == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_SPI" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 125;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_16 = var__SPI;
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_MSB );
            if ( tmp_dict_value_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 125;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
            Py_DECREF( tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_6 = const_str_plain_sck;
            if ( var_Pin == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Pin" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 126;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = var_Pin;
            CHECK_OBJECT( par_self );
            tmp_source_name_18 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain__pins );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 126;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_int_0;
            tmp_source_name_17 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_source_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 126;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_id );
            Py_DECREF( tmp_source_name_17 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 126;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame.f_lineno = 126;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_dict_value_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_dict_value_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 126;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
            Py_DECREF( tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_7 = const_str_plain_mosi;
            if ( var_Pin == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Pin" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 127;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = var_Pin;
            CHECK_OBJECT( par_self );
            tmp_source_name_20 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__pins );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 127;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_2 = const_int_pos_1;
            tmp_source_name_19 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
            Py_DECREF( tmp_subscribed_name_2 );
            if ( tmp_source_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 127;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_id );
            Py_DECREF( tmp_source_name_19 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 127;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame.f_lineno = 127;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_dict_value_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_dict_value_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 127;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
            Py_DECREF( tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_8 = const_str_plain_miso;
            if ( var_Pin == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Pin" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 128;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = var_Pin;
            CHECK_OBJECT( par_self );
            tmp_source_name_22 = par_self;
            tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain__pins );
            if ( tmp_subscribed_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 128;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_3 = const_int_pos_2;
            tmp_source_name_21 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 2 );
            Py_DECREF( tmp_subscribed_name_3 );
            if ( tmp_source_name_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 128;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_id );
            Py_DECREF( tmp_source_name_21 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 128;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame.f_lineno = 128;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_dict_value_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_dict_value_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 128;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
            Py_DECREF( tmp_dict_value_8 );
            assert( !(tmp_res != 0) );
            frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame.f_lineno = 120;
            tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_8;
        branch_no_8:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_20a8726c6072529a3ee3678b83e80986;
            frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame.f_lineno = 131;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 131;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_end_8:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dff8381c8f9a8162a34012e2d58a35c5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dff8381c8f9a8162a34012e2d58a35c5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dff8381c8f9a8162a34012e2d58a35c5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dff8381c8f9a8162a34012e2d58a35c5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dff8381c8f9a8162a34012e2d58a35c5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dff8381c8f9a8162a34012e2d58a35c5,
        type_description_1,
        par_self,
        par_baudrate,
        par_polarity,
        par_phase,
        par_bits,
        var_Pin,
        var__SPI
    );


    // Release cached frame.
    if ( frame_dff8381c8f9a8162a34012e2d58a35c5 == cache_frame_dff8381c8f9a8162a34012e2d58a35c5 )
    {
        Py_DECREF( frame_dff8381c8f9a8162a34012e2d58a35c5 );
    }
    cache_frame_dff8381c8f9a8162a34012e2d58a35c5 = NULL;

    assertFrameObject( frame_dff8381c8f9a8162a34012e2d58a35c5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_11_configure );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_baudrate );
    Py_DECREF( par_baudrate );
    par_baudrate = NULL;

    CHECK_OBJECT( (PyObject *)par_polarity );
    Py_DECREF( par_polarity );
    par_polarity = NULL;

    CHECK_OBJECT( (PyObject *)par_phase );
    Py_DECREF( par_phase );
    par_phase = NULL;

    CHECK_OBJECT( (PyObject *)par_bits );
    Py_DECREF( par_bits );
    par_bits = NULL;

    Py_XDECREF( var_Pin );
    var_Pin = NULL;

    Py_XDECREF( var__SPI );
    var__SPI = NULL;

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

    CHECK_OBJECT( (PyObject *)par_baudrate );
    Py_DECREF( par_baudrate );
    par_baudrate = NULL;

    CHECK_OBJECT( (PyObject *)par_polarity );
    Py_DECREF( par_polarity );
    par_polarity = NULL;

    CHECK_OBJECT( (PyObject *)par_phase );
    Py_DECREF( par_phase );
    par_phase = NULL;

    CHECK_OBJECT( (PyObject *)par_bits );
    Py_DECREF( par_bits );
    par_bits = NULL;

    Py_XDECREF( var_Pin );
    var_Pin = NULL;

    Py_XDECREF( var__SPI );
    var__SPI = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( busio$$$function_11_configure );
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


static PyObject *impl_busio$$$function_12_deinit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_9035c2a47b7065891c9067ea1ae6839f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9035c2a47b7065891c9067ea1ae6839f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9035c2a47b7065891c9067ea1ae6839f, codeobj_9035c2a47b7065891c9067ea1ae6839f, module_busio, sizeof(void *) );
    frame_9035c2a47b7065891c9067ea1ae6839f = cache_frame_9035c2a47b7065891c9067ea1ae6839f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9035c2a47b7065891c9067ea1ae6839f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9035c2a47b7065891c9067ea1ae6839f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__spi, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__pinIds, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9035c2a47b7065891c9067ea1ae6839f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9035c2a47b7065891c9067ea1ae6839f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9035c2a47b7065891c9067ea1ae6839f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9035c2a47b7065891c9067ea1ae6839f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9035c2a47b7065891c9067ea1ae6839f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9035c2a47b7065891c9067ea1ae6839f,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_9035c2a47b7065891c9067ea1ae6839f == cache_frame_9035c2a47b7065891c9067ea1ae6839f )
    {
        Py_DECREF( frame_9035c2a47b7065891c9067ea1ae6839f );
    }
    cache_frame_9035c2a47b7065891c9067ea1ae6839f = NULL;

    assertFrameObject( frame_9035c2a47b7065891c9067ea1ae6839f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_12_deinit );
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
    NUITKA_CANNOT_GET_HERE( busio$$$function_12_deinit );
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


static PyObject *impl_busio$$$function_13_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_buf = python_pars[ 1 ];
    PyObject *par_start = python_pars[ 2 ];
    PyObject *par_end = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_aa094631bba4a07ddbc32eaa3be5a0a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aa094631bba4a07ddbc32eaa3be5a0a8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aa094631bba4a07ddbc32eaa3be5a0a8, codeobj_aa094631bba4a07ddbc32eaa3be5a0a8, module_busio, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_aa094631bba4a07ddbc32eaa3be5a0a8 = cache_frame_aa094631bba4a07ddbc32eaa3be5a0a8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aa094631bba4a07ddbc32eaa3be5a0a8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aa094631bba4a07ddbc32eaa3be5a0a8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__spi );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_buf );
        tmp_args_element_name_1 = par_buf;
        CHECK_OBJECT( par_start );
        tmp_args_element_name_2 = par_start;
        CHECK_OBJECT( par_end );
        tmp_args_element_name_3 = par_end;
        frame_aa094631bba4a07ddbc32eaa3be5a0a8->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_write, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa094631bba4a07ddbc32eaa3be5a0a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa094631bba4a07ddbc32eaa3be5a0a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa094631bba4a07ddbc32eaa3be5a0a8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aa094631bba4a07ddbc32eaa3be5a0a8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aa094631bba4a07ddbc32eaa3be5a0a8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aa094631bba4a07ddbc32eaa3be5a0a8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aa094631bba4a07ddbc32eaa3be5a0a8,
        type_description_1,
        par_self,
        par_buf,
        par_start,
        par_end
    );


    // Release cached frame.
    if ( frame_aa094631bba4a07ddbc32eaa3be5a0a8 == cache_frame_aa094631bba4a07ddbc32eaa3be5a0a8 )
    {
        Py_DECREF( frame_aa094631bba4a07ddbc32eaa3be5a0a8 );
    }
    cache_frame_aa094631bba4a07ddbc32eaa3be5a0a8 = NULL;

    assertFrameObject( frame_aa094631bba4a07ddbc32eaa3be5a0a8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_13_write );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_buf );
    Py_DECREF( par_buf );
    par_buf = NULL;

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_end );
    Py_DECREF( par_end );
    par_end = NULL;

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

    CHECK_OBJECT( (PyObject *)par_buf );
    Py_DECREF( par_buf );
    par_buf = NULL;

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_end );
    Py_DECREF( par_end );
    par_end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( busio$$$function_13_write );
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


static PyObject *impl_busio$$$function_14_readinto( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_buf = python_pars[ 1 ];
    PyObject *par_start = python_pars[ 2 ];
    PyObject *par_end = python_pars[ 3 ];
    PyObject *par_write_value = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_0026c0d0d564354878e7015a5011078a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0026c0d0d564354878e7015a5011078a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0026c0d0d564354878e7015a5011078a, codeobj_0026c0d0d564354878e7015a5011078a, module_busio, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0026c0d0d564354878e7015a5011078a = cache_frame_0026c0d0d564354878e7015a5011078a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0026c0d0d564354878e7015a5011078a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0026c0d0d564354878e7015a5011078a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__spi );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_readinto );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_buf );
        tmp_tuple_element_1 = par_buf;
        tmp_args_name_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_start );
        tmp_tuple_element_1 = par_start;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_end );
        tmp_tuple_element_1 = par_end;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_write_value;
        CHECK_OBJECT( par_write_value );
        tmp_dict_value_1 = par_write_value;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_0026c0d0d564354878e7015a5011078a->m_frame.f_lineno = 141;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0026c0d0d564354878e7015a5011078a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0026c0d0d564354878e7015a5011078a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0026c0d0d564354878e7015a5011078a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0026c0d0d564354878e7015a5011078a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0026c0d0d564354878e7015a5011078a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0026c0d0d564354878e7015a5011078a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0026c0d0d564354878e7015a5011078a,
        type_description_1,
        par_self,
        par_buf,
        par_start,
        par_end,
        par_write_value
    );


    // Release cached frame.
    if ( frame_0026c0d0d564354878e7015a5011078a == cache_frame_0026c0d0d564354878e7015a5011078a )
    {
        Py_DECREF( frame_0026c0d0d564354878e7015a5011078a );
    }
    cache_frame_0026c0d0d564354878e7015a5011078a = NULL;

    assertFrameObject( frame_0026c0d0d564354878e7015a5011078a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_14_readinto );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_buf );
    Py_DECREF( par_buf );
    par_buf = NULL;

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_end );
    Py_DECREF( par_end );
    par_end = NULL;

    CHECK_OBJECT( (PyObject *)par_write_value );
    Py_DECREF( par_write_value );
    par_write_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_buf );
    Py_DECREF( par_buf );
    par_buf = NULL;

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_end );
    Py_DECREF( par_end );
    par_end = NULL;

    CHECK_OBJECT( (PyObject *)par_write_value );
    Py_DECREF( par_write_value );
    par_write_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( busio$$$function_14_readinto );
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


static PyObject *impl_busio$$$function_15_write_readinto( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_buffer_out = python_pars[ 1 ];
    PyObject *par_buffer_in = python_pars[ 2 ];
    PyObject *par_out_start = python_pars[ 3 ];
    PyObject *par_out_end = python_pars[ 4 ];
    PyObject *par_in_start = python_pars[ 5 ];
    PyObject *par_in_end = python_pars[ 6 ];
    struct Nuitka_FrameObject *frame_9f5a529fc52240a54b6600739f19fd00;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9f5a529fc52240a54b6600739f19fd00 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9f5a529fc52240a54b6600739f19fd00, codeobj_9f5a529fc52240a54b6600739f19fd00, module_busio, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9f5a529fc52240a54b6600739f19fd00 = cache_frame_9f5a529fc52240a54b6600739f19fd00;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9f5a529fc52240a54b6600739f19fd00 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9f5a529fc52240a54b6600739f19fd00 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__spi );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_buffer_out );
        tmp_args_element_name_1 = par_buffer_out;
        CHECK_OBJECT( par_buffer_in );
        tmp_args_element_name_2 = par_buffer_in;
        CHECK_OBJECT( par_out_start );
        tmp_args_element_name_3 = par_out_start;
        CHECK_OBJECT( par_out_end );
        tmp_args_element_name_4 = par_out_end;
        CHECK_OBJECT( par_in_start );
        tmp_args_element_name_5 = par_in_start;
        CHECK_OBJECT( par_in_end );
        tmp_args_element_name_6 = par_in_end;
        frame_9f5a529fc52240a54b6600739f19fd00->m_frame.f_lineno = 144;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_return_value = CALL_METHOD_WITH_ARGS6( tmp_called_instance_1, const_str_plain_write_readinto, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f5a529fc52240a54b6600739f19fd00 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f5a529fc52240a54b6600739f19fd00 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f5a529fc52240a54b6600739f19fd00 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9f5a529fc52240a54b6600739f19fd00, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9f5a529fc52240a54b6600739f19fd00->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9f5a529fc52240a54b6600739f19fd00, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9f5a529fc52240a54b6600739f19fd00,
        type_description_1,
        par_self,
        par_buffer_out,
        par_buffer_in,
        par_out_start,
        par_out_end,
        par_in_start,
        par_in_end
    );


    // Release cached frame.
    if ( frame_9f5a529fc52240a54b6600739f19fd00 == cache_frame_9f5a529fc52240a54b6600739f19fd00 )
    {
        Py_DECREF( frame_9f5a529fc52240a54b6600739f19fd00 );
    }
    cache_frame_9f5a529fc52240a54b6600739f19fd00 = NULL;

    assertFrameObject( frame_9f5a529fc52240a54b6600739f19fd00 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_15_write_readinto );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_buffer_out );
    Py_DECREF( par_buffer_out );
    par_buffer_out = NULL;

    CHECK_OBJECT( (PyObject *)par_buffer_in );
    Py_DECREF( par_buffer_in );
    par_buffer_in = NULL;

    CHECK_OBJECT( (PyObject *)par_out_start );
    Py_DECREF( par_out_start );
    par_out_start = NULL;

    CHECK_OBJECT( (PyObject *)par_out_end );
    Py_DECREF( par_out_end );
    par_out_end = NULL;

    CHECK_OBJECT( (PyObject *)par_in_start );
    Py_DECREF( par_in_start );
    par_in_start = NULL;

    CHECK_OBJECT( (PyObject *)par_in_end );
    Py_DECREF( par_in_end );
    par_in_end = NULL;

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

    CHECK_OBJECT( (PyObject *)par_buffer_out );
    Py_DECREF( par_buffer_out );
    par_buffer_out = NULL;

    CHECK_OBJECT( (PyObject *)par_buffer_in );
    Py_DECREF( par_buffer_in );
    par_buffer_in = NULL;

    CHECK_OBJECT( (PyObject *)par_out_start );
    Py_DECREF( par_out_start );
    par_out_start = NULL;

    CHECK_OBJECT( (PyObject *)par_out_end );
    Py_DECREF( par_out_end );
    par_out_end = NULL;

    CHECK_OBJECT( (PyObject *)par_in_start );
    Py_DECREF( par_in_start );
    par_in_start = NULL;

    CHECK_OBJECT( (PyObject *)par_in_end );
    Py_DECREF( par_in_end );
    par_in_end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( busio$$$function_15_write_readinto );
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


static PyObject *impl_busio$$$function_16___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_tx = python_pars[ 1 ];
    PyObject *par_rx = python_pars[ 2 ];
    PyObject *par_baudrate = python_pars[ 3 ];
    PyObject *par_bits = python_pars[ 4 ];
    PyObject *par_parity = python_pars[ 5 ];
    PyObject *par_stop = python_pars[ 6 ];
    PyObject *par_timeout = python_pars[ 7 ];
    PyObject *par_receiver_buffer_size = python_pars[ 8 ];
    PyObject *par_flow = python_pars[ 9 ];
    PyObject *var__UART = NULL;
    PyObject *var_uartPorts = NULL;
    PyObject *var_portId = NULL;
    PyObject *var_portTx = NULL;
    PyObject *var_portRx = NULL;
    nuitka_bool tmp_for_loop_1__break_indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d07cff22b21aefd96944100f593452f3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
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
    static struct Nuitka_FrameObject *cache_frame_d07cff22b21aefd96944100f593452f3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d07cff22b21aefd96944100f593452f3, codeobj_d07cff22b21aefd96944100f593452f3, module_busio, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d07cff22b21aefd96944100f593452f3 = cache_frame_d07cff22b21aefd96944100f593452f3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d07cff22b21aefd96944100f593452f3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d07cff22b21aefd96944100f593452f3 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_detector );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_detector );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "detector" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 164;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_board );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_any_embedded_linux );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 164;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            tmp_make_exception_arg_1 = const_str_digest_d62ccf3a01905b1fd56a98b1f09253ae;
            frame_d07cff22b21aefd96944100f593452f3->m_frame.f_lineno = 165;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 165;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_import_name_from_1;
            PyObject *tmp_name_name_1;
            PyObject *tmp_globals_name_1;
            PyObject *tmp_locals_name_1;
            PyObject *tmp_fromlist_name_1;
            PyObject *tmp_level_name_1;
            tmp_name_name_1 = const_str_plain_machine;
            tmp_globals_name_1 = (PyObject *)moduledict_busio;
            tmp_locals_name_1 = Py_None;
            tmp_fromlist_name_1 = const_tuple_str_plain_UART_tuple;
            tmp_level_name_1 = const_int_0;
            frame_d07cff22b21aefd96944100f593452f3->m_frame.f_lineno = 167;
            tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
            if ( tmp_import_name_from_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 167;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_UART );
            Py_DECREF( tmp_import_name_from_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 167;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var__UART == NULL );
            var__UART = tmp_assign_source_1;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_4e7aad7c88b0724a830e614462e04cb4;
        tmp_globals_name_2 = (PyObject *)moduledict_busio;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_uartPorts_tuple;
        tmp_level_name_2 = const_int_0;
        frame_d07cff22b21aefd96944100f593452f3->m_frame.f_lineno = 168;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_uartPorts );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_uartPorts == NULL );
        var_uartPorts = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_baudrate );
        tmp_assattr_name_1 = par_baudrate;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_baudrate, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_flow );
        tmp_compexpr_left_1 = par_flow;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_2;
            tmp_source_name_3 = const_str_digest_e561117a1293b1e66f339f8beab67aeb;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_format );
            assert( !(tmp_called_name_1 == NULL) );
            tmp_args_element_name_1 = const_str_plain_flow;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_agnostic );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_agnostic );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "agnostic" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 175;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_2;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_board_id );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 175;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d07cff22b21aefd96944100f593452f3->m_frame.f_lineno = 174;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_make_exception_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 174;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d07cff22b21aefd96944100f593452f3->m_frame.f_lineno = 173;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_2 );
            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 173;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( par_parity );
        tmp_compexpr_left_2 = par_parity;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_UART );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UART );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UART" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_3;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_Parity );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ODD );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_right_2 );
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
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = const_int_pos_1;
            {
                PyObject *old = par_parity;
                assert( old != NULL );
                par_parity = tmp_assign_source_3;
                Py_INCREF( par_parity );
                Py_DECREF( old );
            }

        }
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_4;
            CHECK_OBJECT( par_parity );
            tmp_compexpr_left_3 = par_parity;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_UART );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UART );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UART" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 180;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_4;
            tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_Parity );
            if ( tmp_source_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 180;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_EVEN );
            Py_DECREF( tmp_source_name_7 );
            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 180;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_4 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_compexpr_right_3 );
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
                PyObject *tmp_assign_source_4;
                tmp_assign_source_4 = const_int_0;
                {
                    PyObject *old = par_parity;
                    assert( old != NULL );
                    par_parity = tmp_assign_source_4;
                    Py_INCREF( par_parity );
                    Py_DECREF( old );
                }

            }
            goto branch_end_4;
            branch_no_4:;
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                CHECK_OBJECT( par_parity );
                tmp_compexpr_left_4 = par_parity;
                tmp_compexpr_right_4 = Py_None;
                tmp_condition_result_5 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_raise_type_3;
                    PyObject *tmp_make_exception_arg_3;
                    tmp_make_exception_arg_3 = const_str_digest_1d36560db8127ee3509956e97eac89fc;
                    frame_d07cff22b21aefd96944100f593452f3->m_frame.f_lineno = 185;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_3 };
                        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_3 == NULL) );
                    exception_type = tmp_raise_type_3;
                    exception_lineno = 185;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_5:;
            }
            branch_end_4:;
        }
        branch_end_3:;
    }
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_FALSE;
        tmp_for_loop_1__break_indicator = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_uartPorts );
        tmp_iter_arg_1 = var_uartPorts;
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_value_name_1;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_value_name_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT( tmp_value_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 188;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        tmp_compexpr_left_5 = exception_keeper_type_1;
        tmp_compexpr_right_5 = PyExc_StopIteration;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_1 );
            Py_XDECREF( exception_keeper_value_1 );
            Py_XDECREF( exception_keeper_tb_1 );

            exception_lineno = 188;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
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
            nuitka_bool tmp_assign_source_8;
            tmp_assign_source_8 = NUITKA_BOOL_TRUE;
            tmp_for_loop_1__break_indicator = tmp_assign_source_8;
        }
        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );
        goto loop_end_1;
        goto branch_end_6;
        branch_no_6:;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_3;
        branch_end_6:;
    }
    // End of try:
    try_end_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
        if ( tmp_assign_source_10 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 188;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
        if ( tmp_assign_source_11 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 188;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
        if ( tmp_assign_source_12 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 188;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_12;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 188;
                    goto try_except_handler_6;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 188;
            goto try_except_handler_6;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_5;
    // End of try:
    try_end_2:;
    goto try_end_3;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_portId;
            var_portId = tmp_assign_source_13;
            Py_INCREF( var_portId );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_portTx;
            var_portTx = tmp_assign_source_14;
            Py_INCREF( var_portTx );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_portRx;
            var_portRx = tmp_assign_source_15;
            Py_INCREF( var_portRx );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_7;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( var_portTx );
        tmp_compexpr_left_6 = var_portTx;
        CHECK_OBJECT( par_tx );
        tmp_compexpr_right_6 = par_tx;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT( var_portRx );
        tmp_compexpr_left_7 = var_portRx;
        CHECK_OBJECT( par_rx );
        tmp_compexpr_right_7 = par_rx;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_7 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_7 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_assattr_target_2;
            if ( var__UART == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_UART" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 190;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_3;
            }

            tmp_called_name_2 = var__UART;
            CHECK_OBJECT( var_portId );
            tmp_tuple_element_1 = var_portId;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_baudrate );
            tmp_tuple_element_1 = par_baudrate;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_bits;
            CHECK_OBJECT( par_bits );
            tmp_dict_value_1 = par_bits;
            tmp_kw_name_1 = _PyDict_NewPresized( 5 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_parity;
            if ( par_parity == NULL )
            {
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "parity" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 194;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_3;
            }

            tmp_dict_value_2 = par_parity;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_3 = const_str_plain_stop;
            CHECK_OBJECT( par_stop );
            tmp_dict_value_3 = par_stop;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_4 = const_str_plain_timeout;
            CHECK_OBJECT( par_timeout );
            tmp_dict_value_4 = par_timeout;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_5 = const_str_plain_read_buf_len;
            CHECK_OBJECT( par_receiver_buffer_size );
            tmp_dict_value_5 = par_receiver_buffer_size;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            frame_d07cff22b21aefd96944100f593452f3->m_frame.f_lineno = 190;
            tmp_assattr_name_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assattr_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 190;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__uart, tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 190;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_3;
            }
        }
        goto loop_end_1;
        branch_no_7:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_8;
        nuitka_bool tmp_compexpr_left_8;
        nuitka_bool tmp_compexpr_right_8;
        assert( tmp_for_loop_1__break_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_8 = tmp_for_loop_1__break_indicator;
        tmp_compexpr_right_8 = NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = ( tmp_compexpr_left_8 == tmp_compexpr_right_8 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_args_element_name_4;
            tmp_called_instance_1 = const_str_digest_6809aef55b85de24b5d3fbf30c29c563;
            CHECK_OBJECT( par_tx );
            tmp_tuple_element_2 = par_tx;
            tmp_args_element_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_rx );
            tmp_tuple_element_2 = par_rx;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( var_uartPorts );
            tmp_args_element_name_4 = var_uartPorts;
            frame_d07cff22b21aefd96944100f593452f3->m_frame.f_lineno = 202;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_make_exception_arg_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_format, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_make_exception_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 202;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_2;
            }
            frame_d07cff22b21aefd96944100f593452f3->m_frame.f_lineno = 201;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_4 };
                tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_4 );
            assert( !(tmp_raise_type_4 == NULL) );
            exception_type = tmp_raise_type_4;
            exception_lineno = 201;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        branch_no_8:;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d07cff22b21aefd96944100f593452f3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d07cff22b21aefd96944100f593452f3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d07cff22b21aefd96944100f593452f3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d07cff22b21aefd96944100f593452f3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d07cff22b21aefd96944100f593452f3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d07cff22b21aefd96944100f593452f3,
        type_description_1,
        par_self,
        par_tx,
        par_rx,
        par_baudrate,
        par_bits,
        par_parity,
        par_stop,
        par_timeout,
        par_receiver_buffer_size,
        par_flow,
        var__UART,
        var_uartPorts,
        var_portId,
        var_portTx,
        var_portRx
    );


    // Release cached frame.
    if ( frame_d07cff22b21aefd96944100f593452f3 == cache_frame_d07cff22b21aefd96944100f593452f3 )
    {
        Py_DECREF( frame_d07cff22b21aefd96944100f593452f3 );
    }
    cache_frame_d07cff22b21aefd96944100f593452f3 = NULL;

    assertFrameObject( frame_d07cff22b21aefd96944100f593452f3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_16___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tx );
    Py_DECREF( par_tx );
    par_tx = NULL;

    CHECK_OBJECT( (PyObject *)par_rx );
    Py_DECREF( par_rx );
    par_rx = NULL;

    CHECK_OBJECT( (PyObject *)par_baudrate );
    Py_DECREF( par_baudrate );
    par_baudrate = NULL;

    CHECK_OBJECT( (PyObject *)par_bits );
    Py_DECREF( par_bits );
    par_bits = NULL;

    Py_XDECREF( par_parity );
    par_parity = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_receiver_buffer_size );
    Py_DECREF( par_receiver_buffer_size );
    par_receiver_buffer_size = NULL;

    CHECK_OBJECT( (PyObject *)par_flow );
    Py_DECREF( par_flow );
    par_flow = NULL;

    Py_XDECREF( var__UART );
    var__UART = NULL;

    CHECK_OBJECT( (PyObject *)var_uartPorts );
    Py_DECREF( var_uartPorts );
    var_uartPorts = NULL;

    Py_XDECREF( var_portId );
    var_portId = NULL;

    Py_XDECREF( var_portTx );
    var_portTx = NULL;

    Py_XDECREF( var_portRx );
    var_portRx = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tx );
    Py_DECREF( par_tx );
    par_tx = NULL;

    CHECK_OBJECT( (PyObject *)par_rx );
    Py_DECREF( par_rx );
    par_rx = NULL;

    CHECK_OBJECT( (PyObject *)par_baudrate );
    Py_DECREF( par_baudrate );
    par_baudrate = NULL;

    CHECK_OBJECT( (PyObject *)par_bits );
    Py_DECREF( par_bits );
    par_bits = NULL;

    Py_XDECREF( par_parity );
    par_parity = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_receiver_buffer_size );
    Py_DECREF( par_receiver_buffer_size );
    par_receiver_buffer_size = NULL;

    CHECK_OBJECT( (PyObject *)par_flow );
    Py_DECREF( par_flow );
    par_flow = NULL;

    Py_XDECREF( var__UART );
    var__UART = NULL;

    Py_XDECREF( var_uartPorts );
    var_uartPorts = NULL;

    Py_XDECREF( var_portId );
    var_portId = NULL;

    Py_XDECREF( var_portTx );
    var_portTx = NULL;

    Py_XDECREF( var_portRx );
    var_portRx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( busio$$$function_16___init__ );
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


static PyObject *impl_busio$$$function_17_deinit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_c92339785e4716153e025574d43a4864;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c92339785e4716153e025574d43a4864 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c92339785e4716153e025574d43a4864, codeobj_c92339785e4716153e025574d43a4864, module_busio, sizeof(void *) );
    frame_c92339785e4716153e025574d43a4864 = cache_frame_c92339785e4716153e025574d43a4864;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c92339785e4716153e025574d43a4864 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c92339785e4716153e025574d43a4864 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__uart, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c92339785e4716153e025574d43a4864 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c92339785e4716153e025574d43a4864 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c92339785e4716153e025574d43a4864, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c92339785e4716153e025574d43a4864->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c92339785e4716153e025574d43a4864, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c92339785e4716153e025574d43a4864,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_c92339785e4716153e025574d43a4864 == cache_frame_c92339785e4716153e025574d43a4864 )
    {
        Py_DECREF( frame_c92339785e4716153e025574d43a4864 );
    }
    cache_frame_c92339785e4716153e025574d43a4864 = NULL;

    assertFrameObject( frame_c92339785e4716153e025574d43a4864 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_17_deinit );
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
    NUITKA_CANNOT_GET_HERE( busio$$$function_17_deinit );
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


static PyObject *impl_busio$$$function_18_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_nbytes = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_b5730302ec0482584eab2d8cd28a2294;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b5730302ec0482584eab2d8cd28a2294 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b5730302ec0482584eab2d8cd28a2294, codeobj_b5730302ec0482584eab2d8cd28a2294, module_busio, sizeof(void *)+sizeof(void *) );
    frame_b5730302ec0482584eab2d8cd28a2294 = cache_frame_b5730302ec0482584eab2d8cd28a2294;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b5730302ec0482584eab2d8cd28a2294 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b5730302ec0482584eab2d8cd28a2294 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__uart );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_nbytes );
        tmp_args_element_name_1 = par_nbytes;
        frame_b5730302ec0482584eab2d8cd28a2294->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_read, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5730302ec0482584eab2d8cd28a2294 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5730302ec0482584eab2d8cd28a2294 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5730302ec0482584eab2d8cd28a2294 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b5730302ec0482584eab2d8cd28a2294, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b5730302ec0482584eab2d8cd28a2294->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b5730302ec0482584eab2d8cd28a2294, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b5730302ec0482584eab2d8cd28a2294,
        type_description_1,
        par_self,
        par_nbytes
    );


    // Release cached frame.
    if ( frame_b5730302ec0482584eab2d8cd28a2294 == cache_frame_b5730302ec0482584eab2d8cd28a2294 )
    {
        Py_DECREF( frame_b5730302ec0482584eab2d8cd28a2294 );
    }
    cache_frame_b5730302ec0482584eab2d8cd28a2294 = NULL;

    assertFrameObject( frame_b5730302ec0482584eab2d8cd28a2294 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_18_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_nbytes );
    Py_DECREF( par_nbytes );
    par_nbytes = NULL;

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

    CHECK_OBJECT( (PyObject *)par_nbytes );
    Py_DECREF( par_nbytes );
    par_nbytes = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( busio$$$function_18_read );
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


static PyObject *impl_busio$$$function_19_readinto( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_buf = python_pars[ 1 ];
    PyObject *par_nbytes = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_c7dacc4836f0cdc802ef0f0b70da5368;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c7dacc4836f0cdc802ef0f0b70da5368 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c7dacc4836f0cdc802ef0f0b70da5368, codeobj_c7dacc4836f0cdc802ef0f0b70da5368, module_busio, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c7dacc4836f0cdc802ef0f0b70da5368 = cache_frame_c7dacc4836f0cdc802ef0f0b70da5368;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c7dacc4836f0cdc802ef0f0b70da5368 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c7dacc4836f0cdc802ef0f0b70da5368 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__uart );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_buf );
        tmp_args_element_name_1 = par_buf;
        CHECK_OBJECT( par_nbytes );
        tmp_args_element_name_2 = par_nbytes;
        frame_c7dacc4836f0cdc802ef0f0b70da5368->m_frame.f_lineno = 212;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_readinto, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7dacc4836f0cdc802ef0f0b70da5368 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7dacc4836f0cdc802ef0f0b70da5368 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7dacc4836f0cdc802ef0f0b70da5368 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c7dacc4836f0cdc802ef0f0b70da5368, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c7dacc4836f0cdc802ef0f0b70da5368->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c7dacc4836f0cdc802ef0f0b70da5368, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c7dacc4836f0cdc802ef0f0b70da5368,
        type_description_1,
        par_self,
        par_buf,
        par_nbytes
    );


    // Release cached frame.
    if ( frame_c7dacc4836f0cdc802ef0f0b70da5368 == cache_frame_c7dacc4836f0cdc802ef0f0b70da5368 )
    {
        Py_DECREF( frame_c7dacc4836f0cdc802ef0f0b70da5368 );
    }
    cache_frame_c7dacc4836f0cdc802ef0f0b70da5368 = NULL;

    assertFrameObject( frame_c7dacc4836f0cdc802ef0f0b70da5368 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_19_readinto );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_buf );
    Py_DECREF( par_buf );
    par_buf = NULL;

    CHECK_OBJECT( (PyObject *)par_nbytes );
    Py_DECREF( par_nbytes );
    par_nbytes = NULL;

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

    CHECK_OBJECT( (PyObject *)par_buf );
    Py_DECREF( par_buf );
    par_buf = NULL;

    CHECK_OBJECT( (PyObject *)par_nbytes );
    Py_DECREF( par_nbytes );
    par_nbytes = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( busio$$$function_19_readinto );
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


static PyObject *impl_busio$$$function_20_readline( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_a17f1ac4a12957f997cf5c52a544f24d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a17f1ac4a12957f997cf5c52a544f24d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a17f1ac4a12957f997cf5c52a544f24d, codeobj_a17f1ac4a12957f997cf5c52a544f24d, module_busio, sizeof(void *) );
    frame_a17f1ac4a12957f997cf5c52a544f24d = cache_frame_a17f1ac4a12957f997cf5c52a544f24d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a17f1ac4a12957f997cf5c52a544f24d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a17f1ac4a12957f997cf5c52a544f24d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__uart );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a17f1ac4a12957f997cf5c52a544f24d->m_frame.f_lineno = 215;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_readline );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a17f1ac4a12957f997cf5c52a544f24d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a17f1ac4a12957f997cf5c52a544f24d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a17f1ac4a12957f997cf5c52a544f24d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a17f1ac4a12957f997cf5c52a544f24d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a17f1ac4a12957f997cf5c52a544f24d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a17f1ac4a12957f997cf5c52a544f24d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a17f1ac4a12957f997cf5c52a544f24d,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_a17f1ac4a12957f997cf5c52a544f24d == cache_frame_a17f1ac4a12957f997cf5c52a544f24d )
    {
        Py_DECREF( frame_a17f1ac4a12957f997cf5c52a544f24d );
    }
    cache_frame_a17f1ac4a12957f997cf5c52a544f24d = NULL;

    assertFrameObject( frame_a17f1ac4a12957f997cf5c52a544f24d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_20_readline );
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
    NUITKA_CANNOT_GET_HERE( busio$$$function_20_readline );
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


static PyObject *impl_busio$$$function_21_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_buf = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_c464e1bcac2567c8b4125128e88d32a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c464e1bcac2567c8b4125128e88d32a0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c464e1bcac2567c8b4125128e88d32a0, codeobj_c464e1bcac2567c8b4125128e88d32a0, module_busio, sizeof(void *)+sizeof(void *) );
    frame_c464e1bcac2567c8b4125128e88d32a0 = cache_frame_c464e1bcac2567c8b4125128e88d32a0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c464e1bcac2567c8b4125128e88d32a0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c464e1bcac2567c8b4125128e88d32a0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__uart );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_buf );
        tmp_args_element_name_1 = par_buf;
        frame_c464e1bcac2567c8b4125128e88d32a0->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_write, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c464e1bcac2567c8b4125128e88d32a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c464e1bcac2567c8b4125128e88d32a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c464e1bcac2567c8b4125128e88d32a0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c464e1bcac2567c8b4125128e88d32a0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c464e1bcac2567c8b4125128e88d32a0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c464e1bcac2567c8b4125128e88d32a0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c464e1bcac2567c8b4125128e88d32a0,
        type_description_1,
        par_self,
        par_buf
    );


    // Release cached frame.
    if ( frame_c464e1bcac2567c8b4125128e88d32a0 == cache_frame_c464e1bcac2567c8b4125128e88d32a0 )
    {
        Py_DECREF( frame_c464e1bcac2567c8b4125128e88d32a0 );
    }
    cache_frame_c464e1bcac2567c8b4125128e88d32a0 = NULL;

    assertFrameObject( frame_c464e1bcac2567c8b4125128e88d32a0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( busio$$$function_21_write );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_buf );
    Py_DECREF( par_buf );
    par_buf = NULL;

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

    CHECK_OBJECT( (PyObject *)par_buf );
    Py_DECREF( par_buf );
    par_buf = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( busio$$$function_21_write );
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



static PyObject *MAKE_FUNCTION_busio$$$function_10___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_busio$$$function_10___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_f25895fd22019cc3589993928699e319,
#endif
        codeobj_bdc0fc3236b6ac949e4dfa52a3ff5e09,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_busio,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_busio$$$function_11_configure( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_busio$$$function_11_configure,
        const_str_plain_configure,
#if PYTHON_VERSION >= 300
        const_str_digest_c75fc79708aba974c0bab00a5f89770e,
#endif
        codeobj_dff8381c8f9a8162a34012e2d58a35c5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_busio,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_busio$$$function_12_deinit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_busio$$$function_12_deinit,
        const_str_plain_deinit,
#if PYTHON_VERSION >= 300
        const_str_digest_6e662eb86859be8adce9b83e6bb07217,
#endif
        codeobj_9035c2a47b7065891c9067ea1ae6839f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_busio,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_busio$$$function_13_write( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_busio$$$function_13_write,
        const_str_plain_write,
#if PYTHON_VERSION >= 300
        const_str_digest_8a90b7bc90ab321ed5fdeb2f8c407d36,
#endif
        codeobj_aa094631bba4a07ddbc32eaa3be5a0a8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_busio,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_busio$$$function_14_readinto( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_busio$$$function_14_readinto,
        const_str_plain_readinto,
#if PYTHON_VERSION >= 300
        const_str_digest_4fbae985f092f4091e6fdcac3426d015,
#endif
        codeobj_0026c0d0d564354878e7015a5011078a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_busio,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_busio$$$function_15_write_readinto( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_busio$$$function_15_write_readinto,
        const_str_plain_write_readinto,
#if PYTHON_VERSION >= 300
        const_str_digest_042902472e0ae572ba4bf463d0fc37cd,
#endif
        codeobj_9f5a529fc52240a54b6600739f19fd00,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_busio,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_busio$$$function_16___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_busio$$$function_16___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_4a7345505cb7cac003dc637e474a7d88,
#endif
        codeobj_d07cff22b21aefd96944100f593452f3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_busio,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_busio$$$function_17_deinit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_busio$$$function_17_deinit,
        const_str_plain_deinit,
#if PYTHON_VERSION >= 300
        const_str_digest_ce6d54f226df71c96d0452299f323856,
#endif
        codeobj_c92339785e4716153e025574d43a4864,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_busio,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_busio$$$function_18_read( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_busio$$$function_18_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 300
        const_str_digest_0735d9757ad8e5d4ec8b7ec410edcf64,
#endif
        codeobj_b5730302ec0482584eab2d8cd28a2294,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_busio,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_busio$$$function_19_readinto( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_busio$$$function_19_readinto,
        const_str_plain_readinto,
#if PYTHON_VERSION >= 300
        const_str_digest_ed065d1af1912bf2d3e92d0b74ef81be,
#endif
        codeobj_c7dacc4836f0cdc802ef0f0b70da5368,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_busio,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_busio$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_busio$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_6fba6dcdb09ebe74c73d220c28a4c8b9,
#endif
        codeobj_b3a88b9e73949fa7eea4c20f14598266,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_busio,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_busio$$$function_20_readline(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_busio$$$function_20_readline,
        const_str_plain_readline,
#if PYTHON_VERSION >= 300
        const_str_digest_1fb47adee9db6c08574330e5076de85f,
#endif
        codeobj_a17f1ac4a12957f997cf5c52a544f24d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_busio,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_busio$$$function_21_write(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_busio$$$function_21_write,
        const_str_plain_write,
#if PYTHON_VERSION >= 300
        const_str_digest_d6693a7a890ebd72e9fdbdacb6c2cfef,
#endif
        codeobj_c464e1bcac2567c8b4125128e88d32a0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_busio,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_busio$$$function_2_init(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_busio$$$function_2_init,
        const_str_plain_init,
#if PYTHON_VERSION >= 300
        const_str_digest_4b129ba630d1386329126974bf8bb58f,
#endif
        codeobj_b3a6e4cc4c31951fe87824bb6f8bc182,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_busio,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_busio$$$function_3_deinit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_busio$$$function_3_deinit,
        const_str_plain_deinit,
#if PYTHON_VERSION >= 300
        const_str_digest_21e1d84b542bdbb523d654374ba2fe57,
#endif
        codeobj_3f0a59487159d599810394da57331112,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_busio,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_busio$$$function_4___enter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_busio$$$function_4___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 300
        const_str_digest_f6463a9e4f9ba98dcc70831d97062d31,
#endif
        codeobj_d86bcf1fa8f3b7fa1191213a8f44f82d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_busio,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_busio$$$function_5___exit__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_busio$$$function_5___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 300
        const_str_digest_17f991a0fbbb017291c47b5565c8d18d,
#endif
        codeobj_a38a20c43a64658745bc07a29bc4a04c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_busio,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_busio$$$function_6_scan(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_busio$$$function_6_scan,
        const_str_plain_scan,
#if PYTHON_VERSION >= 300
        const_str_digest_4e256d114264995ca73901ec126f97c3,
#endif
        codeobj_ab396123cd37927b225100e84d717ba5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_busio,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_busio$$$function_7_readfrom_into( PyObject *kw_defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_busio$$$function_7_readfrom_into,
        const_str_plain_readfrom_into,
#if PYTHON_VERSION >= 300
        const_str_digest_0daddf6c4886f3926c22848feb4b084b,
#endif
        codeobj_a34d827081845a3a5f26c66df6fd0a73,
        NULL,
#if PYTHON_VERSION >= 300
        kw_defaults,
        NULL,
#endif
        module_busio,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_busio$$$function_8_writeto( PyObject *kw_defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_busio$$$function_8_writeto,
        const_str_plain_writeto,
#if PYTHON_VERSION >= 300
        const_str_digest_f4a5b997d0b3c1411d2a276dc0aa3d6e,
#endif
        codeobj_86a5712905a3346d7566c4951daa19d9,
        NULL,
#if PYTHON_VERSION >= 300
        kw_defaults,
        NULL,
#endif
        module_busio,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_busio$$$function_9_writeto_then_readfrom( PyObject *kw_defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_busio$$$function_9_writeto_then_readfrom,
        const_str_plain_writeto_then_readfrom,
#if PYTHON_VERSION >= 300
        const_str_digest_2ab60b4f55405026964a3306bc31e42a,
#endif
        codeobj_d9598f3cfefbd02a50510d9d3c303022,
        NULL,
#if PYTHON_VERSION >= 300
        kw_defaults,
        NULL,
#endif
        module_busio,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_busio =
{
    PyModuleDef_HEAD_INIT,
    "busio",
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

MOD_INIT_DECL( busio )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_busio );
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
    puts("busio: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("busio: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("busio: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initbusio" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_busio = Py_InitModule4(
        "busio",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_busio = PyModule_Create( &mdef_busio );
#endif

    moduledict_busio = MODULE_DICT( module_busio );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_busio,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_busio,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_busio,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_busio,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_busio );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_busio, module_busio );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_busio, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_busio, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_busio, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_busio, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *tmp_UART$class_creation_1__bases = NULL;
    PyObject *tmp_UART$class_creation_1__bases_orig = NULL;
    PyObject *tmp_UART$class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_UART$class_creation_1__metaclass = NULL;
    PyObject *tmp_UART$class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_abccb80909eba7f7b99632a7b8905200;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_busio_14 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_42563ab4225941908f3257de174a961e_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_42563ab4225941908f3257de174a961e_2 = NULL;
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
    PyObject *locals_busio_72 = NULL;
    struct Nuitka_FrameObject *frame_c68f752ccd7f8053442a693aac654fee_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c68f752ccd7f8053442a693aac654fee_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_busio_147 = NULL;
    struct Nuitka_FrameObject *frame_b3f9b2128e5b3cb7176744c20ee2db75_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *locals_busio_148 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    static struct Nuitka_FrameObject *cache_frame_b3f9b2128e5b3cb7176744c20ee2db75_4 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_ec3c60490c5d09e695aa6fc05055faaa;
        UPDATE_STRING_DICT0( moduledict_busio, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_busio, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_abccb80909eba7f7b99632a7b8905200 = MAKE_MODULE_FRAME( codeobj_abccb80909eba7f7b99632a7b8905200, module_busio );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_abccb80909eba7f7b99632a7b8905200 );
    assert( Py_REFCNT( frame_abccb80909eba7f7b99632a7b8905200 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_busio, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_adafruit_blinka;
        tmp_globals_name_1 = (PyObject *)moduledict_busio;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_Enum_str_plain_Lockable_str_plain_agnostic_tuple;
        tmp_level_name_1 = const_int_0;
        frame_abccb80909eba7f7b99632a7b8905200->m_frame.f_lineno = 10;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Enum );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_busio, (Nuitka_StringObject *)const_str_plain_Enum, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_Lockable );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_busio, (Nuitka_StringObject *)const_str_plain_Lockable, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_agnostic );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_busio, (Nuitka_StringObject *)const_str_plain_agnostic, tmp_assign_source_7 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_461f5cb03aca48d6eb285a5f7999fc4a;
        tmp_globals_name_2 = (PyObject *)moduledict_busio;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_board_id_str_plain_detector_tuple;
        tmp_level_name_2 = const_int_0;
        frame_abccb80909eba7f7b99632a7b8905200->m_frame.f_lineno = 11;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_board_id );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_busio, (Nuitka_StringObject *)const_str_plain_board_id, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_detector );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_busio, (Nuitka_StringObject *)const_str_plain_detector, tmp_assign_source_10 );
    }
    goto try_end_2;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_a92f659b27c80c84236371e5d850c570;
        tmp_globals_name_3 = (PyObject *)moduledict_busio;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_abccb80909eba7f7b99632a7b8905200->m_frame.f_lineno = 12;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_board );
        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_busio, (Nuitka_StringObject *)const_str_plain_ap_board, tmp_assign_source_11 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_Lockable );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Lockable );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Lockable" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 14;

            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_assign_source_12 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_12, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases_orig == NULL );
        tmp_class_creation_1__bases_orig = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT( tmp_class_creation_1__bases_orig );
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_13 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_class_creation_1__bases );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_subscribed_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_type_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_15 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_15;
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


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        branch_no_1:;
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
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 14;

                goto try_except_handler_3;
            }
            tmp_tuple_element_2 = const_str_plain_I2C;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_abccb80909eba7f7b99632a7b8905200->m_frame.f_lineno = 14;
            tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 14;

                goto try_except_handler_3;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_16;
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


                exception_lineno = 14;

                goto try_except_handler_3;
            }
            tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_raise_value_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_4;
                PyObject *tmp_type_arg_2;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 14;

                    goto try_except_handler_3;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_4 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 14;

                    goto try_except_handler_3;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 14;

                    goto try_except_handler_3;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 14;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_3;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_17;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_busio_14 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_plain_busio;
        tmp_res = PyObject_SetItem( locals_busio_14, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_5;
        }
        tmp_dictset_value = const_str_plain_I2C;
        tmp_res = PyObject_SetItem( locals_busio_14, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_5;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_42563ab4225941908f3257de174a961e_2, codeobj_42563ab4225941908f3257de174a961e, module_busio, sizeof(void *) );
        frame_42563ab4225941908f3257de174a961e_2 = cache_frame_42563ab4225941908f3257de174a961e_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_42563ab4225941908f3257de174a961e_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_42563ab4225941908f3257de174a961e_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_int_pos_400000_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_busio$$$function_1___init__( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_busio_14, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 15;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_busio$$$function_2_init(  );



        tmp_res = PyObject_SetItem( locals_busio_14, const_str_plain_init, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_busio$$$function_3_deinit(  );



        tmp_res = PyObject_SetItem( locals_busio_14, const_str_plain_deinit, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_busio$$$function_4___enter__(  );



        tmp_res = PyObject_SetItem( locals_busio_14, const_str_plain___enter__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_busio$$$function_5___exit__(  );



        tmp_res = PyObject_SetItem( locals_busio_14, const_str_plain___exit__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_busio$$$function_6_scan(  );



        tmp_res = PyObject_SetItem( locals_busio_14, const_str_plain_scan, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_kw_defaults_1;
            tmp_kw_defaults_1 = PyDict_Copy( const_dict_13ade500ff25e5785a0570f89af7d3c6 );
            tmp_dictset_value = MAKE_FUNCTION_busio$$$function_7_readfrom_into( tmp_kw_defaults_1 );



            tmp_res = PyObject_SetItem( locals_busio_14, const_str_plain_readfrom_into, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_kw_defaults_2;
            tmp_kw_defaults_2 = PyDict_Copy( const_dict_8aeb909f6fefcf5760c5c4604f52a0cc );
            tmp_dictset_value = MAKE_FUNCTION_busio$$$function_8_writeto( tmp_kw_defaults_2 );



            tmp_res = PyObject_SetItem( locals_busio_14, const_str_plain_writeto, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_kw_defaults_3;
            tmp_kw_defaults_3 = PyDict_Copy( const_dict_bd9acfb6650818d787e11cf74e7981d1 );
            tmp_dictset_value = MAKE_FUNCTION_busio$$$function_9_writeto_then_readfrom( tmp_kw_defaults_3 );



            tmp_res = PyObject_SetItem( locals_busio_14, const_str_plain_writeto_then_readfrom, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_42563ab4225941908f3257de174a961e_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_42563ab4225941908f3257de174a961e_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_42563ab4225941908f3257de174a961e_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_42563ab4225941908f3257de174a961e_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_42563ab4225941908f3257de174a961e_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_42563ab4225941908f3257de174a961e_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_42563ab4225941908f3257de174a961e_2 == cache_frame_42563ab4225941908f3257de174a961e_2 )
        {
            Py_DECREF( frame_42563ab4225941908f3257de174a961e_2 );
        }
        cache_frame_42563ab4225941908f3257de174a961e_2 = NULL;

        assertFrameObject( frame_42563ab4225941908f3257de174a961e_2 );

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
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT( tmp_class_creation_1__bases_orig );
            tmp_compexpr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 14;

                goto try_except_handler_5;
            }
            tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            CHECK_OBJECT( tmp_class_creation_1__bases_orig );
            tmp_dictset_value = tmp_class_creation_1__bases_orig;
            tmp_res = PyObject_SetItem( locals_busio_14, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 14;

                goto try_except_handler_5;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_I2C;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_busio_14;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_abccb80909eba7f7b99632a7b8905200->m_frame.f_lineno = 14;
            tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 14;

                goto try_except_handler_5;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_19;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_18 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_18 );
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( busio );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF( locals_busio_14 );
        locals_busio_14 = NULL;
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

        Py_DECREF( locals_busio_14 );
        locals_busio_14 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( busio );
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
        NUITKA_CANNOT_GET_HERE( busio );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 14;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_busio, (Nuitka_StringObject *)const_str_plain_I2C, tmp_assign_source_18 );
    }
    goto try_end_3;
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

    Py_XDECREF( tmp_class_creation_1__bases_orig );
    tmp_class_creation_1__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
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
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases_orig );
    Py_DECREF( tmp_class_creation_1__bases_orig );
    tmp_class_creation_1__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_Lockable );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Lockable );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Lockable" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 72;

            goto try_except_handler_6;
        }

        tmp_tuple_element_5 = tmp_mvar_value_4;
        tmp_assign_source_20 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_assign_source_20, 0, tmp_tuple_element_5 );
        assert( tmp_class_creation_2__bases_orig == NULL );
        tmp_class_creation_2__bases_orig = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT( tmp_class_creation_2__bases_orig );
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF( tmp_dircall_arg1_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_21 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_6;
        }
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_6;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_3;
        }
        else
        {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = const_str_plain_metaclass;
        tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_6;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_class_creation_2__bases );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_6;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_4;
        }
        else
        {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_subscribed_name_2 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_type_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_6;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_6;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_2 );
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_23 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_6;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_23;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_name_6;
        tmp_key_name_6 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_6;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_6;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_5 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_5, const_str_plain___prepare__ );
        tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_6 = tmp_class_creation_2__metaclass;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_6;
            }
            tmp_tuple_element_6 = const_str_plain_SPI;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_abccb80909eba7f7b99632a7b8905200->m_frame.f_lineno = 72;
            tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_6;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_24;
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_7 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_7, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_6;
            }
            tmp_condition_result_11 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_7;
            }
            else
            {
                goto branch_no_7;
            }
            branch_yes_7:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_raise_value_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_8;
                PyObject *tmp_type_arg_4;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_7 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 72;

                    goto try_except_handler_6;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_7 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_8 = BUILTIN_TYPE1( tmp_type_arg_4 );
                assert( !(tmp_source_name_8 == NULL) );
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_8 );
                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 72;

                    goto try_except_handler_6;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_7 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 72;

                    goto try_except_handler_6;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 72;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_6;
            }
            branch_no_7:;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_25;
            tmp_assign_source_25 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_25;
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_busio_72 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_plain_busio;
        tmp_res = PyObject_SetItem( locals_busio_72, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_8;
        }
        tmp_dictset_value = const_str_plain_SPI;
        tmp_res = PyObject_SetItem( locals_busio_72, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_8;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_c68f752ccd7f8053442a693aac654fee_3, codeobj_c68f752ccd7f8053442a693aac654fee, module_busio, sizeof(void *) );
        frame_c68f752ccd7f8053442a693aac654fee_3 = cache_frame_c68f752ccd7f8053442a693aac654fee_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_c68f752ccd7f8053442a693aac654fee_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_c68f752ccd7f8053442a693aac654fee_3 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_none_none_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_dictset_value = MAKE_FUNCTION_busio$$$function_10___init__( tmp_defaults_2 );



            tmp_res = PyObject_SetItem( locals_busio_72, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_int_pos_100000_int_0_int_0_int_pos_8_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_dictset_value = MAKE_FUNCTION_busio$$$function_11_configure( tmp_defaults_3 );



            tmp_res = PyObject_SetItem( locals_busio_72, const_str_plain_configure, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_busio$$$function_12_deinit(  );



        tmp_res = PyObject_SetItem( locals_busio_72, const_str_plain_deinit, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_int_0_none_tuple;
            Py_INCREF( tmp_defaults_4 );
            tmp_dictset_value = MAKE_FUNCTION_busio$$$function_13_write( tmp_defaults_4 );



            tmp_res = PyObject_SetItem( locals_busio_72, const_str_plain_write, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_int_0_none_int_0_tuple;
            Py_INCREF( tmp_defaults_5 );
            tmp_dictset_value = MAKE_FUNCTION_busio$$$function_14_readinto( tmp_defaults_5 );



            tmp_res = PyObject_SetItem( locals_busio_72, const_str_plain_readinto, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = const_tuple_int_0_none_int_0_none_tuple;
            Py_INCREF( tmp_defaults_6 );
            tmp_dictset_value = MAKE_FUNCTION_busio$$$function_15_write_readinto( tmp_defaults_6 );



            tmp_res = PyObject_SetItem( locals_busio_72, const_str_plain_write_readinto, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_c68f752ccd7f8053442a693aac654fee_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_c68f752ccd7f8053442a693aac654fee_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_c68f752ccd7f8053442a693aac654fee_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_c68f752ccd7f8053442a693aac654fee_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_c68f752ccd7f8053442a693aac654fee_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_c68f752ccd7f8053442a693aac654fee_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_c68f752ccd7f8053442a693aac654fee_3 == cache_frame_c68f752ccd7f8053442a693aac654fee_3 )
        {
            Py_DECREF( frame_c68f752ccd7f8053442a693aac654fee_3 );
        }
        cache_frame_c68f752ccd7f8053442a693aac654fee_3 = NULL;

        assertFrameObject( frame_c68f752ccd7f8053442a693aac654fee_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_compexpr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT( tmp_class_creation_2__bases_orig );
            tmp_compexpr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_8;
            }
            tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_8;
            }
            else
            {
                goto branch_no_8;
            }
            branch_yes_8:;
            CHECK_OBJECT( tmp_class_creation_2__bases_orig );
            tmp_dictset_value = tmp_class_creation_2__bases_orig;
            tmp_res = PyObject_SetItem( locals_busio_72, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_8;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = const_str_plain_SPI;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_8 );
            tmp_tuple_element_8 = locals_busio_72;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_abccb80909eba7f7b99632a7b8905200->m_frame.f_lineno = 72;
            tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_8;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_27;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_26 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_26 );
        goto try_return_handler_8;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( busio );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF( locals_busio_72 );
        locals_busio_72 = NULL;
        goto try_return_handler_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_busio_72 );
        locals_busio_72 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( busio );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( busio );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 72;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_busio, (Nuitka_StringObject *)const_str_plain_SPI, tmp_assign_source_26 );
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases_orig );
    tmp_class_creation_2__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases_orig );
    Py_DECREF( tmp_class_creation_2__bases_orig );
    tmp_class_creation_2__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
    Py_DECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_Lockable );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Lockable );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Lockable" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 147;

            goto try_except_handler_9;
        }

        tmp_tuple_element_9 = tmp_mvar_value_5;
        tmp_assign_source_28 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_assign_source_28, 0, tmp_tuple_element_9 );
        assert( tmp_class_creation_3__bases_orig == NULL );
        tmp_class_creation_3__bases_orig = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT( tmp_class_creation_3__bases_orig );
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF( tmp_dircall_arg1_3 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_29 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;

            goto try_except_handler_9;
        }
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = PyDict_New();
        assert( tmp_class_creation_3__class_decl_dict == NULL );
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;

            goto try_except_handler_9;
        }
        tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_5;
        }
        else
        {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = const_str_plain_metaclass;
        tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;

            goto try_except_handler_9;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_class_creation_3__bases );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;

            goto try_except_handler_9;
        }
        tmp_condition_result_14 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_6;
        }
        else
        {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_subscribed_name_3 = tmp_class_creation_3__bases;
        tmp_subscript_name_3 = const_int_0;
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        if ( tmp_type_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;

            goto try_except_handler_9;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_5 );
        Py_DECREF( tmp_type_arg_5 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;

            goto try_except_handler_9;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_3 );
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_31 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
        Py_DECREF( tmp_metaclass_name_3 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;

            goto try_except_handler_9;
        }
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_31;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_name_9;
        tmp_key_name_9 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;

            goto try_except_handler_9;
        }
        tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;

            goto try_except_handler_9;
        }
        branch_no_9:;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_source_name_9 = tmp_class_creation_3__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_9, const_str_plain___prepare__ );
        tmp_condition_result_16 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kw_name_5;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_source_name_10 = tmp_class_creation_3__metaclass;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 147;

                goto try_except_handler_9;
            }
            tmp_tuple_element_10 = const_str_plain_UART;
            tmp_args_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_10 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
            frame_abccb80909eba7f7b99632a7b8905200->m_frame.f_lineno = 147;
            tmp_assign_source_32 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_5 );
            if ( tmp_assign_source_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 147;

                goto try_except_handler_9;
            }
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_32;
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_source_name_11 = tmp_class_creation_3__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_11, const_str_plain___getitem__ );
            tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 147;

                goto try_except_handler_9;
            }
            tmp_condition_result_17 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_11;
            }
            else
            {
                goto branch_no_11;
            }
            branch_yes_11:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_raise_value_3;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_getattr_target_3;
                PyObject *tmp_getattr_attr_3;
                PyObject *tmp_getattr_default_3;
                PyObject *tmp_source_name_12;
                PyObject *tmp_type_arg_6;
                tmp_raise_type_3 = PyExc_TypeError;
                tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_3__metaclass );
                tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
                tmp_getattr_attr_3 = const_str_plain___name__;
                tmp_getattr_default_3 = const_str_angle_metaclass;
                tmp_tuple_element_11 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
                if ( tmp_tuple_element_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 147;

                    goto try_except_handler_9;
                }
                tmp_right_name_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_11 );
                CHECK_OBJECT( tmp_class_creation_3__prepared );
                tmp_type_arg_6 = tmp_class_creation_3__prepared;
                tmp_source_name_12 = BUILTIN_TYPE1( tmp_type_arg_6 );
                assert( !(tmp_source_name_12 == NULL) );
                tmp_tuple_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_12 );
                if ( tmp_tuple_element_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_3 );

                    exception_lineno = 147;

                    goto try_except_handler_9;
                }
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_11 );
                tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_raise_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 147;

                    goto try_except_handler_9;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF( tmp_raise_type_3 );
                exception_value = tmp_raise_value_3;
                exception_lineno = 147;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_9;
            }
            branch_no_11:;
        }
        goto branch_end_10;
        branch_no_10:;
        {
            PyObject *tmp_assign_source_33;
            tmp_assign_source_33 = PyDict_New();
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_33;
        }
        branch_end_10:;
    }
    {
        PyObject *tmp_assign_source_34;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_busio_147 = tmp_set_locals_3;
            Py_INCREF( tmp_set_locals_3 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_plain_busio;
        tmp_res = PyObject_SetItem( locals_busio_147, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;

            goto try_except_handler_11;
        }
        tmp_dictset_value = const_str_plain_UART;
        tmp_res = PyObject_SetItem( locals_busio_147, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;

            goto try_except_handler_11;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_b3f9b2128e5b3cb7176744c20ee2db75_4, codeobj_b3f9b2128e5b3cb7176744c20ee2db75, module_busio, sizeof(void *) );
        frame_b3f9b2128e5b3cb7176744c20ee2db75_4 = cache_frame_b3f9b2128e5b3cb7176744c20ee2db75_4;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_b3f9b2128e5b3cb7176744c20ee2db75_4 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_b3f9b2128e5b3cb7176744c20ee2db75_4 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_mvar_value_6;
            tmp_tuple_element_12 = PyObject_GetItem( locals_busio_147, const_str_plain_Enum );

            if ( tmp_tuple_element_12 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain_Enum );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Enum );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Enum" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 148;
                    type_description_2 = "o";
                    goto try_except_handler_12;
                }

                tmp_tuple_element_12 = tmp_mvar_value_6;
                Py_INCREF( tmp_tuple_element_12 );
                }
            }

            tmp_assign_source_35 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_assign_source_35, 0, tmp_tuple_element_12 );
            assert( tmp_UART$class_creation_1__bases_orig == NULL );
            tmp_UART$class_creation_1__bases_orig = tmp_assign_source_35;
        }
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_dircall_arg1_4;
            CHECK_OBJECT( tmp_UART$class_creation_1__bases_orig );
            tmp_dircall_arg1_4 = tmp_UART$class_creation_1__bases_orig;
            Py_INCREF( tmp_dircall_arg1_4 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
                tmp_assign_source_36 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
            }
            if ( tmp_assign_source_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            assert( tmp_UART$class_creation_1__bases == NULL );
            tmp_UART$class_creation_1__bases = tmp_assign_source_36;
        }
        {
            PyObject *tmp_assign_source_37;
            tmp_assign_source_37 = PyDict_New();
            assert( tmp_UART$class_creation_1__class_decl_dict == NULL );
            tmp_UART$class_creation_1__class_decl_dict = tmp_assign_source_37;
        }
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_metaclass_name_4;
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_key_name_10;
            PyObject *tmp_dict_name_10;
            PyObject *tmp_dict_name_11;
            PyObject *tmp_key_name_11;
            nuitka_bool tmp_condition_result_19;
            int tmp_truth_name_4;
            PyObject *tmp_type_arg_7;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_bases_name_4;
            tmp_key_name_10 = const_str_plain_metaclass;
            CHECK_OBJECT( tmp_UART$class_creation_1__class_decl_dict );
            tmp_dict_name_10 = tmp_UART$class_creation_1__class_decl_dict;
            tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_condition_result_18 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_7;
            }
            else
            {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            CHECK_OBJECT( tmp_UART$class_creation_1__class_decl_dict );
            tmp_dict_name_11 = tmp_UART$class_creation_1__class_decl_dict;
            tmp_key_name_11 = const_str_plain_metaclass;
            tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
            if ( tmp_metaclass_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            CHECK_OBJECT( tmp_UART$class_creation_1__bases );
            tmp_truth_name_4 = CHECK_IF_TRUE( tmp_UART$class_creation_1__bases );
            if ( tmp_truth_name_4 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_condition_result_19 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_8;
            }
            else
            {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            CHECK_OBJECT( tmp_UART$class_creation_1__bases );
            tmp_subscribed_name_4 = tmp_UART$class_creation_1__bases;
            tmp_subscript_name_4 = const_int_0;
            tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
            if ( tmp_type_arg_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_7 );
            Py_DECREF( tmp_type_arg_7 );
            if ( tmp_metaclass_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
            Py_INCREF( tmp_metaclass_name_4 );
            condexpr_end_8:;
            condexpr_end_7:;
            CHECK_OBJECT( tmp_UART$class_creation_1__bases );
            tmp_bases_name_4 = tmp_UART$class_creation_1__bases;
            tmp_assign_source_38 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
            Py_DECREF( tmp_metaclass_name_4 );
            if ( tmp_assign_source_38 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            assert( tmp_UART$class_creation_1__metaclass == NULL );
            tmp_UART$class_creation_1__metaclass = tmp_assign_source_38;
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_key_name_12;
            PyObject *tmp_dict_name_12;
            tmp_key_name_12 = const_str_plain_metaclass;
            CHECK_OBJECT( tmp_UART$class_creation_1__class_decl_dict );
            tmp_dict_name_12 = tmp_UART$class_creation_1__class_decl_dict;
            tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_condition_result_20 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_20 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_12;
            }
            else
            {
                goto branch_no_12;
            }
            branch_yes_12:;
            CHECK_OBJECT( tmp_UART$class_creation_1__class_decl_dict );
            tmp_dictdel_dict = tmp_UART$class_creation_1__class_decl_dict;
            tmp_dictdel_key = const_str_plain_metaclass;
            tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            branch_no_12:;
        }
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_source_name_13;
            CHECK_OBJECT( tmp_UART$class_creation_1__metaclass );
            tmp_source_name_13 = tmp_UART$class_creation_1__metaclass;
            tmp_res = PyObject_HasAttr( tmp_source_name_13, const_str_plain___prepare__ );
            tmp_condition_result_21 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_21 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_13;
            }
            else
            {
                goto branch_no_13;
            }
            branch_yes_13:;
            {
                PyObject *tmp_assign_source_39;
                PyObject *tmp_called_name_6;
                PyObject *tmp_source_name_14;
                PyObject *tmp_args_name_6;
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_kw_name_6;
                CHECK_OBJECT( tmp_UART$class_creation_1__metaclass );
                tmp_source_name_14 = tmp_UART$class_creation_1__metaclass;
                tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___prepare__ );
                if ( tmp_called_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 148;
                    type_description_2 = "o";
                    goto try_except_handler_12;
                }
                tmp_tuple_element_13 = const_str_plain_Parity;
                tmp_args_name_6 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_13 );
                PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_13 );
                CHECK_OBJECT( tmp_UART$class_creation_1__bases );
                tmp_tuple_element_13 = tmp_UART$class_creation_1__bases;
                Py_INCREF( tmp_tuple_element_13 );
                PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_13 );
                CHECK_OBJECT( tmp_UART$class_creation_1__class_decl_dict );
                tmp_kw_name_6 = tmp_UART$class_creation_1__class_decl_dict;
                frame_b3f9b2128e5b3cb7176744c20ee2db75_4->m_frame.f_lineno = 148;
                tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_args_name_6 );
                if ( tmp_assign_source_39 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 148;
                    type_description_2 = "o";
                    goto try_except_handler_12;
                }
                assert( tmp_UART$class_creation_1__prepared == NULL );
                tmp_UART$class_creation_1__prepared = tmp_assign_source_39;
            }
            {
                nuitka_bool tmp_condition_result_22;
                PyObject *tmp_operand_name_4;
                PyObject *tmp_source_name_15;
                CHECK_OBJECT( tmp_UART$class_creation_1__prepared );
                tmp_source_name_15 = tmp_UART$class_creation_1__prepared;
                tmp_res = PyObject_HasAttr( tmp_source_name_15, const_str_plain___getitem__ );
                tmp_operand_name_4 = ( tmp_res != 0 ) ? Py_True : Py_False;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 148;
                    type_description_2 = "o";
                    goto try_except_handler_12;
                }
                tmp_condition_result_22 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_22 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_14;
                }
                else
                {
                    goto branch_no_14;
                }
                branch_yes_14:;
                {
                    PyObject *tmp_raise_type_4;
                    PyObject *tmp_raise_value_4;
                    PyObject *tmp_left_name_4;
                    PyObject *tmp_right_name_4;
                    PyObject *tmp_tuple_element_14;
                    PyObject *tmp_getattr_target_4;
                    PyObject *tmp_getattr_attr_4;
                    PyObject *tmp_getattr_default_4;
                    PyObject *tmp_source_name_16;
                    PyObject *tmp_type_arg_8;
                    tmp_raise_type_4 = PyExc_TypeError;
                    tmp_left_name_4 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                    CHECK_OBJECT( tmp_UART$class_creation_1__metaclass );
                    tmp_getattr_target_4 = tmp_UART$class_creation_1__metaclass;
                    tmp_getattr_attr_4 = const_str_plain___name__;
                    tmp_getattr_default_4 = const_str_angle_metaclass;
                    tmp_tuple_element_14 = BUILTIN_GETATTR( tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4 );
                    if ( tmp_tuple_element_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 148;
                        type_description_2 = "o";
                        goto try_except_handler_12;
                    }
                    tmp_right_name_4 = PyTuple_New( 2 );
                    PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_14 );
                    CHECK_OBJECT( tmp_UART$class_creation_1__prepared );
                    tmp_type_arg_8 = tmp_UART$class_creation_1__prepared;
                    tmp_source_name_16 = BUILTIN_TYPE1( tmp_type_arg_8 );
                    assert( !(tmp_source_name_16 == NULL) );
                    tmp_tuple_element_14 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___name__ );
                    Py_DECREF( tmp_source_name_16 );
                    if ( tmp_tuple_element_14 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_right_name_4 );

                        exception_lineno = 148;
                        type_description_2 = "o";
                        goto try_except_handler_12;
                    }
                    PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_14 );
                    tmp_raise_value_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                    Py_DECREF( tmp_right_name_4 );
                    if ( tmp_raise_value_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 148;
                        type_description_2 = "o";
                        goto try_except_handler_12;
                    }
                    exception_type = tmp_raise_type_4;
                    Py_INCREF( tmp_raise_type_4 );
                    exception_value = tmp_raise_value_4;
                    exception_lineno = 148;
                    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    goto try_except_handler_12;
                }
                branch_no_14:;
            }
            goto branch_end_13;
            branch_no_13:;
            {
                PyObject *tmp_assign_source_40;
                tmp_assign_source_40 = PyDict_New();
                assert( tmp_UART$class_creation_1__prepared == NULL );
                tmp_UART$class_creation_1__prepared = tmp_assign_source_40;
            }
            branch_end_13:;
        }
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT( tmp_UART$class_creation_1__prepared );
            tmp_set_locals_4 = tmp_UART$class_creation_1__prepared;
            locals_busio_148 = tmp_set_locals_4;
            Py_INCREF( tmp_set_locals_4 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_plain_busio;
        tmp_res = PyObject_SetItem( locals_busio_148, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_2 = "o";
            goto try_except_handler_14;
        }
        tmp_dictset_value = const_str_digest_17b84cd9551e6d49511b289faa1b0e4c;
        tmp_res = PyObject_SetItem( locals_busio_148, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_2 = "o";
            goto try_except_handler_14;
        }
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( tmp_UART$class_creation_1__bases );
            tmp_compexpr_left_3 = tmp_UART$class_creation_1__bases;
            CHECK_OBJECT( tmp_UART$class_creation_1__bases_orig );
            tmp_compexpr_right_3 = tmp_UART$class_creation_1__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_condition_result_23 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_23 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_15;
            }
            else
            {
                goto branch_no_15;
            }
            branch_yes_15:;
            CHECK_OBJECT( tmp_UART$class_creation_1__bases_orig );
            tmp_dictset_value = tmp_UART$class_creation_1__bases_orig;
            tmp_res = PyObject_SetItem( locals_busio_148, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            branch_no_15:;
        }
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_name_7;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kw_name_7;
            CHECK_OBJECT( tmp_UART$class_creation_1__metaclass );
            tmp_called_name_7 = tmp_UART$class_creation_1__metaclass;
            tmp_tuple_element_15 = const_str_plain_Parity;
            tmp_args_name_7 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_15 );
            PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_15 );
            CHECK_OBJECT( tmp_UART$class_creation_1__bases );
            tmp_tuple_element_15 = tmp_UART$class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_15 );
            PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_15 );
            tmp_tuple_element_15 = locals_busio_148;
            Py_INCREF( tmp_tuple_element_15 );
            PyTuple_SET_ITEM( tmp_args_name_7, 2, tmp_tuple_element_15 );
            CHECK_OBJECT( tmp_UART$class_creation_1__class_decl_dict );
            tmp_kw_name_7 = tmp_UART$class_creation_1__class_decl_dict;
            frame_b3f9b2128e5b3cb7176744c20ee2db75_4->m_frame.f_lineno = 148;
            tmp_assign_source_41 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
            Py_DECREF( tmp_args_name_7 );
            if ( tmp_assign_source_41 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            assert( outline_3_var___class__ == NULL );
            outline_3_var___class__ = tmp_assign_source_41;
        }
        CHECK_OBJECT( outline_3_var___class__ );
        tmp_dictset_value = outline_3_var___class__;
        Py_INCREF( tmp_dictset_value );
        goto try_return_handler_14;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( busio );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF( locals_busio_148 );
        locals_busio_148 = NULL;
        goto try_return_handler_13;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_busio_148 );
        locals_busio_148 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_13;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( busio );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
        Py_DECREF( outline_3_var___class__ );
        outline_3_var___class__ = NULL;

        goto outline_result_4;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_4;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( busio );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_4:;
        exception_lineno = 148;
        goto try_except_handler_12;
        outline_result_4:;
        tmp_res = PyObject_SetItem( locals_busio_147, const_str_plain_Parity, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_2 = "o";
            goto try_except_handler_12;
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_UART$class_creation_1__bases_orig );
        tmp_UART$class_creation_1__bases_orig = NULL;

        Py_XDECREF( tmp_UART$class_creation_1__bases );
        tmp_UART$class_creation_1__bases = NULL;

        Py_XDECREF( tmp_UART$class_creation_1__class_decl_dict );
        tmp_UART$class_creation_1__class_decl_dict = NULL;

        Py_XDECREF( tmp_UART$class_creation_1__metaclass );
        tmp_UART$class_creation_1__metaclass = NULL;

        Py_XDECREF( tmp_UART$class_creation_1__prepared );
        tmp_UART$class_creation_1__prepared = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto frame_exception_exit_4;
        // End of try:
        try_end_5:;
        CHECK_OBJECT( (PyObject *)tmp_UART$class_creation_1__bases_orig );
        Py_DECREF( tmp_UART$class_creation_1__bases_orig );
        tmp_UART$class_creation_1__bases_orig = NULL;

        CHECK_OBJECT( (PyObject *)tmp_UART$class_creation_1__bases );
        Py_DECREF( tmp_UART$class_creation_1__bases );
        tmp_UART$class_creation_1__bases = NULL;

        CHECK_OBJECT( (PyObject *)tmp_UART$class_creation_1__class_decl_dict );
        Py_DECREF( tmp_UART$class_creation_1__class_decl_dict );
        tmp_UART$class_creation_1__class_decl_dict = NULL;

        CHECK_OBJECT( (PyObject *)tmp_UART$class_creation_1__metaclass );
        Py_DECREF( tmp_UART$class_creation_1__metaclass );
        tmp_UART$class_creation_1__metaclass = NULL;

        CHECK_OBJECT( (PyObject *)tmp_UART$class_creation_1__prepared );
        Py_DECREF( tmp_UART$class_creation_1__prepared );
        tmp_UART$class_creation_1__prepared = NULL;

        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_called_name_8;
            PyObject *tmp_assattr_target_3;
            tmp_called_name_8 = PyObject_GetItem( locals_busio_147, const_str_plain_Parity );

            if ( tmp_called_name_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Parity" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_b3f9b2128e5b3cb7176744c20ee2db75_4->m_frame.f_lineno = 151;
            tmp_assattr_name_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
            Py_DECREF( tmp_called_name_8 );
            if ( tmp_assattr_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_assattr_target_3 = PyObject_GetItem( locals_busio_147, const_str_plain_Parity );

            if ( tmp_assattr_target_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_assattr_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Parity" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if ( tmp_assattr_target_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assattr_name_3 );

                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_ODD, tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_target_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_called_name_9;
            PyObject *tmp_assattr_target_4;
            tmp_called_name_9 = PyObject_GetItem( locals_busio_147, const_str_plain_Parity );

            if ( tmp_called_name_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Parity" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_b3f9b2128e5b3cb7176744c20ee2db75_4->m_frame.f_lineno = 152;
            tmp_assattr_name_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_9 );
            Py_DECREF( tmp_called_name_9 );
            if ( tmp_assattr_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_assattr_target_4 = PyObject_GetItem( locals_busio_147, const_str_plain_Parity );

            if ( tmp_assattr_target_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {
                Py_DECREF( tmp_assattr_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Parity" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if ( tmp_assattr_target_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assattr_name_4 );

                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_EVEN, tmp_assattr_name_4 );
            Py_DECREF( tmp_assattr_name_4 );
            Py_DECREF( tmp_assattr_target_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_7;
            tmp_defaults_7 = const_tuple_3783bd469833257dbe24f8a8bce6c9b7_tuple;
            Py_INCREF( tmp_defaults_7 );
            tmp_dictset_value = MAKE_FUNCTION_busio$$$function_16___init__( tmp_defaults_7 );



            tmp_res = PyObject_SetItem( locals_busio_147, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_busio$$$function_17_deinit(  );



        tmp_res = PyObject_SetItem( locals_busio_147, const_str_plain_deinit, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_defaults_8;
            tmp_defaults_8 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_8 );
            tmp_dictset_value = MAKE_FUNCTION_busio$$$function_18_read( tmp_defaults_8 );



            tmp_res = PyObject_SetItem( locals_busio_147, const_str_plain_read, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_9;
            tmp_defaults_9 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_9 );
            tmp_dictset_value = MAKE_FUNCTION_busio$$$function_19_readinto( tmp_defaults_9 );



            tmp_res = PyObject_SetItem( locals_busio_147, const_str_plain_readinto, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_busio$$$function_20_readline(  );



        tmp_res = PyObject_SetItem( locals_busio_147, const_str_plain_readline, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_busio$$$function_21_write(  );



        tmp_res = PyObject_SetItem( locals_busio_147, const_str_plain_write, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_b3f9b2128e5b3cb7176744c20ee2db75_4 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_b3f9b2128e5b3cb7176744c20ee2db75_4 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_b3f9b2128e5b3cb7176744c20ee2db75_4, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_b3f9b2128e5b3cb7176744c20ee2db75_4->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_b3f9b2128e5b3cb7176744c20ee2db75_4, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_b3f9b2128e5b3cb7176744c20ee2db75_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame.
        if ( frame_b3f9b2128e5b3cb7176744c20ee2db75_4 == cache_frame_b3f9b2128e5b3cb7176744c20ee2db75_4 )
        {
            Py_DECREF( frame_b3f9b2128e5b3cb7176744c20ee2db75_4 );
        }
        cache_frame_b3f9b2128e5b3cb7176744c20ee2db75_4 = NULL;

        assertFrameObject( frame_b3f9b2128e5b3cb7176744c20ee2db75_4 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_11;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_compexpr_left_4 = tmp_class_creation_3__bases;
            CHECK_OBJECT( tmp_class_creation_3__bases_orig );
            tmp_compexpr_right_4 = tmp_class_creation_3__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 147;

                goto try_except_handler_11;
            }
            tmp_condition_result_24 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_24 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_16;
            }
            else
            {
                goto branch_no_16;
            }
            branch_yes_16:;
            CHECK_OBJECT( tmp_class_creation_3__bases_orig );
            tmp_dictset_value = tmp_class_creation_3__bases_orig;
            tmp_res = PyObject_SetItem( locals_busio_147, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 147;

                goto try_except_handler_11;
            }
            branch_no_16:;
        }
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kw_name_8;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_called_name_10 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_16 = const_str_plain_UART;
            tmp_args_name_8 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_16 );
            PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_16 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_16 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_16 );
            PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_16 );
            tmp_tuple_element_16 = locals_busio_147;
            Py_INCREF( tmp_tuple_element_16 );
            PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_16 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_8 = tmp_class_creation_3__class_decl_dict;
            frame_abccb80909eba7f7b99632a7b8905200->m_frame.f_lineno = 147;
            tmp_assign_source_42 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_8, tmp_kw_name_8 );
            Py_DECREF( tmp_args_name_8 );
            if ( tmp_assign_source_42 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 147;

                goto try_except_handler_11;
            }
            assert( outline_2_var___class__ == NULL );
            outline_2_var___class__ = tmp_assign_source_42;
        }
        CHECK_OBJECT( outline_2_var___class__ );
        tmp_assign_source_34 = outline_2_var___class__;
        Py_INCREF( tmp_assign_source_34 );
        goto try_return_handler_11;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( busio );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF( locals_busio_147 );
        locals_busio_147 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_busio_147 );
        locals_busio_147 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_10;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( busio );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
        Py_DECREF( outline_2_var___class__ );
        outline_2_var___class__ = NULL;

        goto outline_result_3;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( busio );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 147;
        goto try_except_handler_9;
        outline_result_3:;
        UPDATE_STRING_DICT1( moduledict_busio, (Nuitka_StringObject *)const_str_plain_UART, tmp_assign_source_34 );
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__bases_orig );
    tmp_class_creation_3__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_abccb80909eba7f7b99632a7b8905200 );
#endif
    popFrameStack();

    assertFrameObject( frame_abccb80909eba7f7b99632a7b8905200 );

    goto frame_no_exception_4;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_abccb80909eba7f7b99632a7b8905200 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_abccb80909eba7f7b99632a7b8905200, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_abccb80909eba7f7b99632a7b8905200->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_abccb80909eba7f7b99632a7b8905200, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_4:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases_orig );
    Py_DECREF( tmp_class_creation_3__bases_orig );
    tmp_class_creation_3__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__prepared );
    Py_DECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_busio, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_busio );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
