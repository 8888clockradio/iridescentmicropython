# 1 "<stdin>"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 370 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "<stdin>" 2
# 29 "<stdin>"
# 1 "../../py/mpconfig.h" 1
# 62 "../../py/mpconfig.h"
# 1 "./mpconfigport.h" 1
# 1 "./mpconfigport_minimal.h" 1
# 101 "./mpconfigport_minimal.h"
typedef long mp_int_t;
typedef unsigned long mp_uint_t;
# 114 "./mpconfigport_minimal.h"
typedef long mp_off_t;






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/alloca.h" 1 3 4
# 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/alloca.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/cdefs.h" 1 3 4
# 659 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 660 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/cdefs.h" 2 3 4
# 725 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 726 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/cdefs.h" 2 3 4
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/alloca.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_types.h" 1 3 4
# 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/machine/_types.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/machine/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/i386/_types.h" 1 3 4
# 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/machine/_types.h" 2 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types.h" 2 3 4
# 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
# 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_pthread/_pthread_types.h" 3 4
struct __darwin_pthread_handler_rec {
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_cond_t {
 long __sig;
 char __opaque[40];
};

struct _opaque_pthread_condattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_mutex_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_once_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
 long __sig;
 char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
 long __sig;
 char __opaque[16];
};

struct _opaque_pthread_t {
 long __sig;
 struct __darwin_pthread_handler_rec *__cleanup_stack;
 char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types.h" 2 3 4
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_types.h" 2 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/alloca.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX12.sdk/usr/include/alloca.h" 2 3 4


void *alloca(size_t);
# 122 "./mpconfigport_minimal.h" 2
# 2 "./mpconfigport.h" 2
# 63 "../../py/mpconfig.h" 2
# 30 "<stdin>" 2





QCFG(BYTES_IN_LEN, (1))
QCFG(BYTES_IN_HASH, (2))

Q()
Q(*)
Q(_)
Q(/)





Q(%#o)
Q(%#x)




Q({:#b})
Q( )
Q(\n)
Q(maximum recursion depth exceeded)
Q(<module>)
Q(<lambda>)
Q(<listcomp>)
Q(<dictcomp>)
Q(<setcomp>)
Q(<genexpr>)
Q(<string>)
Q(<stdin>)
Q(utf-8)
# 74 "<stdin>"
Q(ArithmeticError)

Q(ArithmeticError)

Q(AssertionError)

Q(AssertionError)

Q(AssertionError)

Q(AttributeError)

Q(AttributeError)

Q(BaseException)

Q(BaseException)

Q(BaseException)

Q(EOFError)

Q(EOFError)

Q(Ellipsis)

Q(Ellipsis)

Q(Exception)

Q(Exception)

Q(GeneratorExit)

Q(GeneratorExit)

Q(ImportError)

Q(ImportError)

Q(IndentationError)

Q(IndentationError)

Q(IndexError)

Q(IndexError)

Q(KeyError)

Q(KeyError)

Q(KeyboardInterrupt)

Q(KeyboardInterrupt)

Q(LookupError)

Q(LookupError)

Q(MemoryError)

Q(MemoryError)

Q(NameError)

Q(NameError)

Q(NoneType)

Q(NotImplementedError)

Q(NotImplementedError)

Q(OSError)

Q(OSError)

Q(OverflowError)

Q(OverflowError)

Q(RuntimeError)

Q(RuntimeError)

Q(StopAsyncIteration)

Q(StopAsyncIteration)

Q(StopAsyncIteration)

Q(StopIteration)

Q(StopIteration)

Q(SyntaxError)

Q(SyntaxError)

Q(SystemExit)

Q(SystemExit)

Q(TypeError)

Q(TypeError)

Q(ValueError)

Q(ValueError)

Q(ZeroDivisionError)

Q(ZeroDivisionError)

Q(_0x0a_)

Q(__add__)

Q(__aenter__)

Q(__aenter__)

Q(__aexit__)

Q(__aexit__)

Q(__aiter__)

Q(__anext__)

Q(__bool__)

Q(__build_class__)

Q(__call__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__contains__)

Q(__delitem__)

Q(__delitem__)

Q(__enter__)

Q(__eq__)

Q(__eq__)

Q(__exit__)

Q(__ge__)

Q(__getattr__)

Q(__getattr__)

Q(__getattr__)

Q(__getattr__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__gt__)

Q(__hash__)

Q(__iadd__)

Q(__import__)

Q(__init__)

Q(__init__)

Q(__int__)

Q(__isub__)

Q(__iter__)

Q(__le__)

Q(__len__)

Q(__lt__)

Q(__main__)

Q(__main__)

Q(__module__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__ne__)

Q(__new__)

Q(__new__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__path__)

Q(__path__)

Q(__path__)

Q(__qualname__)

Q(__repl_print__)

Q(__repl_print__)

Q(__repr__)

Q(__repr__)

Q(__setitem__)

Q(__setitem__)

Q(__str__)

Q(__sub__)

Q(__traceback__)

Q(_brace_open__colon__hash_b_brace_close_)

Q(_lt_dictcomp_gt_)

Q(_lt_dictcomp_gt_)

Q(_lt_genexpr_gt_)

Q(_lt_genexpr_gt_)

Q(_lt_lambda_gt_)

Q(_lt_lambda_gt_)

Q(_lt_listcomp_gt_)

Q(_lt_listcomp_gt_)

Q(_lt_module_gt_)

Q(_lt_module_gt_)

Q(_lt_setcomp_gt_)

Q(_lt_setcomp_gt_)

Q(_lt_stdin_gt_)

Q(_lt_stdin_gt_)

Q(_lt_stdin_gt_)

Q(_lt_string_gt_)

Q(_machine)

Q(_percent__hash_o)

Q(_percent__hash_x)

Q(_space_)

Q(_star_)

Q(_star_)

Q(abs)

Q(all)

Q(any)

Q(append)

Q(args)

Q(argv)

Q(bin)

Q(bool)

Q(bool)

Q(bound_method)

Q(builtins)

Q(builtins)

Q(bytecode)

Q(byteorder)

Q(bytes)

Q(bytes)

Q(callable)

Q(chr)

Q(classmethod)

Q(classmethod)

Q(clear)

Q(clear)

Q(close)

Q(close)

Q(closure)

Q(const)

Q(copy)

Q(copy)

Q(count)

Q(count)

Q(count)

Q(dict)

Q(dict)

Q(dict_view)

Q(dir)

Q(divmod)

Q(end)

Q(endswith)

Q(errno)

Q(eval)

Q(exec)

Q(extend)

Q(find)

Q(format)

Q(from_bytes)

Q(fromkeys)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(generator)

Q(generator)

Q(get)

Q(getattr)

Q(globals)

Q(hasattr)

Q(hash)

Q(heap_lock)

Q(heap_unlock)

Q(hex)

Q(id)

Q(implementation)

Q(index)

Q(index)

Q(index)

Q(insert)

Q(int)

Q(int)

Q(isalpha)

Q(isdigit)

Q(isinstance)

Q(islower)

Q(isspace)

Q(issubclass)

Q(isupper)

Q(items)

Q(iter)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(join)

Q(kbd_intr)

Q(key)

Q(keys)

Q(keys)

Q(len)

Q(list)

Q(list)

Q(little)

Q(little)

Q(little)

Q(locals)

Q(lower)

Q(lstrip)

Q(map)

Q(map)

Q(micropython)

Q(micropython)

Q(micropython)

Q(micropython)

Q(module)

Q(modules)

Q(name)

Q(next)

Q(object)

Q(object)

Q(oct)

Q(opt_level)

Q(ord)

Q(path)

Q(pend_throw)

Q(platform)

Q(pop)

Q(pop)

Q(popitem)

Q(pow)

Q(print)

Q(print_exception)

Q(range)

Q(range)

Q(range)

Q(remove)

Q(replace)

Q(repr)

Q(reverse)

Q(reverse)

Q(rfind)

Q(rindex)

Q(round)

Q(rsplit)

Q(rstrip)

Q(send)

Q(send)

Q(sep)

Q(setattr)

Q(setdefault)

Q(sort)

Q(sorted)

Q(split)

Q(start)

Q(startswith)

Q(staticmethod)

Q(staticmethod)

Q(step)

Q(stop)

Q(str)

Q(str)

Q(strip)

Q(sum)

Q(super)

Q(super)

Q(super)

Q(sys)

Q(sys)

Q(throw)

Q(throw)

Q(to_bytes)

Q(tuple)

Q(tuple)

Q(tuple)

Q(type)

Q(type)

Q(type)

Q(uos)

Q(uos)

Q(update)

Q(upper)

Q(usys)

Q(value)

Q(values)

Q(version)

Q(version)

Q(version_info)

Q(zip)

Q(zip)
