// This provides the frozen (compiled bytecode) files that are included if
// any.
#include <Python.h>

#include "nuitka/constants_blob.h"

// Blob from which modules are unstreamed.
#define stream_data constant_bin

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    ssize_t start;
    int size;
};

void copyFrozenModulesTo( struct _frozen *destination )
{
    struct frozen_desc frozen_modules[] = {
        { "_collections_abc", 5697996, 28908 },
        { "_compression", 5726904, 4090 },
        { "_weakrefset", 5730994, 7428 },
        { "abc", 5738422, 6417 },
        { "base64", 5744839, 16954 },
        { "bz2", 5761793, 11147 },
        { "codecs", 5772940, 34041 },
        { "collections", 5806981, -47042 },
        { "collections.abc", 5697996, 28908 },
        { "copyreg", 5854023, 4210 },
        { "dis", 5858233, 15171 },
        { "encodings", 5873404, -3913 },
        { "encodings.aliases", 5877317, 6262 },
        { "encodings.ascii", 5883579, 1850 },
        { "encodings.base64_codec", 5885429, 2389 },
        { "encodings.big5", 5887818, 1410 },
        { "encodings.big5hkscs", 5889228, 1420 },
        { "encodings.bz2_codec", 5890648, 3251 },
        { "encodings.charmap", 5893899, 2903 },
        { "encodings.cp037", 5896802, 2395 },
        { "encodings.cp1006", 5899197, 2471 },
        { "encodings.cp1026", 5901668, 2399 },
        { "encodings.cp1125", 5904067, 8092 },
        { "encodings.cp1140", 5912159, 2385 },
        { "encodings.cp1250", 5914544, 2422 },
        { "encodings.cp1251", 5916966, 2419 },
        { "encodings.cp1252", 5919385, 2422 },
        { "encodings.cp1253", 5921807, 2435 },
        { "encodings.cp1254", 5924242, 2424 },
        { "encodings.cp1255", 5926666, 2443 },
        { "encodings.cp1256", 5929109, 2421 },
        { "encodings.cp1257", 5931530, 2429 },
        { "encodings.cp1258", 5933959, 2427 },
        { "encodings.cp273", 5936386, 2381 },
        { "encodings.cp424", 5938767, 2425 },
        { "encodings.cp437", 5941192, 7809 },
        { "encodings.cp500", 5949001, 2395 },
        { "encodings.cp720", 5951396, 2492 },
        { "encodings.cp737", 5953888, 8131 },
        { "encodings.cp775", 5962019, 7839 },
        { "encodings.cp850", 5969858, 7470 },
        { "encodings.cp852", 5977328, 7847 },
        { "encodings.cp855", 5985175, 8100 },
        { "encodings.cp856", 5993275, 2457 },
        { "encodings.cp857", 5995732, 7452 },
        { "encodings.cp858", 6003184, 7440 },
        { "encodings.cp860", 6010624, 7788 },
        { "encodings.cp861", 6018412, 7803 },
        { "encodings.cp862", 6026215, 7992 },
        { "encodings.cp863", 6034207, 7803 },
        { "encodings.cp864", 6042010, 7949 },
        { "encodings.cp865", 6049959, 7803 },
        { "encodings.cp866", 6057762, 8136 },
        { "encodings.cp869", 6065898, 7829 },
        { "encodings.cp874", 6073727, 2523 },
        { "encodings.cp875", 6076250, 2392 },
        { "encodings.cp932", 6078642, 1412 },
        { "encodings.cp949", 6080054, 1412 },
        { "encodings.cp950", 6081466, 1412 },
        { "encodings.euc_jis_2004", 6082878, 1426 },
        { "encodings.euc_jisx0213", 6084304, 1426 },
        { "encodings.euc_jp", 6085730, 1414 },
        { "encodings.euc_kr", 6087144, 1414 },
        { "encodings.gb18030", 6088558, 1416 },
        { "encodings.gb2312", 6089974, 1414 },
        { "encodings.gbk", 6091388, 1408 },
        { "encodings.hex_codec", 6092796, 2376 },
        { "encodings.hp_roman8", 6095172, 2596 },
        { "encodings.hz", 6097768, 1406 },
        { "encodings.idna", 6099174, 5690 },
        { "encodings.iso2022_jp", 6104864, 1427 },
        { "encodings.iso2022_jp_1", 6106291, 1431 },
        { "encodings.iso2022_jp_2", 6107722, 1431 },
        { "encodings.iso2022_jp_2004", 6109153, 1437 },
        { "encodings.iso2022_jp_3", 6110590, 1431 },
        { "encodings.iso2022_jp_ext", 6112021, 1435 },
        { "encodings.iso2022_kr", 6113456, 1427 },
        { "encodings.iso8859_1", 6114883, 2394 },
        { "encodings.iso8859_10", 6117277, 2399 },
        { "encodings.iso8859_11", 6119676, 2493 },
        { "encodings.iso8859_13", 6122169, 2402 },
        { "encodings.iso8859_14", 6124571, 2420 },
        { "encodings.iso8859_15", 6126991, 2399 },
        { "encodings.iso8859_16", 6129390, 2401 },
        { "encodings.iso8859_2", 6131791, 2394 },
        { "encodings.iso8859_3", 6134185, 2401 },
        { "encodings.iso8859_4", 6136586, 2394 },
        { "encodings.iso8859_5", 6138980, 2395 },
        { "encodings.iso8859_6", 6141375, 2439 },
        { "encodings.iso8859_7", 6143814, 2402 },
        { "encodings.iso8859_8", 6146216, 2433 },
        { "encodings.iso8859_9", 6148649, 2394 },
        { "encodings.johab", 6151043, 1412 },
        { "encodings.koi8_r", 6152455, 2446 },
        { "encodings.koi8_t", 6154901, 2357 },
        { "encodings.koi8_u", 6157258, 2432 },
        { "encodings.kz1048", 6159690, 2409 },
        { "encodings.latin_1", 6162099, 1862 },
        { "encodings.mac_arabic", 6163961, 7703 },
        { "encodings.mac_centeuro", 6171664, 2433 },
        { "encodings.mac_croatian", 6174097, 2441 },
        { "encodings.mac_cyrillic", 6176538, 2431 },
        { "encodings.mac_farsi", 6178969, 2375 },
        { "encodings.mac_greek", 6181344, 2415 },
        { "encodings.mac_iceland", 6183759, 2434 },
        { "encodings.mac_latin2", 6186193, 2575 },
        { "encodings.mac_roman", 6188768, 2432 },
        { "encodings.mac_romanian", 6191200, 2442 },
        { "encodings.mac_turkish", 6193642, 2435 },
        { "encodings.palmos", 6196077, 2422 },
        { "encodings.ptcp154", 6198499, 2516 },
        { "encodings.punycode", 6201015, 6383 },
        { "encodings.quopri_codec", 6207398, 2409 },
        { "encodings.raw_unicode_escape", 6209807, 1735 },
        { "encodings.rot_13", 6211542, 2995 },
        { "encodings.shift_jis", 6214537, 1420 },
        { "encodings.shift_jis_2004", 6215957, 1430 },
        { "encodings.shift_jisx0213", 6217387, 1430 },
        { "encodings.tis_620", 6218817, 2484 },
        { "encodings.undefined", 6221301, 2129 },
        { "encodings.unicode_escape", 6223430, 1715 },
        { "encodings.unicode_internal", 6225145, 1725 },
        { "encodings.utf_16", 6226870, 4799 },
        { "encodings.utf_16_be", 6231669, 1600 },
        { "encodings.utf_16_le", 6233269, 1600 },
        { "encodings.utf_32", 6234869, 4692 },
        { "encodings.utf_32_be", 6239561, 1493 },
        { "encodings.utf_32_le", 6241054, 1493 },
        { "encodings.utf_7", 6242547, 1521 },
        { "encodings.utf_8", 6244068, 1580 },
        { "encodings.utf_8_sig", 6245648, 4482 },
        { "encodings.uu_codec", 6250130, 3191 },
        { "encodings.zlib_codec", 6253321, 3089 },
        { "enum", 6256410, 24237 },
        { "functools", 106762, 24181 },
        { "genericpath", 6280647, 3714 },
        { "heapq", 6284361, 14328 },
        { "importlib", 6298689, -3698 },
        { "importlib._bootstrap", 6302387, 29144 },
        { "importlib._bootstrap_external", 6331531, 41784 },
        { "importlib.machinery", 6373315, 938 },
        { "inspect", 6374253, 80003 },
        { "io", 6454256, 3375 },
        { "keyword", 6457631, 1775 },
        { "linecache", 6459406, 3755 },
        { "locale", 6463161, 34521 },
        { "opcode", 6497682, 5344 },
        { "operator", 6503026, 13866 },
        { "os", 130943, 29659 },
        { "posixpath", 6516892, 10395 },
        { "quopri", 6527287, 5737 },
        { "re", 188732, 13770 },
        { "reprlib", 6533024, 5316 },
        { "sre_compile", 6538340, 15169 },
        { "sre_constants", 6553509, 6257 },
        { "sre_parse", 6559766, 21323 },
        { "stat", 6581089, 3839 },
        { "stringprep", 6584928, 9998 },
        { "struct", 215618, 300 },
        { "threading", 6594926, 37868 },
        { "token", 6632794, 3565 },
        { "tokenize", 6636359, 17797 },
        { "traceback", 6654156, 19589 },
        { "types", 215918, 8942 },
        { "warnings", 6673745, 13906 },
        { NULL, 0, 0 }
    };

    struct frozen_desc *current = frozen_modules;

    for(;;)
    {
        destination->name = (char *)current->name;
        destination->code = (unsigned char *)&constant_bin[ current->start ];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}
