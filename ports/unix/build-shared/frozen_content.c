//
// Content for MICROPY_MODULE_FROZEN_STR
//
#include <stdint.h>
#define MP_FROZEN_STR_NAMES \

const uint32_t mp_frozen_str_sizes[] = { 0 };
const char mp_frozen_str_content[] = {
"\0"
};

//
// Content for MICROPY_MODULE_FROZEN_MPY
//
#include "py/mpconfig.h"
#include "py/objint.h"
#include "py/objstr.h"
#include "py/emitglue.h"
#include "py/nativeglue.h"

#if MICROPY_LONGINT_IMPL != 2
#error "incompatible MICROPY_LONGINT_IMPL"
#endif

#if MPZ_DIG_SIZE != 16
#error "incompatible MPZ_DIG_SIZE"
#endif

#if MICROPY_PY_BUILTINS_FLOAT
typedef struct _mp_obj_float_t {
    mp_obj_base_t base;
    mp_float_t value;
} mp_obj_float_t;
#endif

#if MICROPY_PY_BUILTINS_COMPLEX
typedef struct _mp_obj_complex_t {
    mp_obj_base_t base;
    mp_float_t real;
    mp_float_t imag;
} mp_obj_complex_t;
#endif

enum {
    MP_QSTR_upip_dot_py = MP_QSTRnumber_of,
    MP_QSTR_upip_utarfile,
    MP_QSTR_NotFoundError,
    MP_QSTR_op_split,
    MP_QSTR__makedirs,
    MP_QSTR_save_file,
    MP_QSTR_wb,
    MP_QSTR_install_tar,
    MP_QSTR__dot_egg_hyphen_info,
    MP_QSTR_extractfile,
    MP_QSTR_deps,
    MP_QSTR_Skipping,
    MP_QSTR_DIRTYPE,
    MP_QSTR_expandhome,
    MP_QSTR__tilde__slash_,
    MP_QSTR_HOME,
    MP_QSTR_url_open,
    MP_QSTR__colon_,
    MP_QSTR_https_colon_,
    MP_QSTR_get_pkg_metadata,
    MP_QSTR__percent_s_slash__percent_s_slash_json,
    MP_QSTR_fatal,
    MP_QSTR_Error_colon_,
    MP_QSTR_install_pkg,
    MP_QSTR__equals__equals_,
    MP_QSTR_info,
    MP_QSTR_releases,
    MP_QSTR_url,
    MP_QSTR_TarFile,
    MP_QSTR_fileobj,
    MP_QSTR_install,
    MP_QSTR_Queue_colon_,
    MP_QSTR_get_install_path,
    MP_QSTR_cleanup,
    MP_QSTR__hyphen_h,
    MP_QSTR__hyphen__hyphen_help,
    MP_QSTR__hyphen_p,
    MP_QSTR__hyphen_r,
    MP_QSTR__hash_,
    MP_QSTR__hyphen_i,
    MP_QSTR__hyphen__hyphen_debug,
    MP_QSTR__hyphen_,
    MP_QSTR_os,
    MP_QSTR_json,
    MP_QSTR_tarfile,
    MP_QSTR_debug,
    MP_QSTR_index_urls,
    MP_QSTR_install_path,
    MP_QSTR_cleanup_files,
    MP_QSTR_gzdict_sz,
    MP_QSTR_file_buf,
    MP_QSTR_warn_ussl,
    MP_QSTR_fname,
    MP_QSTR_subf,
    MP_QSTR_f,
    MP_QSTR_prefix,
    MP_QSTR_s,
    MP_QSTR_msg,
    MP_QSTR_exc,
    MP_QSTR_pkg_spec,
    MP_QSTR_to_install,
    MP_QSTR_https_colon__slash__slash_pypi_dot_org_slash_pypi,
    MP_QSTR_setup_dot_,
    MP_QSTR_PKG_hyphen_INFO,
    MP_QSTR_README,
    MP_QSTR__slash_requires_dot_txt,
    MP_QSTR_Extracting_space_,
    MP_QSTR_Package_space_not_space_found,
    MP_QSTR_Installing_space__percent_s_space__percent_s_space_from_space__percent_s,
    MP_QSTR_Installing_space_to_colon__space_,
    MP_QSTR_Warning_colon__space_Cannot_space_delete_space_,
    MP_QSTR_Default_space_install_space_path_colon_,
    MP_QSTR_upip_utarfile_dot_py,
    MP_QSTR_size,
    MP_QSTR_FileSection,
    MP_QSTR_TarInfo,
    MP_QSTR_roundup,
    MP_QSTR_content_len,
    MP_QSTR_align,
    MP_QSTR_skip,
    MP_QSTR__0x00_,
    MP_QSTR_TAR_HEADER,
    MP_QSTR_REGTYPE,
    MP_QSTR_val,
    MP_QSTR_aligned_len,
    MP_QSTR_sz,
    MP_QSTR_buf,
    MP_QSTR_tarinfo,
    MP_QSTR_TarInfo_paren_open__percent_r_comma__space__percent_s_comma__space__percent_d_paren_close_,
};

const qstr_hash_t mp_qstr_frozen_const_hashes[] = {
    41630,
    32818,
    6814,
    47575,
    43444,
    41149,
    28784,
    52092,
    24877,
    40366,
    60551,
    53300,
    5954,
    18252,
    28948,
    30314,
    64197,
    46495,
    63796,
    30882,
    15581,
    53467,
    19783,
    47271,
    26789,
    46059,
    36127,
    25486,
    64868,
    19460,
    56068,
    26894,
    63711,
    11973,
    26336,
    28212,
    26360,
    26362,
    46470,
    26337,
    39732,
    46472,
    28537,
    53757,
    49188,
    21972,
    31100,
    2646,
    8079,
    5172,
    5613,
    44617,
    21988,
    12583,
    46531,
    16021,
    46550,
    18044,
    9435,
    39491,
    63616,
    3759,
    23340,
    43770,
    60255,
    36962,
    56712,
    48284,
    7236,
    1253,
    17877,
    5528,
    34645,
    42272,
    21770,
    23628,
    14466,
    30036,
    64424,
    44804,
    46501,
    17794,
    53709,
    31486,
    17841,
    28908,
    18804,
    24588,
    62189,
};

const qstr_len_t mp_qstr_frozen_const_lengths[] = {
    7,
    13,
    13,
    8,
    9,
    9,
    2,
    11,
    9,
    11,
    4,
    8,
    7,
    10,
    2,
    4,
    8,
    1,
    6,
    16,
    10,
    5,
    6,
    11,
    2,
    4,
    8,
    3,
    7,
    7,
    7,
    6,
    16,
    7,
    2,
    6,
    2,
    2,
    1,
    2,
    7,
    1,
    2,
    4,
    7,
    5,
    10,
    12,
    13,
    9,
    8,
    9,
    5,
    4,
    1,
    6,
    1,
    3,
    3,
    8,
    10,
    21,
    6,
    8,
    6,
    13,
    11,
    17,
    24,
    15,
    23,
    21,
    16,
    4,
    11,
    7,
    7,
    11,
    5,
    4,
    1,
    10,
    7,
    3,
    11,
    2,
    3,
    7,
    19,
};

extern const qstr_pool_t mp_qstr_const_pool;
const qstr_pool_t mp_qstr_frozen_const_pool = {
    &mp_qstr_const_pool, // previous pool
    MP_QSTRnumber_of, // previous pool size
    10, // allocated entries
    89, // used entries
    (qstr_hash_t *)mp_qstr_frozen_const_hashes,
    (qstr_len_t *)mp_qstr_frozen_const_lengths,
    {
        "upip.py",
        "upip_utarfile",
        "NotFoundError",
        "op_split",
        "_makedirs",
        "save_file",
        "wb",
        "install_tar",
        ".egg-info",
        "extractfile",
        "deps",
        "Skipping",
        "DIRTYPE",
        "expandhome",
        "~/",
        "HOME",
        "url_open",
        ":",
        "https:",
        "get_pkg_metadata",
        "%s/%s/json",
        "fatal",
        "Error:",
        "install_pkg",
        "==",
        "info",
        "releases",
        "url",
        "TarFile",
        "fileobj",
        "install",
        "Queue:",
        "get_install_path",
        "cleanup",
        "-h",
        "--help",
        "-p",
        "-r",
        "#",
        "-i",
        "--debug",
        "-",
        "os",
        "json",
        "tarfile",
        "debug",
        "index_urls",
        "install_path",
        "cleanup_files",
        "gzdict_sz",
        "file_buf",
        "warn_ussl",
        "fname",
        "subf",
        "f",
        "prefix",
        "s",
        "msg",
        "exc",
        "pkg_spec",
        "to_install",
        "https://pypi.org/pypi",
        "setup.",
        "PKG-INFO",
        "README",
        "/requires.txt",
        "Extracting ",
        "Package not found",
        "Installing %s %s from %s",
        "Installing to: ",
        "Warning: Cannot delete ",
        "Default install path:",
        "upip_utarfile.py",
        "size",
        "FileSection",
        "TarInfo",
        "roundup",
        "content_len",
        "align",
        "skip",
        "\x00",
        "TAR_HEADER",
        "REGTYPE",
        "val",
        "aligned_len",
        "sz",
        "buf",
        "tarinfo",
        "TarInfo(%r, %s, %d)",
    },
};

////////////////////////////////////////////////////////////////////////////////
// frozen module upip
// - original source file: build-shared/frozen_mpy/upip.mpy
// - frozen file name: upip.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file upip.py, scope upip__lt_module_gt_
static const byte fun_data_upip__lt_module_gt_[242] = {
    0x18,0x66, // prelude
    0x01, // names: <module>
    0x80,0x07,0x26,0x26,0x26,0x26,0x26,0x26,0x46,0x67,0x23,0x28,0x23,0x24,0x43,0x69,0x6b,0x20,0x84,0x0d,0x8a,0x14,0x84,0x0a,0x84,0x20,0x84,0x07,0x26,0x46,0x63,0x84,0x32,0x84,0x0d,0x88,0x07,0x84,0x1b,0x88,0x26,0x84,0x0b,0x84,0x08,0x84,0x15,0x84,0x37,0x27, // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'sys'
    0x16,0x02, // STORE_NAME 'sys'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x03, // IMPORT_NAME 'gc'
    0x16,0x03, // STORE_NAME 'gc'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x04, // IMPORT_NAME 'uos'
    0x16,0x67, // STORE_NAME 'os'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x05, // IMPORT_NAME 'uerrno'
    0x16,0x16, // STORE_NAME 'errno'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x06, // IMPORT_NAME 'ujson'
    0x16,0x68, // STORE_NAME 'json'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x07, // IMPORT_NAME 'uzlib'
    0x16,0x07, // STORE_NAME 'uzlib'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x08, // IMPORT_NAME 'upip_utarfile'
    0x16,0x69, // STORE_NAME 'tarfile'
    0x11,0x03, // LOAD_NAME 'gc'
    0x14,0x09, // LOAD_METHOD 'collect'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0x17,0x6a, // STORE_GLOBAL 'debug'
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x23,0x01, // LOAD_CONST_OBJ 1
    0x2b,0x02, // BUILD_LIST 2
    0x17,0x6b, // STORE_GLOBAL 'index_urls'
    0x51, // LOAD_CONST_NONE
    0x17,0x6c, // STORE_GLOBAL 'install_path'
    0x2b,0x00, // BUILD_LIST 0
    0x16,0x6d, // STORE_NAME 'cleanup_files'
    0x9f, // LOAD_CONST_SMALL_INT 31
    0x17,0x6e, // STORE_GLOBAL 'gzdict_sz'
    0x11,0x6f, // LOAD_NAME 'bytearray'
    0x22,0x84,0x00, // LOAD_CONST_SMALL_INT 512
    0x34,0x01, // CALL_FUNCTION 1
    0x17,0x70, // STORE_GLOBAL 'file_buf'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x00, // MAKE_FUNCTION 0
    0x10,0x0a, // LOAD_CONST_STRING 'NotFoundError'
    0x11,0x71, // LOAD_NAME 'Exception'
    0x34,0x03, // CALL_FUNCTION 3
    0x16,0x0a, // STORE_NAME 'NotFoundError'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x0e, // STORE_NAME 'op_split'
    0x22,0x83,0x7f, // LOAD_CONST_SMALL_INT 511
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x02, // MAKE_FUNCTION_DEFARGS 2
    0x16,0x12, // STORE_NAME '_makedirs'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x19, // STORE_NAME 'save_file'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x1d, // STORE_NAME 'install_tar'
    0x32,0x05, // MAKE_FUNCTION 5
    0x16,0x29, // STORE_NAME 'expandhome'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x0b, // IMPORT_NAME 'ussl'
    0x16,0x0b, // STORE_NAME 'ussl'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x0c, // IMPORT_NAME 'usocket'
    0x16,0x0c, // STORE_NAME 'usocket'
    0x52, // LOAD_CONST_TRUE
    0x17,0x72, // STORE_GLOBAL 'warn_ussl'
    0x32,0x06, // MAKE_FUNCTION 6
    0x16,0x2e, // STORE_NAME 'url_open'
    0x32,0x07, // MAKE_FUNCTION 7
    0x16,0x39, // STORE_NAME 'get_pkg_metadata'
    0x51, // LOAD_CONST_NONE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x08, // MAKE_FUNCTION_DEFARGS 8
    0x16,0x3c, // STORE_NAME 'fatal'
    0x32,0x09, // MAKE_FUNCTION 9
    0x16,0x3f, // STORE_NAME 'install_pkg'
    0x51, // LOAD_CONST_NONE
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x0a, // MAKE_FUNCTION_DEFARGS 10
    0x16,0x49, // STORE_NAME 'install'
    0x32,0x0b, // MAKE_FUNCTION 11
    0x16,0x57, // STORE_NAME 'get_install_path'
    0x32,0x0c, // MAKE_FUNCTION 12
    0x16,0x5a, // STORE_NAME 'cleanup'
    0x32,0x0d, // MAKE_FUNCTION 13
    0x16,0x5c, // STORE_NAME 'help'
    0x32,0x0e, // MAKE_FUNCTION 14
    0x16,0x5d, // STORE_NAME 'main'
    0x11,0x73, // LOAD_NAME '__name__'
    0x10,0x0d, // LOAD_CONST_STRING '__main__'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0x11,0x5d, // LOAD_NAME 'main'
    0x34,0x00, // CALL_FUNCTION 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of upip__lt_module_gt_
// frozen bytecode for file upip.py, scope upip_NotFoundError
static const byte fun_data_upip_NotFoundError[15] = {
    0x00,0x06, // prelude
    0x0a, // names: NotFoundError
    0x88,0x1c, // code info
    0x11,0x73, // LOAD_NAME '__name__'
    0x16,0x74, // STORE_NAME '__module__'
    0x10,0x0a, // LOAD_CONST_STRING 'NotFoundError'
    0x16,0x75, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_NotFoundError = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_upip_NotFoundError,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 15,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_upip_NotFoundError + 3,
        .opcodes = fun_data_upip_NotFoundError + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip__lt_module_gt_
// frozen bytecode for file upip.py, scope upip_op_split
static const byte fun_data_upip_op_split[64] = {
    0x31,0x18, // prelude
    0x0e,0x58, // names: op_split, path
    0x80,0x20,0x26,0x23,0x29,0x29,0x26,0x24,0x23,0x23, // code info
    0xb0, // LOAD_FAST 0
    0x10,0x0f, // LOAD_CONST_STRING ''
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x23,0x02, // LOAD_CONST_OBJ 2
    0x63, // RETURN_VALUE
    0xb0, // LOAD_FAST 0
    0x14,0x10, // LOAD_METHOD 'rsplit'
    0x10,0x11, // LOAD_CONST_STRING '/'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x02, // CALL_METHOD 2
    0xc1, // STORE_FAST 1
    0x12,0x76, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x10,0x0f, // LOAD_CONST_STRING ''
    0xb0, // LOAD_FAST 0
    0x2a,0x02, // BUILD_TUPLE 2
    0x63, // RETURN_VALUE
    0xb1, // LOAD_FAST 1
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x10,0x11, // LOAD_CONST_STRING '/'
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x2a,0x02, // BUILD_TUPLE 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_op_split = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_upip_op_split,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 64,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 14,
        .line_info = fun_data_upip_op_split + 4,
        .opcodes = fun_data_upip_op_split + 14,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip__lt_module_gt_
// frozen bytecode for file upip.py, scope upip__makedirs
static const byte fun_data_upip__makedirs[144] = {
    0x82,0x13,0x28, // prelude
    0x12,0x1e,0x77, // names: _makedirs, name, mode
    0x80,0x2d,0x22,0x23,0x33,0x28,0x23,0x25,0x2b,0x25,0x24,0x22,0x28,0x4d,0x34,0x22,0x2e, // code info
    0x50, // LOAD_CONST_FALSE
    0xc2, // STORE_FAST 2
    0x10,0x0f, // LOAD_CONST_STRING ''
    0xc3, // STORE_FAST 3
    0xb0, // LOAD_FAST 0
    0x14,0x13, // LOAD_METHOD 'rstrip'
    0x10,0x11, // LOAD_CONST_STRING '/'
    0x36,0x01, // CALL_METHOD 1
    0x14,0x14, // LOAD_METHOD 'split'
    0x10,0x11, // LOAD_CONST_STRING '/'
    0x36,0x01, // CALL_METHOD 1
    0x51, // LOAD_CONST_NONE
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x10,0x0f, // LOAD_CONST_STRING ''
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x10,0x11, // LOAD_CONST_STRING '/'
    0xc3, // STORE_FAST 3
    0xb4, // LOAD_FAST 4
    0x5f, // GET_ITER_STACK
    0x4b,0x50, // FOR_ITER 80
    0xc5, // STORE_FAST 5
    0xb3, // LOAD_FAST 3
    0x44,0x4d, // POP_JUMP_IF_FALSE 13
    0xb3, // LOAD_FAST 3
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0x10,0x11, // LOAD_CONST_STRING '/'
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0xb3, // LOAD_FAST 3
    0x10,0x11, // LOAD_CONST_STRING '/'
    0xe5, // BINARY_OP 14 __iadd__
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0xb5, // LOAD_FAST 5
    0xe5, // BINARY_OP 14 __iadd__
    0xc3, // STORE_FAST 3
    0x48,0x0c, // SETUP_EXCEPT 12
    0x12,0x67, // LOAD_GLOBAL 'os'
    0x14,0x15, // LOAD_METHOD 'mkdir'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x52, // LOAD_CONST_TRUE
    0xc2, // STORE_FAST 2
    0x4a,0x2a, // POP_EXCEPT_JUMP 42
    0x57, // DUP_TOP
    0x12,0x78, // LOAD_GLOBAL 'OSError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x63, // POP_JUMP_IF_FALSE 35
    0xc6, // STORE_FAST 6
    0x49,0x19, // SETUP_FINALLY 25
    0xb6, // LOAD_FAST 6
    0x13,0x16, // LOAD_ATTR 'errno'
    0x12,0x16, // LOAD_GLOBAL 'errno'
    0x13,0x17, // LOAD_ATTR 'EEXIST'
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0xb6, // LOAD_FAST 6
    0x13,0x16, // LOAD_ATTR 'errno'
    0x12,0x16, // LOAD_GLOBAL 'errno'
    0x13,0x18, // LOAD_ATTR 'EISDIR'
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0xb6, // LOAD_FAST 6
    0x65, // RAISE_OBJ
    0x50, // LOAD_CONST_FALSE
    0xc2, // STORE_FAST 2
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc6, // STORE_FAST 6
    0x28,0x06, // DELETE_FAST 6
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x42,0xae,0x7f, // JUMP -82
    0xb2, // LOAD_FAST 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip__makedirs = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_upip__makedirs,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 144,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 17,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_upip__makedirs + 6,
        .opcodes = fun_data_upip__makedirs + 23,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip__lt_module_gt_
// frozen bytecode for file upip.py, scope upip_save_file
static const byte fun_data_upip_save_file[52] = {
    0x4e,0x16, // prelude
    0x19,0x79,0x7a, // names: save_file, fname, subf
    0x80,0x41,0x20,0x2a,0x20,0x28,0x23,0x22, // code info
    0x12,0x7b, // LOAD_GLOBAL 'open'
    0xb0, // LOAD_FAST 0
    0x10,0x1a, // LOAD_CONST_STRING 'wb'
    0x34,0x02, // CALL_FUNCTION 2
    0x47,0x1a, // SETUP_WITH 26
    0xc2, // STORE_FAST 2
    0xb1, // LOAD_FAST 1
    0x14,0x1b, // LOAD_METHOD 'readinto'
    0x12,0x70, // LOAD_GLOBAL 'file_buf'
    0x36,0x01, // CALL_METHOD 1
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0x42,0x4b, // JUMP 11
    0xb2, // LOAD_FAST 2
    0x14,0x1c, // LOAD_METHOD 'write'
    0x12,0x70, // LOAD_GLOBAL 'file_buf'
    0xb3, // LOAD_FAST 3
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0x42,0x28, // JUMP -24
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_save_file = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_upip_save_file,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 52,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 25,
        .line_info = fun_data_upip_save_file + 5,
        .opcodes = fun_data_upip_save_file + 13,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip__lt_module_gt_
// frozen bytecode for file upip.py, scope upip_install_tar
static const byte fun_data_upip_install_tar[198] = {
    0x9e,0x10,0x38, // prelude
    0x1d,0x7c,0x7d, // names: install_tar, f, prefix
    0x80,0x4b,0x23,0x46,0x24,0x22,0x58,0x46,0x22,0x46,0x2e,0x29,0x2e,0x22,0x24,0x28,0x48,0x23,0x24,0x2a,0x24,0x29,0x26,0x27,0x2a, // code info
    0x2c,0x00, // BUILD_MAP 0
    0xc2, // STORE_FAST 2
    0xb0, // LOAD_FAST 0
    0x5f, // GET_ITER_STACK
    0x4b,0x9d,0x01, // FOR_ITER 157
    0xc3, // STORE_FAST 3
    0xb3, // LOAD_FAST 3
    0x13,0x1e, // LOAD_ATTR 'name'
    0xc4, // STORE_FAST 4
    0x48,0x11, // SETUP_EXCEPT 17
    0xb4, // LOAD_FAST 4
    0xb4, // LOAD_FAST 4
    0x14,0x1f, // LOAD_METHOD 'index'
    0x10,0x11, // LOAD_CONST_STRING '/'
    0x36,0x01, // CALL_METHOD 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf2, // BINARY_OP 27 __add__
    0x51, // LOAD_CONST_NONE
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0xc4, // STORE_FAST 4
    0x4a,0x0d, // POP_EXCEPT_JUMP 13
    0x57, // DUP_TOP
    0x12,0x7e, // LOAD_GLOBAL 'ValueError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x59, // POP_TOP
    0x10,0x0f, // LOAD_CONST_STRING ''
    0xc4, // STORE_FAST 4
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x52, // LOAD_CONST_TRUE
    0xc5, // STORE_FAST 5
    0x23,0x03, // LOAD_CONST_OBJ 3
    0x5f, // GET_ITER_STACK
    0x4b,0x3c, // FOR_ITER 60
    0xc6, // STORE_FAST 6
    0xb4, // LOAD_FAST 4
    0x14,0x20, // LOAD_METHOD 'startswith'
    0xb6, // LOAD_FAST 6
    0x36,0x01, // CALL_METHOD 1
    0x43,0x46, // POP_JUMP_IF_TRUE 6
    0x10,0x21, // LOAD_CONST_STRING '.egg-info'
    0xb4, // LOAD_FAST 4
    0xdd, // BINARY_OP 6 <in>
    0x44,0x6b, // POP_JUMP_IF_FALSE 43
    0xb4, // LOAD_FAST 4
    0x14,0x22, // LOAD_METHOD 'endswith'
    0x23,0x04, // LOAD_CONST_OBJ 4
    0x36,0x01, // CALL_METHOD 1
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0xb0, // LOAD_FAST 0
    0x14,0x23, // LOAD_METHOD 'extractfile'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0x14,0x24, // LOAD_METHOD 'read'
    0x36,0x00, // CALL_METHOD 0
    0xb2, // LOAD_FAST 2
    0x10,0x25, // LOAD_CONST_STRING 'deps'
    0x56, // STORE_SUBSCR
    0x50, // LOAD_CONST_FALSE
    0xc5, // STORE_FAST 5
    0x12,0x6a, // LOAD_GLOBAL 'debug'
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0x12,0x7f, // LOAD_GLOBAL 'print'
    0x10,0x26, // LOAD_CONST_STRING 'Skipping'
    0xb4, // LOAD_FAST 4
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x59, // POP_TOP
    0x42,0x42, // JUMP 2
    0x42,0x02, // JUMP -62
    0xb5, // LOAD_FAST 5
    0x44,0x6f, // POP_JUMP_IF_FALSE 47
    0xb1, // LOAD_FAST 1
    0xb4, // LOAD_FAST 4
    0xf2, // BINARY_OP 27 __add__
    0xc7, // STORE_FAST 7
    0xb3, // LOAD_FAST 3
    0x13,0x27, // LOAD_ATTR 'type'
    0x12,0x69, // LOAD_GLOBAL 'tarfile'
    0x13,0x28, // LOAD_ATTR 'DIRTYPE'
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x61, // POP_JUMP_IF_FALSE 33
    0x12,0x6a, // LOAD_GLOBAL 'debug'
    0x44,0x49, // POP_JUMP_IF_FALSE 9
    0x12,0x7f, // LOAD_GLOBAL 'print'
    0x23,0x05, // LOAD_CONST_OBJ 5
    0xb7, // LOAD_FAST 7
    0xf2, // BINARY_OP 27 __add__
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x12,0x12, // LOAD_GLOBAL '_makedirs'
    0xb7, // LOAD_FAST 7
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x23, // LOAD_METHOD 'extractfile'
    0xb3, // LOAD_FAST 3
    0x36,0x01, // CALL_METHOD 1
    0xc8, // STORE_FAST 8
    0x12,0x19, // LOAD_GLOBAL 'save_file'
    0xb7, // LOAD_FAST 7
    0xb8, // LOAD_FAST 8
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x42,0xe0,0x7e, // JUMP -160
    0xb2, // LOAD_FAST 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_install_tar = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_upip_install_tar,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 198,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 20,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 29,
        .line_info = fun_data_upip_install_tar + 6,
        .opcodes = fun_data_upip_install_tar + 31,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip__lt_module_gt_
// frozen bytecode for file upip.py, scope upip_expandhome
static const byte fun_data_upip_expandhome[39] = {
    0x31,0x10, // prelude
    0x29,0x81,0x00, // names: expandhome, s
    0x80,0x6b,0x26,0x29,0x2c, // code info
    0x10,0x2a, // LOAD_CONST_STRING '~/'
    0xb0, // LOAD_FAST 0
    0xdd, // BINARY_OP 6 <in>
    0x44,0x55, // POP_JUMP_IF_FALSE 21
    0x12,0x67, // LOAD_GLOBAL 'os'
    0x14,0x2b, // LOAD_METHOD 'getenv'
    0x10,0x2c, // LOAD_CONST_STRING 'HOME'
    0x36,0x01, // CALL_METHOD 1
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x14,0x2d, // LOAD_METHOD 'replace'
    0x10,0x2a, // LOAD_CONST_STRING '~/'
    0xb1, // LOAD_FAST 1
    0x10,0x11, // LOAD_CONST_STRING '/'
    0xf2, // BINARY_OP 27 __add__
    0x36,0x02, // CALL_METHOD 2
    0xc0, // STORE_FAST 0
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_expandhome = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_upip_expandhome,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 39,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 7,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 41,
        .line_info = fun_data_upip_expandhome + 5,
        .opcodes = fun_data_upip_expandhome + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip__lt_module_gt_
// frozen bytecode for file upip.py, scope upip_url_open
static const byte fun_data_upip_url_open[324] = {
    0x91,0x12,0x4e, // prelude
    0x2e,0x45, // names: url_open, url
    0x80,0x78,0x40,0x24,0x46,0x2e,0x22,0x24,0x26,0x2b,0x27,0x59,0x53,0x44,0x30,0x43,0x49,0x26,0x2c,0x24,0x29,0x63,0x2e,0x26,0x2c,0x26,0x2c,0x27,0x26,0x20,0x26,0x23,0x27,0x26,0x4f,0x26,0x4a, // code info
    0x12,0x6a, // LOAD_GLOBAL 'debug'
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x12,0x7f, // LOAD_GLOBAL 'print'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x14, // LOAD_METHOD 'split'
    0x10,0x11, // LOAD_CONST_STRING '/'
    0x83, // LOAD_CONST_SMALL_INT 3
    0x36,0x02, // CALL_METHOD 2
    0x30,0x04, // UNPACK_SEQUENCE 4
    0xc1, // STORE_FAST 1
    0xc2, // STORE_FAST 2
    0xc3, // STORE_FAST 3
    0xc4, // STORE_FAST 4
    0x48,0x2c, // SETUP_EXCEPT 44
    0x22,0x83,0x3b, // LOAD_CONST_SMALL_INT 443
    0xc5, // STORE_FAST 5
    0x10,0x2f, // LOAD_CONST_STRING ':'
    0xb3, // LOAD_FAST 3
    0xdd, // BINARY_OP 6 <in>
    0x44,0x52, // POP_JUMP_IF_FALSE 18
    0xb3, // LOAD_FAST 3
    0x14,0x14, // LOAD_METHOD 'split'
    0x10,0x2f, // LOAD_CONST_STRING ':'
    0x36,0x01, // CALL_METHOD 1
    0x30,0x02, // UNPACK_SEQUENCE 2
    0xc3, // STORE_FAST 3
    0xc5, // STORE_FAST 5
    0x12,0x81,0x01, // LOAD_GLOBAL 'int'
    0xb5, // LOAD_FAST 5
    0x34,0x01, // CALL_FUNCTION 1
    0xc5, // STORE_FAST 5
    0x12,0x0c, // LOAD_GLOBAL 'usocket'
    0x14,0x30, // LOAD_METHOD 'getaddrinfo'
    0xb3, // LOAD_FAST 3
    0xb5, // LOAD_FAST 5
    0x80, // LOAD_CONST_SMALL_INT 0
    0x12,0x0c, // LOAD_GLOBAL 'usocket'
    0x13,0x31, // LOAD_ATTR 'SOCK_STREAM'
    0x36,0x04, // CALL_METHOD 4
    0xc6, // STORE_FAST 6
    0x4a,0x1c, // POP_EXCEPT_JUMP 28
    0x57, // DUP_TOP
    0x12,0x78, // LOAD_GLOBAL 'OSError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x55, // POP_JUMP_IF_FALSE 21
    0xc7, // STORE_FAST 7
    0x49,0x0b, // SETUP_FINALLY 11
    0x12,0x3c, // LOAD_GLOBAL 'fatal'
    0x23,0x06, // LOAD_CONST_OBJ 6
    0xb3, // LOAD_FAST 3
    0xf8, // BINARY_OP 33 __mod__
    0xb7, // LOAD_FAST 7
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc7, // STORE_FAST 7
    0x28,0x07, // DELETE_FAST 7
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xb6, // LOAD_FAST 6
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xc6, // STORE_FAST 6
    0x12,0x0c, // LOAD_GLOBAL 'usocket'
    0x14,0x32, // LOAD_METHOD 'socket'
    0xb6, // LOAD_FAST 6
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0xb6, // LOAD_FAST 6
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xb6, // LOAD_FAST 6
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x36,0x03, // CALL_METHOD 3
    0xc8, // STORE_FAST 8
    0x48,0x86,0x01, // SETUP_EXCEPT 134
    0xb8, // LOAD_FAST 8
    0x14,0x33, // LOAD_METHOD 'connect'
    0xb6, // LOAD_FAST 6
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x10,0x34, // LOAD_CONST_STRING 'https:'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x5c, // POP_JUMP_IF_FALSE 28
    0x12,0x0b, // LOAD_GLOBAL 'ussl'
    0x14,0x35, // LOAD_METHOD 'wrap_socket'
    0xb8, // LOAD_FAST 8
    0x10,0x36, // LOAD_CONST_STRING 'server_hostname'
    0xb3, // LOAD_FAST 3
    0x36,0x82,0x01, // CALL_METHOD 257
    0xc8, // STORE_FAST 8
    0x12,0x72, // LOAD_GLOBAL 'warn_ussl'
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x12,0x7f, // LOAD_GLOBAL 'print'
    0x23,0x07, // LOAD_CONST_OBJ 7
    0xb3, // LOAD_FAST 3
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x50, // LOAD_CONST_FALSE
    0x17,0x72, // STORE_GLOBAL 'warn_ussl'
    0xb8, // LOAD_FAST 8
    0x14,0x1c, // LOAD_METHOD 'write'
    0x23,0x08, // LOAD_CONST_OBJ 8
    0xb4, // LOAD_FAST 4
    0xb3, // LOAD_FAST 3
    0xb5, // LOAD_FAST 5
    0x2a,0x03, // BUILD_TUPLE 3
    0xf8, // BINARY_OP 33 __mod__
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb8, // LOAD_FAST 8
    0x14,0x37, // LOAD_METHOD 'readline'
    0x36,0x00, // CALL_METHOD 0
    0xc9, // STORE_FAST 9
    0xb9, // LOAD_FAST 9
    0x14,0x14, // LOAD_METHOD 'split'
    0x51, // LOAD_CONST_NONE
    0x82, // LOAD_CONST_SMALL_INT 2
    0x36,0x02, // CALL_METHOD 2
    0x30,0x03, // UNPACK_SEQUENCE 3
    0xca, // STORE_FAST 10
    0xcb, // STORE_FAST 11
    0xcc, // STORE_FAST 12
    0xbb, // LOAD_FAST 11
    0x23,0x09, // LOAD_CONST_OBJ 9
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x59, // POP_JUMP_IF_FALSE 25
    0xbb, // LOAD_FAST 11
    0x23,0x0a, // LOAD_CONST_OBJ 10
    0xd9, // BINARY_OP 2 __eq__
    0x43,0x46, // POP_JUMP_IF_TRUE 6
    0xbb, // LOAD_FAST 11
    0x23,0x0b, // LOAD_CONST_OBJ 11
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x0a, // LOAD_GLOBAL 'NotFoundError'
    0x23,0x0c, // LOAD_CONST_OBJ 12
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0x12,0x7e, // LOAD_GLOBAL 'ValueError'
    0xbb, // LOAD_FAST 11
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb8, // LOAD_FAST 8
    0x14,0x37, // LOAD_METHOD 'readline'
    0x36,0x00, // CALL_METHOD 0
    0xc9, // STORE_FAST 9
    0xb9, // LOAD_FAST 9
    0x43,0x47, // POP_JUMP_IF_TRUE 7
    0x12,0x7e, // LOAD_GLOBAL 'ValueError'
    0x23,0x0d, // LOAD_CONST_OBJ 13
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
    0xb9, // LOAD_FAST 9
    0x23,0x0e, // LOAD_CONST_OBJ 14
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x42,0x42, // JUMP 2
    0x42,0x26, // JUMP -26
    0x4a,0x19, // POP_EXCEPT_JUMP 25
    0x57, // DUP_TOP
    0x12,0x71, // LOAD_GLOBAL 'Exception'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x52, // POP_JUMP_IF_FALSE 18
    0xc7, // STORE_FAST 7
    0x49,0x08, // SETUP_FINALLY 8
    0xb8, // LOAD_FAST 8
    0x14,0x38, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb7, // LOAD_FAST 7
    0x65, // RAISE_OBJ
    0x51, // LOAD_CONST_NONE
    0xc7, // STORE_FAST 7
    0x28,0x07, // DELETE_FAST 7
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0xb8, // LOAD_FAST 8
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_url_open = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_upip_url_open,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 324,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 19,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 46,
        .line_info = fun_data_upip_url_open + 5,
        .opcodes = fun_data_upip_url_open + 42,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip__lt_module_gt_
// frozen bytecode for file upip.py, scope upip_get_pkg_metadata
static const byte fun_data_upip_get_pkg_metadata[72] = {
    0x65,0x16, // prelude
    0x39,0x1e, // names: get_pkg_metadata, name
    0x80,0xaa,0x26,0x22,0x55,0x24,0x22,0x48,0x29, // code info
    0x12,0x6b, // LOAD_GLOBAL 'index_urls'
    0x5f, // GET_ITER_STACK
    0x4b,0x2f, // FOR_ITER 47
    0xc1, // STORE_FAST 1
    0x48,0x0e, // SETUP_EXCEPT 14
    0x12,0x2e, // LOAD_GLOBAL 'url_open'
    0x10,0x3a, // LOAD_CONST_STRING '%s/%s/json'
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x2a,0x02, // BUILD_TUPLE 2
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0xc2, // STORE_FAST 2
    0x4a,0x0b, // POP_EXCEPT_JUMP 11
    0x57, // DUP_TOP
    0x12,0x0a, // LOAD_GLOBAL 'NotFoundError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0x59, // POP_TOP
    0x40,0x24,0x01, // UNWIND_JUMP -28
    0x5d, // END_FINALLY
    0x49,0x08, // SETUP_FINALLY 8
    0x12,0x68, // LOAD_GLOBAL 'json'
    0x14,0x3b, // LOAD_METHOD 'load'
    0xb2, // LOAD_FAST 2
    0x36,0x01, // CALL_METHOD 1
    0x63, // RETURN_VALUE
    0xb2, // LOAD_FAST 2
    0x14,0x38, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x5d, // END_FINALLY
    0x42,0x0f, // JUMP -49
    0x12,0x0a, // LOAD_GLOBAL 'NotFoundError'
    0x23,0x0c, // LOAD_CONST_OBJ 12
    0x34,0x01, // CALL_FUNCTION 1
    0x65, // RAISE_OBJ
};
static const mp_raw_code_t raw_code_upip_get_pkg_metadata = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_upip_get_pkg_metadata,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 72,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 13,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 57,
        .line_info = fun_data_upip_get_pkg_metadata + 4,
        .opcodes = fun_data_upip_get_pkg_metadata + 13,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip__lt_module_gt_
// frozen bytecode for file upip.py, scope upip_fatal
static const byte fun_data_upip_fatal[40] = {
    0xa2,0x01,0x14, // prelude
    0x3c,0x81,0x02,0x81,0x03, // names: fatal, msg, exc
    0x80,0xb7,0x28,0x27,0x22, // code info
    0x12,0x7f, // LOAD_GLOBAL 'print'
    0x10,0x3d, // LOAD_CONST_STRING 'Error:'
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x12,0x6a, // LOAD_GLOBAL 'debug'
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0xb1, // LOAD_FAST 1
    0x65, // RAISE_OBJ
    0x12,0x02, // LOAD_GLOBAL 'sys'
    0x14,0x3e, // LOAD_METHOD 'exit'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_fatal = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_upip_fatal,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 40,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 60,
        .line_info = fun_data_upip_fatal + 8,
        .opcodes = fun_data_upip_fatal + 13,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip__lt_module_gt_
// frozen bytecode for file upip.py, scope upip_install_pkg
static const byte fun_data_upip_install_pkg[173] = {
    0x8e,0x10,0x34, // prelude
    0x3f,0x81,0x04,0x6c, // names: install_pkg, pkg_spec, install_path
    0x80,0xbe,0x28,0x48,0x29,0x4a,0x24,0x27,0x22,0x27,0x2c,0x27,0x2d,0x26,0x22,0x2a,0x2b,0x48,0x27,0x22,0x22,0x27, // code info
    0xb0, // LOAD_FAST 0
    0x14,0x14, // LOAD_METHOD 'split'
    0x10,0x40, // LOAD_CONST_STRING '=='
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0x12,0x39, // LOAD_GLOBAL 'get_pkg_metadata'
    0xb2, // LOAD_FAST 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x34,0x01, // CALL_FUNCTION 1
    0xc3, // STORE_FAST 3
    0x12,0x76, // LOAD_GLOBAL 'len'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4a, // POP_JUMP_IF_FALSE 10
    0xb3, // LOAD_FAST 3
    0x10,0x41, // LOAD_CONST_STRING 'info'
    0x55, // LOAD_SUBSCR
    0x10,0x42, // LOAD_CONST_STRING 'version'
    0x55, // LOAD_SUBSCR
    0xc4, // STORE_FAST 4
    0x42,0x44, // JUMP 4
    0xb2, // LOAD_FAST 2
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0xc4, // STORE_FAST 4
    0xb3, // LOAD_FAST 3
    0x10,0x43, // LOAD_CONST_STRING 'releases'
    0x55, // LOAD_SUBSCR
    0xb4, // LOAD_FAST 4
    0x55, // LOAD_SUBSCR
    0xc5, // STORE_FAST 5
    0x28,0x03, // DELETE_FAST 3
    0x12,0x03, // LOAD_GLOBAL 'gc'
    0x14,0x09, // LOAD_METHOD 'collect'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x12,0x76, // LOAD_GLOBAL 'len'
    0xb5, // LOAD_FAST 5
    0x34,0x01, // CALL_FUNCTION 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xd9, // BINARY_OP 2 __eq__
    0x43,0x43, // POP_JUMP_IF_TRUE 3
    0x12,0x44, // LOAD_GLOBAL 'AssertionError'
    0x65, // RAISE_OBJ
    0xb5, // LOAD_FAST 5
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x10,0x45, // LOAD_CONST_STRING 'url'
    0x55, // LOAD_SUBSCR
    0xc6, // STORE_FAST 6
    0x12,0x7f, // LOAD_GLOBAL 'print'
    0x23,0x0f, // LOAD_CONST_OBJ 15
    0xb0, // LOAD_FAST 0
    0xb4, // LOAD_FAST 4
    0xb6, // LOAD_FAST 6
    0x2a,0x03, // BUILD_TUPLE 3
    0xf8, // BINARY_OP 33 __mod__
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x12,0x2e, // LOAD_GLOBAL 'url_open'
    0xb6, // LOAD_FAST 6
    0x34,0x01, // CALL_FUNCTION 1
    0xc7, // STORE_FAST 7
    0x49,0x1d, // SETUP_FINALLY 29
    0x12,0x07, // LOAD_GLOBAL 'uzlib'
    0x14,0x46, // LOAD_METHOD 'DecompIO'
    0xb7, // LOAD_FAST 7
    0x12,0x6e, // LOAD_GLOBAL 'gzdict_sz'
    0x36,0x02, // CALL_METHOD 2
    0xc8, // STORE_FAST 8
    0x12,0x69, // LOAD_GLOBAL 'tarfile'
    0x14,0x47, // LOAD_METHOD 'TarFile'
    0x10,0x48, // LOAD_CONST_STRING 'fileobj'
    0xb8, // LOAD_FAST 8
    0x36,0x82,0x00, // CALL_METHOD 256
    0xc9, // STORE_FAST 9
    0x12,0x1d, // LOAD_GLOBAL 'install_tar'
    0xb9, // LOAD_FAST 9
    0xb1, // LOAD_FAST 1
    0x34,0x02, // CALL_FUNCTION 2
    0xca, // STORE_FAST 10
    0x51, // LOAD_CONST_NONE
    0xb7, // LOAD_FAST 7
    0x14,0x38, // LOAD_METHOD 'close'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0x5d, // END_FINALLY
    0x28,0x09, // DELETE_FAST 9
    0x28,0x08, // DELETE_FAST 8
    0x12,0x03, // LOAD_GLOBAL 'gc'
    0x14,0x09, // LOAD_METHOD 'collect'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xba, // LOAD_FAST 10
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_install_pkg = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_upip_install_pkg,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 173,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 18,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 63,
        .line_info = fun_data_upip_install_pkg + 7,
        .opcodes = fun_data_upip_install_pkg + 29,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip__lt_module_gt_
// frozen bytecode for file upip.py, scope upip_install
static const byte fun_data_upip_install[252] = {
    0xfa,0x03,0x46, // prelude
    0x49,0x81,0x05,0x6c, // names: install, to_install, install_path
    0x80,0xda,0x20,0x2e,0x28,0x43,0x25,0x25,0x28,0x25,0x2b,0x24,0x49,0x23,0x22,0x23,0x24,0x28,0x27,0x25,0x22,0x27,0x27,0x24,0x26,0x2e,0x23,0x2e,0x56,0x22,0x2a, // code info
    0x12,0x03, // LOAD_GLOBAL 'gc'
    0x14,0x4a, // LOAD_METHOD 'mem_free'
    0x36,0x00, // CALL_METHOD 0
    0x12,0x03, // LOAD_GLOBAL 'gc'
    0x14,0x4b, // LOAD_METHOD 'mem_alloc'
    0x36,0x00, // CALL_METHOD 0
    0xf2, // BINARY_OP 27 __add__
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x22,0x84,0x80,0x00, // LOAD_CONST_SMALL_INT 65536
    0xda, // BINARY_OP 3 __le__
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x9c, // LOAD_CONST_SMALL_INT 28
    0x17,0x6e, // STORE_GLOBAL 'gzdict_sz'
    0xb1, // LOAD_FAST 1
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0x12,0x57, // LOAD_GLOBAL 'get_install_path'
    0x34,0x00, // CALL_FUNCTION 0
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0x10,0x11, // LOAD_CONST_STRING '/'
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0xb1, // LOAD_FAST 1
    0x10,0x11, // LOAD_CONST_STRING '/'
    0xe5, // BINARY_OP 14 __iadd__
    0xc1, // STORE_FAST 1
    0x12,0x81,0x06, // LOAD_GLOBAL 'isinstance'
    0xb0, // LOAD_FAST 0
    0x12,0x81,0x07, // LOAD_GLOBAL 'list'
    0x34,0x02, // CALL_FUNCTION 2
    0x43,0x44, // POP_JUMP_IF_TRUE 4
    0xb0, // LOAD_FAST 0
    0x2b,0x01, // BUILD_LIST 1
    0xc0, // STORE_FAST 0
    0x12,0x7f, // LOAD_GLOBAL 'print'
    0x23,0x10, // LOAD_CONST_OBJ 16
    0xb1, // LOAD_FAST 1
    0xf2, // BINARY_OP 27 __add__
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x2b,0x00, // BUILD_LIST 0
    0xc3, // STORE_FAST 3
    0x48,0x61, // SETUP_EXCEPT 97
    0x42,0xd8,0x80, // JUMP 88
    0x12,0x6a, // LOAD_GLOBAL 'debug'
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0x12,0x7f, // LOAD_GLOBAL 'print'
    0x10,0x4c, // LOAD_CONST_STRING 'Queue:'
    0xb0, // LOAD_FAST 0
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x14,0x4d, // LOAD_METHOD 'pop'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x36,0x01, // CALL_METHOD 1
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0xb3, // LOAD_FAST 3
    0xdd, // BINARY_OP 6 <in>
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x42,0x7e, // JUMP 62
    0x12,0x3f, // LOAD_GLOBAL 'install_pkg'
    0xb4, // LOAD_FAST 4
    0xb1, // LOAD_FAST 1
    0x34,0x02, // CALL_FUNCTION 2
    0xc5, // STORE_FAST 5
    0xb3, // LOAD_FAST 3
    0x14,0x4e, // LOAD_METHOD 'append'
    0xb4, // LOAD_FAST 4
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x12,0x6a, // LOAD_GLOBAL 'debug'
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0x12,0x7f, // LOAD_GLOBAL 'print'
    0xb5, // LOAD_FAST 5
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0xb5, // LOAD_FAST 5
    0x14,0x4f, // LOAD_METHOD 'get'
    0x10,0x25, // LOAD_CONST_STRING 'deps'
    0x10,0x0f, // LOAD_CONST_STRING ''
    0x36,0x02, // CALL_METHOD 2
    0x14,0x13, // LOAD_METHOD 'rstrip'
    0x36,0x00, // CALL_METHOD 0
    0xc6, // STORE_FAST 6
    0xb6, // LOAD_FAST 6
    0x44,0x55, // POP_JUMP_IF_FALSE 21
    0xb6, // LOAD_FAST 6
    0x14,0x50, // LOAD_METHOD 'decode'
    0x10,0x51, // LOAD_CONST_STRING 'utf-8'
    0x36,0x01, // CALL_METHOD 1
    0x14,0x14, // LOAD_METHOD 'split'
    0x10,0x52, // LOAD_CONST_STRING '\n'
    0x36,0x01, // CALL_METHOD 1
    0xc6, // STORE_FAST 6
    0xb0, // LOAD_FAST 0
    0x14,0x53, // LOAD_METHOD 'extend'
    0xb6, // LOAD_FAST 6
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x43,0xa4,0x7f, // POP_JUMP_IF_TRUE -92
    0x4a,0x26, // POP_EXCEPT_JUMP 38
    0x57, // DUP_TOP
    0x12,0x71, // LOAD_GLOBAL 'Exception'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x5f, // POP_JUMP_IF_FALSE 31
    0xc7, // STORE_FAST 7
    0x49,0x15, // SETUP_FINALLY 21
    0x12,0x7f, // LOAD_GLOBAL 'print'
    0x23,0x11, // LOAD_CONST_OBJ 17
    0x14,0x54, // LOAD_METHOD 'format'
    0xb4, // LOAD_FAST 4
    0xb7, // LOAD_FAST 7
    0x36,0x02, // CALL_METHOD 2
    0x10,0x55, // LOAD_CONST_STRING 'file'
    0x12,0x02, // LOAD_GLOBAL 'sys'
    0x13,0x56, // LOAD_ATTR 'stderr'
    0x34,0x82,0x01, // CALL_FUNCTION 257
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0xc7, // STORE_FAST 7
    0x28,0x07, // DELETE_FAST 7
    0x5d, // END_FINALLY
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_install = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_upip_install,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 252,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 16,
        .n_exc_stack = 2,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 73,
        .line_info = fun_data_upip_install + 7,
        .opcodes = fun_data_upip_install + 38,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip__lt_module_gt_
// frozen bytecode for file upip.py, scope upip_get_install_path
static const byte fun_data_upip_get_install_path[51] = {
    0x08,0x12, // prelude
    0x57, // names: get_install_path
    0x80,0xff,0x20,0x46,0x28,0x27,0x28,0x28, // code info
    0x12,0x6c, // LOAD_GLOBAL 'install_path'
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x57, // POP_JUMP_IF_FALSE 23
    0x12,0x02, // LOAD_GLOBAL 'sys'
    0x13,0x58, // LOAD_ATTR 'path'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x17,0x6c, // STORE_GLOBAL 'install_path'
    0x12,0x6c, // LOAD_GLOBAL 'install_path'
    0x10,0x59, // LOAD_CONST_STRING '.frozen'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0x12,0x02, // LOAD_GLOBAL 'sys'
    0x13,0x58, // LOAD_ATTR 'path'
    0x82, // LOAD_CONST_SMALL_INT 2
    0x55, // LOAD_SUBSCR
    0x17,0x6c, // STORE_GLOBAL 'install_path'
    0x12,0x29, // LOAD_GLOBAL 'expandhome'
    0x12,0x6c, // LOAD_GLOBAL 'install_path'
    0x34,0x01, // CALL_FUNCTION 1
    0x17,0x6c, // STORE_GLOBAL 'install_path'
    0x12,0x6c, // LOAD_GLOBAL 'install_path'
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_get_install_path = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_upip_get_install_path,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 51,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 87,
        .line_info = fun_data_upip_get_install_path + 3,
        .opcodes = fun_data_upip_get_install_path + 11,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip__lt_module_gt_
// frozen bytecode for file upip.py, scope upip_cleanup
static const byte fun_data_upip_cleanup[49] = {
    0x54,0x0c, // prelude
    0x5a, // names: cleanup
    0x90,0x0a,0x26,0x22,0x51, // code info
    0x12,0x6d, // LOAD_GLOBAL 'cleanup_files'
    0x5f, // GET_ITER_STACK
    0x4b,0x22, // FOR_ITER 34
    0xc0, // STORE_FAST 0
    0x48,0x0a, // SETUP_EXCEPT 10
    0x12,0x67, // LOAD_GLOBAL 'os'
    0x14,0x5b, // LOAD_METHOD 'unlink'
    0xb0, // LOAD_FAST 0
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x4a,0x13, // POP_EXCEPT_JUMP 19
    0x57, // DUP_TOP
    0x12,0x78, // LOAD_GLOBAL 'OSError'
    0xdf, // BINARY_OP 8 <exception match>
    0x44,0x4c, // POP_JUMP_IF_FALSE 12
    0x59, // POP_TOP
    0x12,0x7f, // LOAD_GLOBAL 'print'
    0x23,0x12, // LOAD_CONST_OBJ 18
    0xb0, // LOAD_FAST 0
    0xf2, // BINARY_OP 27 __add__
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x4a,0x01, // POP_EXCEPT_JUMP 1
    0x5d, // END_FINALLY
    0x42,0x1c, // JUMP -36
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_cleanup = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_upip_cleanup,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 49,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 11,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 90,
        .line_info = fun_data_upip_cleanup + 3,
        .opcodes = fun_data_upip_cleanup + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip__lt_module_gt_
// frozen bytecode for file upip.py, scope upip_help
static const byte fun_data_upip_help[37] = {
    0x10,0x10, // prelude
    0x5c, // names: help
    0x90,0x12,0x22,0x85,0x09,0x2b,0x22, // code info
    0x12,0x7f, // LOAD_GLOBAL 'print'
    0x23,0x13, // LOAD_CONST_OBJ 19
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x12,0x7f, // LOAD_GLOBAL 'print'
    0x23,0x14, // LOAD_CONST_OBJ 20
    0x12,0x57, // LOAD_GLOBAL 'get_install_path'
    0x34,0x00, // CALL_FUNCTION 0
    0x34,0x02, // CALL_FUNCTION 2
    0x59, // POP_TOP
    0x12,0x7f, // LOAD_GLOBAL 'print'
    0x23,0x15, // LOAD_CONST_OBJ 21
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_help = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_upip_help,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 37,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 92,
        .line_info = fun_data_upip_help + 3,
        .opcodes = fun_data_upip_help + 10,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip__lt_module_gt_
// frozen bytecode for file upip.py, scope upip_main
static const byte fun_data_upip_main[345] = {
    0x5c,0x60, // prelude
    0x5d, // names: main
    0x90,0x27,0x20,0x20,0x20,0x43,0x1f,0x23,0x25,0x42,0x2b,0x47,0x43,0x22,0x23,0x27,0x24,0x2c,0x25,0x22,0x26,0x28,0x27,0x26,0x27,0x24,0x28,0x20,0x26,0x23,0x22,0x28,0x22,0x32,0x26,0x2a,0x26,0x26,0x45,0x1f,0x44,0x2f,0x23,0x25,0x42,0x46,0x24, // code info
    0x51, // LOAD_CONST_NONE
    0x17,0x6c, // STORE_GLOBAL 'install_path'
    0x12,0x76, // LOAD_GLOBAL 'len'
    0x12,0x02, // LOAD_GLOBAL 'sys'
    0x13,0x5e, // LOAD_ATTR 'argv'
    0x34,0x01, // CALL_FUNCTION 1
    0x82, // LOAD_CONST_SMALL_INT 2
    0xd7, // BINARY_OP 0 __lt__
    0x43,0x56, // POP_JUMP_IF_TRUE 22
    0x12,0x02, // LOAD_GLOBAL 'sys'
    0x13,0x5e, // LOAD_ATTR 'argv'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x10,0x5f, // LOAD_CONST_STRING '-h'
    0xd9, // BINARY_OP 2 __eq__
    0x43,0x4b, // POP_JUMP_IF_TRUE 11
    0x12,0x02, // LOAD_GLOBAL 'sys'
    0x13,0x5e, // LOAD_ATTR 'argv'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x10,0x60, // LOAD_CONST_STRING '--help'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x5c, // LOAD_GLOBAL 'help'
    0x34,0x00, // CALL_FUNCTION 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x12,0x02, // LOAD_GLOBAL 'sys'
    0x13,0x5e, // LOAD_ATTR 'argv'
    0x81, // LOAD_CONST_SMALL_INT 1
    0x55, // LOAD_SUBSCR
    0x10,0x49, // LOAD_CONST_STRING 'install'
    0xdc, // BINARY_OP 5 __ne__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x3c, // LOAD_GLOBAL 'fatal'
    0x23,0x16, // LOAD_CONST_OBJ 22
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x2b,0x00, // BUILD_LIST 0
    0xc0, // STORE_FAST 0
    0x82, // LOAD_CONST_SMALL_INT 2
    0xc1, // STORE_FAST 1
    0x42,0x9d,0x81, // JUMP 157
    0x12,0x02, // LOAD_GLOBAL 'sys'
    0x13,0x5e, // LOAD_ATTR 'argv'
    0xb1, // LOAD_FAST 1
    0x55, // LOAD_SUBSCR
    0xc2, // STORE_FAST 2
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0xc1, // STORE_FAST 1
    0xb2, // LOAD_FAST 2
    0x10,0x5f, // LOAD_CONST_STRING '-h'
    0xd9, // BINARY_OP 2 __eq__
    0x43,0x46, // POP_JUMP_IF_TRUE 6
    0xb2, // LOAD_FAST 2
    0x10,0x60, // LOAD_CONST_STRING '--help'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x47, // POP_JUMP_IF_FALSE 7
    0x12,0x5c, // LOAD_GLOBAL 'help'
    0x34,0x00, // CALL_FUNCTION 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0xb2, // LOAD_FAST 2
    0x10,0x61, // LOAD_CONST_STRING '-p'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x4f, // POP_JUMP_IF_FALSE 15
    0x12,0x02, // LOAD_GLOBAL 'sys'
    0x13,0x5e, // LOAD_ATTR 'argv'
    0xb1, // LOAD_FAST 1
    0x55, // LOAD_SUBSCR
    0x17,0x6c, // STORE_GLOBAL 'install_path'
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0xc1, // STORE_FAST 1
    0x42,0xea,0x80, // JUMP 106
    0xb2, // LOAD_FAST 2
    0x10,0x62, // LOAD_CONST_STRING '-r'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x7a, // POP_JUMP_IF_FALSE 58
    0x12,0x02, // LOAD_GLOBAL 'sys'
    0x13,0x5e, // LOAD_ATTR 'argv'
    0xb1, // LOAD_FAST 1
    0x55, // LOAD_SUBSCR
    0xc3, // STORE_FAST 3
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0xc1, // STORE_FAST 1
    0x12,0x7b, // LOAD_GLOBAL 'open'
    0xb3, // LOAD_FAST 3
    0x34,0x01, // CALL_FUNCTION 1
    0x47,0x24, // SETUP_WITH 36
    0xc4, // STORE_FAST 4
    0xb4, // LOAD_FAST 4
    0x14,0x37, // LOAD_METHOD 'readline'
    0x36,0x00, // CALL_METHOD 0
    0xc5, // STORE_FAST 5
    0xb5, // LOAD_FAST 5
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0x42,0x57, // JUMP 23
    0xb5, // LOAD_FAST 5
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x10,0x63, // LOAD_CONST_STRING '#'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x42,0x4b, // JUMP 11
    0xb0, // LOAD_FAST 0
    0x14,0x4e, // LOAD_METHOD 'append'
    0xb5, // LOAD_FAST 5
    0x14,0x13, // LOAD_METHOD 'rstrip'
    0x36,0x00, // CALL_METHOD 0
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0x42,0x1e, // JUMP -34
    0x51, // LOAD_CONST_NONE
    0x5c, // WITH_CLEANUP
    0x5d, // END_FINALLY
    0x42,0x6a, // JUMP 42
    0xb2, // LOAD_FAST 2
    0x10,0x64, // LOAD_CONST_STRING '-i'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x50, // POP_JUMP_IF_FALSE 16
    0x12,0x02, // LOAD_GLOBAL 'sys'
    0x13,0x5e, // LOAD_ATTR 'argv'
    0xb1, // LOAD_FAST 1
    0x55, // LOAD_SUBSCR
    0x2b,0x01, // BUILD_LIST 1
    0x17,0x6b, // STORE_GLOBAL 'index_urls'
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xe5, // BINARY_OP 14 __iadd__
    0xc1, // STORE_FAST 1
    0x42,0x54, // JUMP 20
    0xb2, // LOAD_FAST 2
    0x10,0x65, // LOAD_CONST_STRING '--debug'
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x45, // POP_JUMP_IF_FALSE 5
    0x52, // LOAD_CONST_TRUE
    0x17,0x6a, // STORE_GLOBAL 'debug'
    0x42,0x49, // JUMP 9
    0x12,0x3c, // LOAD_GLOBAL 'fatal'
    0x23,0x17, // LOAD_CONST_OBJ 23
    0xb2, // LOAD_FAST 2
    0xf2, // BINARY_OP 27 __add__
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0x12,0x76, // LOAD_GLOBAL 'len'
    0x12,0x02, // LOAD_GLOBAL 'sys'
    0x13,0x5e, // LOAD_ATTR 'argv'
    0x34,0x01, // CALL_FUNCTION 1
    0xd7, // BINARY_OP 0 __lt__
    0x44,0x4e, // POP_JUMP_IF_FALSE 14
    0x12,0x02, // LOAD_GLOBAL 'sys'
    0x13,0x5e, // LOAD_ATTR 'argv'
    0xb1, // LOAD_FAST 1
    0x55, // LOAD_SUBSCR
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x10,0x66, // LOAD_CONST_STRING '-'
    0xd9, // BINARY_OP 2 __eq__
    0x43,0xc9,0x7e, // POP_JUMP_IF_TRUE -183
    0xb0, // LOAD_FAST 0
    0x14,0x53, // LOAD_METHOD 'extend'
    0x12,0x02, // LOAD_GLOBAL 'sys'
    0x13,0x5e, // LOAD_ATTR 'argv'
    0xb1, // LOAD_FAST 1
    0x51, // LOAD_CONST_NONE
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0x36,0x01, // CALL_METHOD 1
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x43,0x47, // POP_JUMP_IF_TRUE 7
    0x12,0x5c, // LOAD_GLOBAL 'help'
    0x34,0x00, // CALL_FUNCTION 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x12,0x49, // LOAD_GLOBAL 'install'
    0xb0, // LOAD_FAST 0
    0x34,0x01, // CALL_FUNCTION 1
    0x59, // POP_TOP
    0x12,0x6a, // LOAD_GLOBAL 'debug'
    0x43,0x45, // POP_JUMP_IF_TRUE 5
    0x12,0x5a, // LOAD_GLOBAL 'cleanup'
    0x34,0x00, // CALL_FUNCTION 0
    0x59, // POP_TOP
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_main = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_upip_main,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 345,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 12,
        .n_exc_stack = 1,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 93,
        .line_info = fun_data_upip_main + 3,
        .opcodes = fun_data_upip_main + 50,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_upip__lt_module_gt_[] = {
    &raw_code_upip_NotFoundError,
    &raw_code_upip_op_split,
    &raw_code_upip__makedirs,
    &raw_code_upip_save_file,
    &raw_code_upip_install_tar,
    &raw_code_upip_expandhome,
    &raw_code_upip_url_open,
    &raw_code_upip_get_pkg_metadata,
    &raw_code_upip_fatal,
    &raw_code_upip_install_pkg,
    &raw_code_upip_install,
    &raw_code_upip_get_install_path,
    &raw_code_upip_cleanup,
    &raw_code_upip_help,
    &raw_code_upip_main,
};

static const mp_raw_code_t raw_code_upip__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_upip__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 242,
    #endif
    .children = (void *)&children_upip__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 15,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_upip__lt_module_gt_ + 3,
        .opcodes = fun_data_upip__lt_module_gt_ + 53,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_upip[136] = {
    MP_QSTR_upip_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_sys,
    MP_QSTR_gc,
    MP_QSTR_uos,
    MP_QSTR_uerrno,
    MP_QSTR_ujson,
    MP_QSTR_uzlib,
    MP_QSTR_upip_utarfile,
    MP_QSTR_collect,
    MP_QSTR_NotFoundError,
    MP_QSTR_ussl,
    MP_QSTR_usocket,
    MP_QSTR___main__,
    MP_QSTR_op_split,
    MP_QSTR_,
    MP_QSTR_rsplit,
    MP_QSTR__slash_,
    MP_QSTR__makedirs,
    MP_QSTR_rstrip,
    MP_QSTR_split,
    MP_QSTR_mkdir,
    MP_QSTR_errno,
    MP_QSTR_EEXIST,
    MP_QSTR_EISDIR,
    MP_QSTR_save_file,
    MP_QSTR_wb,
    MP_QSTR_readinto,
    MP_QSTR_write,
    MP_QSTR_install_tar,
    MP_QSTR_name,
    MP_QSTR_index,
    MP_QSTR_startswith,
    MP_QSTR__dot_egg_hyphen_info,
    MP_QSTR_endswith,
    MP_QSTR_extractfile,
    MP_QSTR_read,
    MP_QSTR_deps,
    MP_QSTR_Skipping,
    MP_QSTR_type,
    MP_QSTR_DIRTYPE,
    MP_QSTR_expandhome,
    MP_QSTR__tilde__slash_,
    MP_QSTR_getenv,
    MP_QSTR_HOME,
    MP_QSTR_replace,
    MP_QSTR_url_open,
    MP_QSTR__colon_,
    MP_QSTR_getaddrinfo,
    MP_QSTR_SOCK_STREAM,
    MP_QSTR_socket,
    MP_QSTR_connect,
    MP_QSTR_https_colon_,
    MP_QSTR_wrap_socket,
    MP_QSTR_server_hostname,
    MP_QSTR_readline,
    MP_QSTR_close,
    MP_QSTR_get_pkg_metadata,
    MP_QSTR__percent_s_slash__percent_s_slash_json,
    MP_QSTR_load,
    MP_QSTR_fatal,
    MP_QSTR_Error_colon_,
    MP_QSTR_exit,
    MP_QSTR_install_pkg,
    MP_QSTR__equals__equals_,
    MP_QSTR_info,
    MP_QSTR_version,
    MP_QSTR_releases,
    MP_QSTR_AssertionError,
    MP_QSTR_url,
    MP_QSTR_DecompIO,
    MP_QSTR_TarFile,
    MP_QSTR_fileobj,
    MP_QSTR_install,
    MP_QSTR_mem_free,
    MP_QSTR_mem_alloc,
    MP_QSTR_Queue_colon_,
    MP_QSTR_pop,
    MP_QSTR_append,
    MP_QSTR_get,
    MP_QSTR_decode,
    MP_QSTR_utf_hyphen_8,
    MP_QSTR__0x0a_,
    MP_QSTR_extend,
    MP_QSTR_format,
    MP_QSTR_file,
    MP_QSTR_stderr,
    MP_QSTR_get_install_path,
    MP_QSTR_path,
    MP_QSTR__dot_frozen,
    MP_QSTR_cleanup,
    MP_QSTR_unlink,
    MP_QSTR_help,
    MP_QSTR_main,
    MP_QSTR_argv,
    MP_QSTR__hyphen_h,
    MP_QSTR__hyphen__hyphen_help,
    MP_QSTR__hyphen_p,
    MP_QSTR__hyphen_r,
    MP_QSTR__hash_,
    MP_QSTR__hyphen_i,
    MP_QSTR__hyphen__hyphen_debug,
    MP_QSTR__hyphen_,
    MP_QSTR_os,
    MP_QSTR_json,
    MP_QSTR_tarfile,
    MP_QSTR_debug,
    MP_QSTR_index_urls,
    MP_QSTR_install_path,
    MP_QSTR_cleanup_files,
    MP_QSTR_gzdict_sz,
    MP_QSTR_bytearray,
    MP_QSTR_file_buf,
    MP_QSTR_Exception,
    MP_QSTR_warn_ussl,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_len,
    MP_QSTR_mode,
    MP_QSTR_OSError,
    MP_QSTR_fname,
    MP_QSTR_subf,
    MP_QSTR_open,
    MP_QSTR_f,
    MP_QSTR_prefix,
    MP_QSTR_ValueError,
    MP_QSTR_print,
    MP_QSTR_s,
    MP_QSTR_int,
    MP_QSTR_msg,
    MP_QSTR_exc,
    MP_QSTR_pkg_spec,
    MP_QSTR_to_install,
    MP_QSTR_isinstance,
    MP_QSTR_list,
};

// constants
static const mp_obj_str_t const_obj_upip_0 = {{&mp_type_str}, 58328, 26, (const byte*)"\x68\x74\x74\x70\x73\x3a\x2f\x2f\x6d\x69\x63\x72\x6f\x70\x79\x74\x68\x6f\x6e\x2e\x6f\x72\x67\x2f\x70\x69"};
static const mp_rom_obj_tuple_t const_obj_upip_2 = {{&mp_type_tuple}, 2, {
    MP_ROM_QSTR(MP_QSTR_),
    MP_ROM_QSTR(MP_QSTR_),
}};
static const mp_rom_obj_tuple_t const_obj_upip_3 = {{&mp_type_tuple}, 3, {
    MP_ROM_QSTR(MP_QSTR_setup_dot_),
    MP_ROM_QSTR(MP_QSTR_PKG_hyphen_INFO),
    MP_ROM_QSTR(MP_QSTR_README),
}};
static const mp_obj_str_t const_obj_upip_6 = {{&mp_type_str}, 10889, 35, (const byte*)"\x55\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x72\x65\x73\x6f\x6c\x76\x65\x20\x25\x73\x20\x28\x6e\x6f\x20\x49\x6e\x74\x65\x72\x6e\x65\x74\x3f\x29"};
static const mp_obj_str_t const_obj_upip_7 = {{&mp_type_str}, 51159, 44, (const byte*)"\x57\x61\x72\x6e\x69\x6e\x67\x3a\x20\x25\x73\x20\x53\x53\x4c\x20\x63\x65\x72\x74\x69\x66\x69\x63\x61\x74\x65\x20\x69\x73\x20\x6e\x6f\x74\x20\x76\x61\x6c\x69\x64\x61\x74\x65\x64"};
static const mp_obj_str_t const_obj_upip_8 = {{&mp_type_str}, 65109, 33, (const byte*)"\x47\x45\x54\x20\x2f\x25\x73\x20\x48\x54\x54\x50\x2f\x31\x2e\x30\x0d\x0a\x48\x6f\x73\x74\x3a\x20\x25\x73\x3a\x25\x73\x0d\x0a\x0d\x0a"};
static const mp_obj_str_t const_obj_upip_9 = {{&mp_type_bytes}, 28951, 3, (const byte*)"\x32\x30\x30"};
static const mp_obj_str_t const_obj_upip_10 = {{&mp_type_bytes}, 22421, 3, (const byte*)"\x34\x30\x34"};
static const mp_obj_str_t const_obj_upip_11 = {{&mp_type_bytes}, 29975, 3, (const byte*)"\x33\x30\x31"};
static const mp_obj_str_t const_obj_upip_13 = {{&mp_type_str}, 39199, 30, (const byte*)"\x55\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x45\x4f\x46\x20\x69\x6e\x20\x48\x54\x54\x50\x20\x68\x65\x61\x64\x65\x72\x73"};
static const mp_obj_str_t const_obj_upip_14 = {{&mp_type_bytes}, 27298, 2, (const byte*)"\x0d\x0a"};
static const mp_obj_str_t const_obj_upip_17 = {{&mp_type_str}, 31671, 62, (const byte*)"\x45\x72\x72\x6f\x72\x20\x69\x6e\x73\x74\x61\x6c\x6c\x69\x6e\x67\x20\x27\x7b\x7d\x27\x3a\x20\x7b\x7d\x2c\x20\x70\x61\x63\x6b\x61\x67\x65\x73\x20\x6d\x61\x79\x20\x62\x65\x20\x70\x61\x72\x74\x69\x61\x6c\x6c\x79\x20\x69\x6e\x73\x74\x61\x6c\x6c\x65\x64"};
static const mp_obj_str_t const_obj_upip_19 = {{&mp_type_str}, 25874, 364, (const byte*)"\x75\x70\x69\x70\x20\x2d\x20\x53\x69\x6d\x70\x6c\x65\x20\x50\x79\x50\x49\x20\x70\x61\x63\x6b\x61\x67\x65\x20\x6d\x61\x6e\x61\x67\x65\x72\x20\x66\x6f\x72\x20\x4d\x69\x63\x72\x6f\x50\x79\x74\x68\x6f\x6e\x0a\x55\x73\x61\x67\x65\x3a\x20\x6d\x69\x63\x72\x6f\x70\x79\x74\x68\x6f\x6e\x20\x2d\x6d\x20\x75\x70\x69\x70\x20\x69\x6e\x73\x74\x61\x6c\x6c\x20\x5b\x2d\x70\x20\x3c\x70\x61\x74\x68\x3e\x5d\x20\x3c\x70\x61\x63\x6b\x61\x67\x65\x3e\x2e\x2e\x2e\x20\x7c\x20\x2d\x72\x20\x3c\x72\x65\x71\x75\x69\x72\x65\x6d\x65\x6e\x74\x73\x2e\x74\x78\x74\x3e\x0a\x69\x6d\x70\x6f\x72\x74\x20\x75\x70\x69\x70\x3b\x20\x75\x70\x69\x70\x2e\x69\x6e\x73\x74\x61\x6c\x6c\x28\x70\x61\x63\x6b\x61\x67\x65\x5f\x6f\x72\x5f\x6c\x69\x73\x74\x2c\x20\x5b\x3c\x70\x61\x74\x68\x3e\x5d\x29\x0a\x0a\x49\x66\x20\x3c\x70\x61\x74\x68\x3e\x20\x69\x73\x6e\x27\x74\x20\x67\x69\x76\x65\x6e\x2c\x20\x70\x61\x63\x6b\x61\x67\x65\x73\x20\x77\x69\x6c\x6c\x20\x62\x65\x20\x69\x6e\x73\x74\x61\x6c\x6c\x65\x64\x20\x74\x6f\x20\x73\x79\x73\x2e\x70\x61\x74\x68\x5b\x31\x5d\x2c\x20\x6f\x72\x0a\x73\x79\x73\x2e\x70\x61\x74\x68\x5b\x32\x5d\x20\x69\x66\x20\x74\x68\x65\x20\x66\x6f\x72\x6d\x65\x72\x20\x69\x73\x20\x2e\x66\x72\x6f\x7a\x65\x6e\x20\x28\x70\x61\x74\x68\x20\x63\x61\x6e\x20\x62\x65\x20\x73\x65\x74\x20\x66\x72\x6f\x6d\x20\x4d\x49\x43\x52\x4f\x50\x59\x50\x41\x54\x48\x0a\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x69\x66\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x29\x2e"};
static const mp_obj_str_t const_obj_upip_21 = {{&mp_type_str}, 34882, 146, (const byte*)"\x0a\x4e\x6f\x74\x65\x3a\x20\x6f\x6e\x6c\x79\x20\x4d\x69\x63\x72\x6f\x50\x79\x74\x68\x6f\x6e\x20\x70\x61\x63\x6b\x61\x67\x65\x73\x20\x28\x75\x73\x75\x61\x6c\x6c\x79\x2c\x20\x6e\x61\x6d\x65\x64\x20\x6d\x69\x63\x72\x6f\x70\x79\x74\x68\x6f\x6e\x2d\x2a\x29\x20\x61\x72\x65\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x0a\x66\x6f\x72\x20\x69\x6e\x73\x74\x61\x6c\x6c\x61\x74\x69\x6f\x6e\x2c\x20\x75\x70\x69\x70\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x20\x61\x72\x62\x69\x74\x72\x61\x72\x79\x20\x63\x6f\x64\x65\x20\x69\x6e\x20\x73\x65\x74\x75\x70\x2e\x70\x79\x2e\x0a"};
static const mp_obj_str_t const_obj_upip_22 = {{&mp_type_str}, 50937, 32, (const byte*)"\x4f\x6e\x6c\x79\x20\x27\x69\x6e\x73\x74\x61\x6c\x6c\x27\x20\x63\x6f\x6d\x6d\x61\x6e\x64\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64"};
static const mp_obj_str_t const_obj_upip_23 = {{&mp_type_str}, 40302, 28, (const byte*)"\x55\x6e\x6b\x6e\x6f\x77\x6e\x2f\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x70\x74\x69\x6f\x6e\x3a\x20"};

// constant table
static const mp_rom_obj_t const_obj_table_data_upip[24] = {
    MP_ROM_PTR(&const_obj_upip_0),
    MP_ROM_QSTR(MP_QSTR_https_colon__slash__slash_pypi_dot_org_slash_pypi),
    MP_ROM_PTR(&const_obj_upip_2),
    MP_ROM_PTR(&const_obj_upip_3),
    MP_ROM_QSTR(MP_QSTR__slash_requires_dot_txt),
    MP_ROM_QSTR(MP_QSTR_Extracting_space_),
    MP_ROM_PTR(&const_obj_upip_6),
    MP_ROM_PTR(&const_obj_upip_7),
    MP_ROM_PTR(&const_obj_upip_8),
    MP_ROM_PTR(&const_obj_upip_9),
    MP_ROM_PTR(&const_obj_upip_10),
    MP_ROM_PTR(&const_obj_upip_11),
    MP_ROM_QSTR(MP_QSTR_Package_space_not_space_found),
    MP_ROM_PTR(&const_obj_upip_13),
    MP_ROM_PTR(&const_obj_upip_14),
    MP_ROM_QSTR(MP_QSTR_Installing_space__percent_s_space__percent_s_space_from_space__percent_s),
    MP_ROM_QSTR(MP_QSTR_Installing_space_to_colon__space_),
    MP_ROM_PTR(&const_obj_upip_17),
    MP_ROM_QSTR(MP_QSTR_Warning_colon__space_Cannot_space_delete_space_),
    MP_ROM_PTR(&const_obj_upip_19),
    MP_ROM_QSTR(MP_QSTR_Default_space_install_space_path_colon_),
    MP_ROM_PTR(&const_obj_upip_21),
    MP_ROM_PTR(&const_obj_upip_22),
    MP_ROM_PTR(&const_obj_upip_23),
};

static const mp_frozen_module_t frozen_module_upip = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_upip,
        .obj_table = (mp_obj_t *)&const_obj_table_data_upip,
    },
    .rc = &raw_code_upip__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// frozen module upip_utarfile
// - original source file: build-shared/frozen_mpy/upip_utarfile.mpy
// - frozen file name: upip_utarfile.py
// - .mpy header: 4d:06:00:1f

// frozen bytecode for file upip_utarfile.py, scope upip_utarfile__lt_module_gt_
static const byte fun_data_upip_utarfile__lt_module_gt_[92] = {
    0x18,0x02, // prelude
    0x01, // names: <module>
     // code info
    0x80, // LOAD_CONST_SMALL_INT 0
    0x51, // LOAD_CONST_NONE
    0x1b,0x02, // IMPORT_NAME 'uctypes'
    0x16,0x02, // STORE_NAME 'uctypes'
    0x2c,0x02, // BUILD_MAP 2
    0x11,0x02, // LOAD_NAME 'uctypes'
    0x13,0x03, // LOAD_ATTR 'ARRAY'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xed, // BINARY_OP 22 __or__
    0x11,0x02, // LOAD_NAME 'uctypes'
    0x13,0x04, // LOAD_ATTR 'UINT8'
    0x22,0x80,0x64, // LOAD_CONST_SMALL_INT 100
    0xed, // BINARY_OP 22 __or__
    0x2a,0x02, // BUILD_TUPLE 2
    0x10,0x05, // LOAD_CONST_STRING 'name'
    0x62, // STORE_MAP
    0x11,0x02, // LOAD_NAME 'uctypes'
    0x13,0x03, // LOAD_ATTR 'ARRAY'
    0x22,0x80,0x7c, // LOAD_CONST_SMALL_INT 124
    0xed, // BINARY_OP 22 __or__
    0x11,0x02, // LOAD_NAME 'uctypes'
    0x13,0x04, // LOAD_ATTR 'UINT8'
    0x8b, // LOAD_CONST_SMALL_INT 11
    0xed, // BINARY_OP 22 __or__
    0x2a,0x02, // BUILD_TUPLE 2
    0x10,0x06, // LOAD_CONST_STRING 'size'
    0x62, // STORE_MAP
    0x16,0x23, // STORE_NAME 'TAR_HEADER'
    0x10,0x07, // LOAD_CONST_STRING 'dir'
    0x16,0x24, // STORE_NAME 'DIRTYPE'
    0x10,0x08, // LOAD_CONST_STRING 'file'
    0x16,0x25, // STORE_NAME 'REGTYPE'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x0c, // STORE_NAME 'roundup'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x01, // MAKE_FUNCTION 1
    0x10,0x09, // LOAD_CONST_STRING 'FileSection'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x09, // STORE_NAME 'FileSection'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x02, // MAKE_FUNCTION 2
    0x10,0x0a, // LOAD_CONST_STRING 'TarInfo'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x0a, // STORE_NAME 'TarInfo'
    0x54, // LOAD_BUILD_CLASS
    0x32,0x03, // MAKE_FUNCTION 3
    0x10,0x0b, // LOAD_CONST_STRING 'TarFile'
    0x34,0x02, // CALL_FUNCTION 2
    0x16,0x0b, // STORE_NAME 'TarFile'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of upip_utarfile__lt_module_gt_
// frozen bytecode for file upip_utarfile.py, scope upip_utarfile_roundup
static const byte fun_data_upip_utarfile_roundup[16] = {
    0x22,0x06, // prelude
    0x0c,0x26,0x10, // names: roundup, val, align
     // code info
    0xb0, // LOAD_FAST 0
    0xb1, // LOAD_FAST 1
    0xf2, // BINARY_OP 27 __add__
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf3, // BINARY_OP 28 __sub__
    0xb1, // LOAD_FAST 1
    0x81, // LOAD_CONST_SMALL_INT 1
    0xf3, // BINARY_OP 28 __sub__
    0xd2, // UNARY_OP 2 __invert__
    0xef, // BINARY_OP 24 __and__
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_utarfile_roundup = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_upip_utarfile_roundup,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 16,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 12,
        .line_info = fun_data_upip_utarfile_roundup + 5,
        .opcodes = fun_data_upip_utarfile_roundup + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip_utarfile__lt_module_gt_
// frozen bytecode for file upip_utarfile.py, scope upip_utarfile_FileSection
static const byte fun_data_upip_utarfile_FileSection[36] = {
    0x08,0x02, // prelude
    0x09, // names: FileSection
     // code info
    0x11,0x27, // LOAD_NAME '__name__'
    0x16,0x28, // STORE_NAME '__module__'
    0x10,0x09, // LOAD_CONST_STRING 'FileSection'
    0x16,0x29, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x0d, // STORE_NAME '__init__'
    0x22,0x84,0x80,0x00, // LOAD_CONST_SMALL_INT 65536
    0x2a,0x01, // BUILD_TUPLE 1
    0x53, // LOAD_NULL
    0x33,0x01, // MAKE_FUNCTION_DEFARGS 1
    0x16,0x11, // STORE_NAME 'read'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x12, // STORE_NAME 'readinto'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x13, // STORE_NAME 'skip'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of upip_utarfile_FileSection
// frozen bytecode for file upip_utarfile.py, scope upip_utarfile_FileSection___init__
static const byte fun_data_upip_utarfile_FileSection___init__[24] = {
    0xa8,0x04,0x0a, // prelude
    0x0d,0x2a,0x0e,0x0f,0x2b, // names: __init__, self, f, content_len, aligned_len
     // code info
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x18,0x0e, // STORE_ATTR 'f'
    0xb2, // LOAD_FAST 2
    0xb0, // LOAD_FAST 0
    0x18,0x0f, // STORE_ATTR 'content_len'
    0xb3, // LOAD_FAST 3
    0xb2, // LOAD_FAST 2
    0xf3, // BINARY_OP 28 __sub__
    0xb0, // LOAD_FAST 0
    0x18,0x10, // STORE_ATTR 'align'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_utarfile_FileSection___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 4,
    .fun_data = fun_data_upip_utarfile_FileSection___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 24,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 4,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_upip_utarfile_FileSection___init__ + 8,
        .opcodes = fun_data_upip_utarfile_FileSection___init__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip_utarfile_FileSection
// frozen bytecode for file upip_utarfile.py, scope upip_utarfile_FileSection_read
static const byte fun_data_upip_utarfile_FileSection_read[53] = {
    0xaa,0x01,0x06, // prelude
    0x11,0x2a,0x2c, // names: read, self, sz
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x0f, // LOAD_ATTR 'content_len'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x23,0x00, // LOAD_CONST_OBJ 0
    0x63, // RETURN_VALUE
    0xb1, // LOAD_FAST 1
    0xb0, // LOAD_FAST 0
    0x13,0x0f, // LOAD_ATTR 'content_len'
    0xd8, // BINARY_OP 1 __gt__
    0x44,0x44, // POP_JUMP_IF_FALSE 4
    0xb0, // LOAD_FAST 0
    0x13,0x0f, // LOAD_ATTR 'content_len'
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x13,0x0e, // LOAD_ATTR 'f'
    0x14,0x11, // LOAD_METHOD 'read'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0x12,0x2d, // LOAD_GLOBAL 'len'
    0xb2, // LOAD_FAST 2
    0x34,0x01, // CALL_FUNCTION 1
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x57, // DUP_TOP
    0x13,0x0f, // LOAD_ATTR 'content_len'
    0xb1, // LOAD_FAST 1
    0xe6, // BINARY_OP 15 __isub__
    0x5a, // ROT_TWO
    0x18,0x0f, // STORE_ATTR 'content_len'
    0xb2, // LOAD_FAST 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_utarfile_FileSection_read = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_upip_utarfile_FileSection_read,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 53,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 1,
        .qstr_block_name_idx = 17,
        .line_info = fun_data_upip_utarfile_FileSection_read + 6,
        .opcodes = fun_data_upip_utarfile_FileSection_read + 6,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip_utarfile_FileSection
// frozen bytecode for file upip_utarfile.py, scope upip_utarfile_FileSection_readinto
static const byte fun_data_upip_utarfile_FileSection_readinto[58] = {
    0x2a,0x06, // prelude
    0x12,0x2a,0x2e, // names: readinto, self, buf
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x0f, // LOAD_ATTR 'content_len'
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x80, // LOAD_CONST_SMALL_INT 0
    0x63, // RETURN_VALUE
    0x12,0x2d, // LOAD_GLOBAL 'len'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0xb0, // LOAD_FAST 0
    0x13,0x0f, // LOAD_ATTR 'content_len'
    0xd8, // BINARY_OP 1 __gt__
    0x44,0x4d, // POP_JUMP_IF_FALSE 13
    0x12,0x2f, // LOAD_GLOBAL 'memoryview'
    0xb1, // LOAD_FAST 1
    0x34,0x01, // CALL_FUNCTION 1
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x13,0x0f, // LOAD_ATTR 'content_len'
    0x2e,0x02, // BUILD_SLICE 2
    0x55, // LOAD_SUBSCR
    0xc1, // STORE_FAST 1
    0xb0, // LOAD_FAST 0
    0x13,0x0e, // LOAD_ATTR 'f'
    0x14,0x12, // LOAD_METHOD 'readinto'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0xc2, // STORE_FAST 2
    0xb0, // LOAD_FAST 0
    0x57, // DUP_TOP
    0x13,0x0f, // LOAD_ATTR 'content_len'
    0xb2, // LOAD_FAST 2
    0xe6, // BINARY_OP 15 __isub__
    0x5a, // ROT_TWO
    0x18,0x0f, // STORE_ATTR 'content_len'
    0xb2, // LOAD_FAST 2
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_utarfile_FileSection_readinto = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_upip_utarfile_FileSection_readinto,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 58,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 18,
        .line_info = fun_data_upip_utarfile_FileSection_readinto + 5,
        .opcodes = fun_data_upip_utarfile_FileSection_readinto + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip_utarfile_FileSection
// frozen bytecode for file upip_utarfile.py, scope upip_utarfile_FileSection_skip
static const byte fun_data_upip_utarfile_FileSection_skip[49] = {
    0x39,0x04, // prelude
    0x13,0x2a, // names: skip, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x0f, // LOAD_ATTR 'content_len'
    0xb0, // LOAD_FAST 0
    0x13,0x10, // LOAD_ATTR 'align'
    0xf2, // BINARY_OP 27 __add__
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x44,0x60, // POP_JUMP_IF_FALSE 32
    0x12,0x30, // LOAD_GLOBAL 'bytearray'
    0x90, // LOAD_CONST_SMALL_INT 16
    0x34,0x01, // CALL_FUNCTION 1
    0xc2, // STORE_FAST 2
    0x42,0x55, // JUMP 21
    0x12,0x31, // LOAD_GLOBAL 'min'
    0xb1, // LOAD_FAST 1
    0x90, // LOAD_CONST_SMALL_INT 16
    0x34,0x02, // CALL_FUNCTION 2
    0xc3, // STORE_FAST 3
    0xb0, // LOAD_FAST 0
    0x13,0x0e, // LOAD_ATTR 'f'
    0x14,0x12, // LOAD_METHOD 'readinto'
    0xb2, // LOAD_FAST 2
    0xb3, // LOAD_FAST 3
    0x36,0x02, // CALL_METHOD 2
    0x59, // POP_TOP
    0xb1, // LOAD_FAST 1
    0xb3, // LOAD_FAST 3
    0xe6, // BINARY_OP 15 __isub__
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x43,0x28, // POP_JUMP_IF_TRUE -24
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_utarfile_FileSection_skip = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_upip_utarfile_FileSection_skip,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 49,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 8,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 19,
        .line_info = fun_data_upip_utarfile_FileSection_skip + 4,
        .opcodes = fun_data_upip_utarfile_FileSection_skip + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_upip_utarfile_FileSection[] = {
    &raw_code_upip_utarfile_FileSection___init__,
    &raw_code_upip_utarfile_FileSection_read,
    &raw_code_upip_utarfile_FileSection_readinto,
    &raw_code_upip_utarfile_FileSection_skip,
};

static const mp_raw_code_t raw_code_upip_utarfile_FileSection = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_upip_utarfile_FileSection,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 36,
    #endif
    .children = (void *)&children_upip_utarfile_FileSection,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 4,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 9,
        .line_info = fun_data_upip_utarfile_FileSection + 3,
        .opcodes = fun_data_upip_utarfile_FileSection + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip_utarfile__lt_module_gt_
// frozen bytecode for file upip_utarfile.py, scope upip_utarfile_TarInfo
static const byte fun_data_upip_utarfile_TarInfo[17] = {
    0x00,0x02, // prelude
    0x0a, // names: TarInfo
     // code info
    0x11,0x27, // LOAD_NAME '__name__'
    0x16,0x28, // STORE_NAME '__module__'
    0x10,0x0a, // LOAD_CONST_STRING 'TarInfo'
    0x16,0x29, // STORE_NAME '__qualname__'
    0x32,0x00, // MAKE_FUNCTION 0
    0x16,0x14, // STORE_NAME '__str__'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of upip_utarfile_TarInfo
// frozen bytecode for file upip_utarfile.py, scope upip_utarfile_TarInfo___str__
static const byte fun_data_upip_utarfile_TarInfo___str__[19] = {
    0x21,0x04, // prelude
    0x14,0x2a, // names: __str__, self
     // code info
    0x23,0x01, // LOAD_CONST_OBJ 1
    0xb0, // LOAD_FAST 0
    0x13,0x05, // LOAD_ATTR 'name'
    0xb0, // LOAD_FAST 0
    0x13,0x15, // LOAD_ATTR 'type'
    0xb0, // LOAD_FAST 0
    0x13,0x06, // LOAD_ATTR 'size'
    0x2a,0x03, // BUILD_TUPLE 3
    0xf8, // BINARY_OP 33 __mod__
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_utarfile_TarInfo___str__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_upip_utarfile_TarInfo___str__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 19,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 5,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 20,
        .line_info = fun_data_upip_utarfile_TarInfo___str__ + 4,
        .opcodes = fun_data_upip_utarfile_TarInfo___str__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_upip_utarfile_TarInfo[] = {
    &raw_code_upip_utarfile_TarInfo___str__,
};

static const mp_raw_code_t raw_code_upip_utarfile_TarInfo = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_upip_utarfile_TarInfo,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 17,
    #endif
    .children = (void *)&children_upip_utarfile_TarInfo,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 1,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 1,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 10,
        .line_info = fun_data_upip_utarfile_TarInfo + 3,
        .opcodes = fun_data_upip_utarfile_TarInfo + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip_utarfile__lt_module_gt_
// frozen bytecode for file upip_utarfile.py, scope upip_utarfile_TarFile
static const byte fun_data_upip_utarfile_TarFile[38] = {
    0x08,0x02, // prelude
    0x0b, // names: TarFile
     // code info
    0x11,0x27, // LOAD_NAME '__name__'
    0x16,0x28, // STORE_NAME '__module__'
    0x10,0x0b, // LOAD_CONST_STRING 'TarFile'
    0x16,0x29, // STORE_NAME '__qualname__'
    0x51, // LOAD_CONST_NONE
    0x51, // LOAD_CONST_NONE
    0x2a,0x02, // BUILD_TUPLE 2
    0x53, // LOAD_NULL
    0x33,0x00, // MAKE_FUNCTION_DEFARGS 0
    0x16,0x0d, // STORE_NAME '__init__'
    0x32,0x01, // MAKE_FUNCTION 1
    0x16,0x18, // STORE_NAME 'next'
    0x32,0x02, // MAKE_FUNCTION 2
    0x16,0x20, // STORE_NAME '__iter__'
    0x32,0x03, // MAKE_FUNCTION 3
    0x16,0x21, // STORE_NAME '__next__'
    0x32,0x04, // MAKE_FUNCTION 4
    0x16,0x22, // STORE_NAME 'extractfile'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
// child of upip_utarfile_TarFile
// frozen bytecode for file upip_utarfile.py, scope upip_utarfile_TarFile___init__
static const byte fun_data_upip_utarfile_TarFile___init__[33] = {
    0xab,0x80,0x01,0x08, // prelude
    0x0d,0x2a,0x05,0x32, // names: __init__, self, name, fileobj
     // code info
    0xb2, // LOAD_FAST 2
    0x44,0x46, // POP_JUMP_IF_FALSE 6
    0xb2, // LOAD_FAST 2
    0xb0, // LOAD_FAST 0
    0x18,0x0e, // STORE_ATTR 'f'
    0x42,0x4a, // JUMP 10
    0x12,0x33, // LOAD_GLOBAL 'open'
    0xb1, // LOAD_FAST 1
    0x10,0x16, // LOAD_CONST_STRING 'rb'
    0x34,0x02, // CALL_FUNCTION 2
    0xb0, // LOAD_FAST 0
    0x18,0x0e, // STORE_ATTR 'f'
    0x51, // LOAD_CONST_NONE
    0xb0, // LOAD_FAST 0
    0x18,0x17, // STORE_ATTR 'subf'
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_utarfile_TarFile___init__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 3,
    .fun_data = fun_data_upip_utarfile_TarFile___init__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 33,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 6,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 3,
        .n_kwonly_args = 0,
        .n_def_pos_args = 2,
        .qstr_block_name_idx = 13,
        .line_info = fun_data_upip_utarfile_TarFile___init__ + 8,
        .opcodes = fun_data_upip_utarfile_TarFile___init__ + 8,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip_utarfile_TarFile
// frozen bytecode for file upip_utarfile.py, scope upip_utarfile_TarFile_next
static const byte fun_data_upip_utarfile_TarFile_next[149] = {
    0x49,0x04, // prelude
    0x18,0x2a, // names: next, self
     // code info
    0xb0, // LOAD_FAST 0
    0x13,0x17, // LOAD_ATTR 'subf'
    0x44,0x48, // POP_JUMP_IF_FALSE 8
    0xb0, // LOAD_FAST 0
    0x13,0x17, // LOAD_ATTR 'subf'
    0x14,0x13, // LOAD_METHOD 'skip'
    0x36,0x00, // CALL_METHOD 0
    0x59, // POP_TOP
    0xb0, // LOAD_FAST 0
    0x13,0x0e, // LOAD_ATTR 'f'
    0x14,0x11, // LOAD_METHOD 'read'
    0x22,0x84,0x00, // LOAD_CONST_SMALL_INT 512
    0x36,0x01, // CALL_METHOD 1
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x43,0x42, // POP_JUMP_IF_TRUE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x12,0x02, // LOAD_GLOBAL 'uctypes'
    0x14,0x19, // LOAD_METHOD 'struct'
    0x12,0x02, // LOAD_GLOBAL 'uctypes'
    0x14,0x1a, // LOAD_METHOD 'addressof'
    0xb1, // LOAD_FAST 1
    0x36,0x01, // CALL_METHOD 1
    0x12,0x23, // LOAD_GLOBAL 'TAR_HEADER'
    0x12,0x02, // LOAD_GLOBAL 'uctypes'
    0x13,0x1b, // LOAD_ATTR 'LITTLE_ENDIAN'
    0x36,0x03, // CALL_METHOD 3
    0xc2, // STORE_FAST 2
    0xb2, // LOAD_FAST 2
    0x13,0x05, // LOAD_ATTR 'name'
    0x80, // LOAD_CONST_SMALL_INT 0
    0x55, // LOAD_SUBSCR
    0x80, // LOAD_CONST_SMALL_INT 0
    0xd9, // BINARY_OP 2 __eq__
    0x44,0x42, // POP_JUMP_IF_FALSE 2
    0x51, // LOAD_CONST_NONE
    0x63, // RETURN_VALUE
    0x12,0x0a, // LOAD_GLOBAL 'TarInfo'
    0x34,0x00, // CALL_FUNCTION 0
    0xc3, // STORE_FAST 3
    0x12,0x34, // LOAD_GLOBAL 'str'
    0xb2, // LOAD_FAST 2
    0x13,0x05, // LOAD_ATTR 'name'
    0x10,0x1c, // LOAD_CONST_STRING 'utf-8'
    0x34,0x02, // CALL_FUNCTION 2
    0x14,0x1d, // LOAD_METHOD 'rstrip'
    0x10,0x1e, // LOAD_CONST_STRING '\x00'
    0x36,0x01, // CALL_METHOD 1
    0xb3, // LOAD_FAST 3
    0x18,0x05, // STORE_ATTR 'name'
    0x12,0x35, // LOAD_GLOBAL 'int'
    0x12,0x36, // LOAD_GLOBAL 'bytes'
    0xb2, // LOAD_FAST 2
    0x13,0x06, // LOAD_ATTR 'size'
    0x34,0x01, // CALL_FUNCTION 1
    0x88, // LOAD_CONST_SMALL_INT 8
    0x34,0x02, // CALL_FUNCTION 2
    0xb3, // LOAD_FAST 3
    0x18,0x06, // STORE_ATTR 'size'
    0x12,0x25, // LOAD_GLOBAL 'REGTYPE'
    0x12,0x24, // LOAD_GLOBAL 'DIRTYPE'
    0x2b,0x02, // BUILD_LIST 2
    0xb3, // LOAD_FAST 3
    0x13,0x05, // LOAD_ATTR 'name'
    0x7f, // LOAD_CONST_SMALL_INT -1
    0x55, // LOAD_SUBSCR
    0x10,0x1f, // LOAD_CONST_STRING '/'
    0xd9, // BINARY_OP 2 __eq__
    0x55, // LOAD_SUBSCR
    0xb3, // LOAD_FAST 3
    0x18,0x15, // STORE_ATTR 'type'
    0x12,0x09, // LOAD_GLOBAL 'FileSection'
    0xb0, // LOAD_FAST 0
    0x13,0x0e, // LOAD_ATTR 'f'
    0xb3, // LOAD_FAST 3
    0x13,0x06, // LOAD_ATTR 'size'
    0x12,0x0c, // LOAD_GLOBAL 'roundup'
    0xb3, // LOAD_FAST 3
    0x13,0x06, // LOAD_ATTR 'size'
    0x22,0x84,0x00, // LOAD_CONST_SMALL_INT 512
    0x34,0x02, // CALL_FUNCTION 2
    0x34,0x03, // CALL_FUNCTION 3
    0x57, // DUP_TOP
    0xb0, // LOAD_FAST 0
    0x18,0x17, // STORE_ATTR 'subf'
    0xb3, // LOAD_FAST 3
    0x18,0x17, // STORE_ATTR 'subf'
    0xb3, // LOAD_FAST 3
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_utarfile_TarFile_next = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_upip_utarfile_TarFile_next,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 149,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 10,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 24,
        .line_info = fun_data_upip_utarfile_TarFile_next + 4,
        .opcodes = fun_data_upip_utarfile_TarFile_next + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip_utarfile_TarFile
// frozen bytecode for file upip_utarfile.py, scope upip_utarfile_TarFile___iter__
static const byte fun_data_upip_utarfile_TarFile___iter__[6] = {
    0x09,0x04, // prelude
    0x20,0x2a, // names: __iter__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_utarfile_TarFile___iter__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_upip_utarfile_TarFile___iter__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 6,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 32,
        .line_info = fun_data_upip_utarfile_TarFile___iter__ + 4,
        .opcodes = fun_data_upip_utarfile_TarFile___iter__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip_utarfile_TarFile
// frozen bytecode for file upip_utarfile.py, scope upip_utarfile_TarFile___next__
static const byte fun_data_upip_utarfile_TarFile___next__[20] = {
    0x19,0x04, // prelude
    0x21,0x2a, // names: __next__, self
     // code info
    0xb0, // LOAD_FAST 0
    0x14,0x18, // LOAD_METHOD 'next'
    0x36,0x00, // CALL_METHOD 0
    0xc1, // STORE_FAST 1
    0xb1, // LOAD_FAST 1
    0x51, // LOAD_CONST_NONE
    0xde, // BINARY_OP 7 <is>
    0x44,0x43, // POP_JUMP_IF_FALSE 3
    0x12,0x37, // LOAD_GLOBAL 'StopIteration'
    0x65, // RAISE_OBJ
    0xb1, // LOAD_FAST 1
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_utarfile_TarFile___next__ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 1,
    .fun_data = fun_data_upip_utarfile_TarFile___next__,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 20,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 1,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 33,
        .line_info = fun_data_upip_utarfile_TarFile___next__ + 4,
        .opcodes = fun_data_upip_utarfile_TarFile___next__ + 4,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

// child of upip_utarfile_TarFile
// frozen bytecode for file upip_utarfile.py, scope upip_utarfile_TarFile_extractfile
static const byte fun_data_upip_utarfile_TarFile_extractfile[9] = {
    0x12,0x06, // prelude
    0x22,0x2a,0x38, // names: extractfile, self, tarinfo
     // code info
    0xb1, // LOAD_FAST 1
    0x13,0x17, // LOAD_ATTR 'subf'
    0x63, // RETURN_VALUE
};
static const mp_raw_code_t raw_code_upip_utarfile_TarFile_extractfile = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 2,
    .fun_data = fun_data_upip_utarfile_TarFile_extractfile,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 9,
    #endif
    .children = NULL,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 0,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 3,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 2,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 34,
        .line_info = fun_data_upip_utarfile_TarFile_extractfile + 5,
        .opcodes = fun_data_upip_utarfile_TarFile_extractfile + 5,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_upip_utarfile_TarFile[] = {
    &raw_code_upip_utarfile_TarFile___init__,
    &raw_code_upip_utarfile_TarFile_next,
    &raw_code_upip_utarfile_TarFile___iter__,
    &raw_code_upip_utarfile_TarFile___next__,
    &raw_code_upip_utarfile_TarFile_extractfile,
};

static const mp_raw_code_t raw_code_upip_utarfile_TarFile = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_upip_utarfile_TarFile,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 38,
    #endif
    .children = (void *)&children_upip_utarfile_TarFile,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 5,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 2,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 11,
        .line_info = fun_data_upip_utarfile_TarFile + 3,
        .opcodes = fun_data_upip_utarfile_TarFile + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const mp_raw_code_t *const children_upip_utarfile__lt_module_gt_[] = {
    &raw_code_upip_utarfile_roundup,
    &raw_code_upip_utarfile_FileSection,
    &raw_code_upip_utarfile_TarInfo,
    &raw_code_upip_utarfile_TarFile,
};

static const mp_raw_code_t raw_code_upip_utarfile__lt_module_gt_ = {
    .kind = MP_CODE_BYTECODE,
    .scope_flags = 0x00,
    .n_pos_args = 0,
    .fun_data = fun_data_upip_utarfile__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE || MICROPY_DEBUG_PRINTERS
    .fun_data_len = 92,
    #endif
    .children = (void *)&children_upip_utarfile__lt_module_gt_,
    #if MICROPY_PERSISTENT_CODE_SAVE
    .n_children = 4,
    #if MICROPY_PY_SYS_SETTRACE
    .prelude = {
        .n_state = 4,
        .n_exc_stack = 0,
        .scope_flags = 0,
        .n_pos_args = 0,
        .n_kwonly_args = 0,
        .n_def_pos_args = 0,
        .qstr_block_name_idx = 1,
        .line_info = fun_data_upip_utarfile__lt_module_gt_ + 3,
        .opcodes = fun_data_upip_utarfile__lt_module_gt_ + 3,
    },
    .line_of_definition = 0,
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .prelude_offset = 0,
    #endif
    #endif
    #if MICROPY_EMIT_MACHINE_CODE
    .type_sig = 0,
    #endif
};

static const qstr_short_t const_qstr_table_data_upip_utarfile[57] = {
    MP_QSTR_upip_utarfile_dot_py,
    MP_QSTR__lt_module_gt_,
    MP_QSTR_uctypes,
    MP_QSTR_ARRAY,
    MP_QSTR_UINT8,
    MP_QSTR_name,
    MP_QSTR_size,
    MP_QSTR_dir,
    MP_QSTR_file,
    MP_QSTR_FileSection,
    MP_QSTR_TarInfo,
    MP_QSTR_TarFile,
    MP_QSTR_roundup,
    MP_QSTR___init__,
    MP_QSTR_f,
    MP_QSTR_content_len,
    MP_QSTR_align,
    MP_QSTR_read,
    MP_QSTR_readinto,
    MP_QSTR_skip,
    MP_QSTR___str__,
    MP_QSTR_type,
    MP_QSTR_rb,
    MP_QSTR_subf,
    MP_QSTR_next,
    MP_QSTR_struct,
    MP_QSTR_addressof,
    MP_QSTR_LITTLE_ENDIAN,
    MP_QSTR_utf_hyphen_8,
    MP_QSTR_rstrip,
    MP_QSTR__0x00_,
    MP_QSTR__slash_,
    MP_QSTR___iter__,
    MP_QSTR___next__,
    MP_QSTR_extractfile,
    MP_QSTR_TAR_HEADER,
    MP_QSTR_DIRTYPE,
    MP_QSTR_REGTYPE,
    MP_QSTR_val,
    MP_QSTR___name__,
    MP_QSTR___module__,
    MP_QSTR___qualname__,
    MP_QSTR_self,
    MP_QSTR_aligned_len,
    MP_QSTR_sz,
    MP_QSTR_len,
    MP_QSTR_buf,
    MP_QSTR_memoryview,
    MP_QSTR_bytearray,
    MP_QSTR_min,
    MP_QSTR_fileobj,
    MP_QSTR_open,
    MP_QSTR_str,
    MP_QSTR_int,
    MP_QSTR_bytes,
    MP_QSTR_StopIteration,
    MP_QSTR_tarinfo,
};

// constants

// constant table
static const mp_rom_obj_t const_obj_table_data_upip_utarfile[2] = {
    MP_ROM_PTR(&mp_const_empty_bytes_obj),
    MP_ROM_QSTR(MP_QSTR_TarInfo_paren_open__percent_r_comma__space__percent_s_comma__space__percent_d_paren_close_),
};

static const mp_frozen_module_t frozen_module_upip_utarfile = {
    .constants = {
        .qstr_table = (qstr_short_t *)&const_qstr_table_data_upip_utarfile,
        .obj_table = (mp_obj_t *)&const_obj_table_data_upip_utarfile,
    },
    .rc = &raw_code_upip_utarfile__lt_module_gt_,
};

////////////////////////////////////////////////////////////////////////////////
// collection of all frozen modules

const char mp_frozen_names[] = {
    #ifdef MP_FROZEN_STR_NAMES
    MP_FROZEN_STR_NAMES
    #endif
    "upip.py\0"
    "upip_utarfile.py\0"
    "\0"
};

const mp_frozen_module_t *const mp_frozen_mpy_content[] = {
    &frozen_module_upip,
    &frozen_module_upip_utarfile,
};

#ifdef MICROPY_FROZEN_LIST_ITEM
MICROPY_FROZEN_LIST_ITEM("upip", "upip.py")
MICROPY_FROZEN_LIST_ITEM("upip_utarfile", "upip_utarfile.py")
#endif

/*
byte sizes:
qstr content: 89 unique, 1049 bytes
bc content: 2716
const str content: 811
const int content: 0
const obj content: 224
const table qstr content: 0 entries, 0 bytes
const table ptr content: 26 entries, 104 bytes
raw code content: 31 * 4 = 496
mp_frozen_mpy_names_content: 26
mp_frozen_mpy_content_size: 8
total: 5434
*/
