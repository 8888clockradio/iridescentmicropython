#ifndef MICROPYTHON_WRAP_DETAIL_CONFIGURATION_H
#define MICROPYTHON_WRAP_DETAIL_CONFIGURATION_H

//Whether to support C++17 features like std::optional.
//Default is on if the compiler supports it.
#ifndef UPYWRAP_HAS_CPP17
#if ((__cplusplus > 201402L) || (_MSVC_LANG >= 201703L))
#define UPYWRAP_HAS_CPP17 (1)
#else
#define UPYWRAP_HAS_CPP17 (0)
#endif
#endif

//Whether to support C++20 features.
//Default is on if the compiler supports it.
#ifndef UPYWRAP_HAS_CPP20
#if ((__cplusplus >= 202002L) || (_MSVC_LANG >= 202002L))
#define UPYWRAP_HAS_CPP20 (1)
#else
#define UPYWRAP_HAS_CPP20 (0)
#endif
#endif

//Backwards compatibility.
#ifdef UPYWRAP_NOEXCEPTIONS
#undef UPYWRAP_USE_EXCEPTIONS
#define UPYWRAP_USE_EXCEPTIONS (0)
#endif

#ifdef UPYWRAP_NOCHARSTRING
#undef UPYWRAP_USE_CHARSTRING
#define UPYWRAP_USE_CHARSTRING (0)
#endif

//Whether or not to wrap C++ functions in a try/catch block and convert any C++ exceptions
//caught like that into raising a MicroPython exception i.e. using nlr_raise.
#ifndef UPYWRAP_USE_EXCEPTIONS
#define UPYWRAP_USE_EXCEPTIONS (1)
#endif

//Whether to support converspion between const char* and uPy string. Normally allowed,
//but we don't know yet where uPy is going with unicode support etc so make this an option.
#ifndef UPYWRAP_USE_CHARSTRING
#define UPYWRAP_USE_CHARSTRING (1)
#endif

#if UPYWRAP_HAS_CPP17
//Whether to support std::error_code conversion.
//If error_code is zero it is converted to None, otherwise an exception is thrown with the code's message.
#ifndef UPYWRAP_THROW_ERROR_CODE
#define UPYWRAP_THROW_ERROR_CODE (1)
#endif
#endif

//Whether const references can be converted into uPy objects.
//Conversion to a uPy object is normally the case only if it's returned/passed by value
//since that properly mathces the copy semantics: everytime we convert a supported type from
//it's native value into a uPy object we effectively make a distinct copy.
//However for performance reasons we allow const references as well when UPYWRAP_PASSCONSTREF is 1:
//this allows not having to make the extra unused copy of the native argument which is made
//when passing by value.
//Note this does kinda breaks semantics: the uPy object does not reference the native object
//in any way so users have to take care not to use it as such
#ifndef UPYWRAP_PASSCONSTREF
#define UPYWRAP_PASSCONSTREF (1)
#endif

//Whether to use shared_ptr instead of raw pointers for the actual storage of all native types.
//Per default this is on since passing around raw pointers quickly
//leads to undefined behavior when garbage collection comes into play.
//For example, consider this, where X and Y are both created With ClassWrapper,
//and Y::Store() takes an X* or X& and keeps a pointer to it internally:
//
//  y = Y()
//  y.Store( X() )
//  gc.collect()
//
//The last line will get rid of the ClassWrapper instance for the X object
//(since gc can't find a corresponding py object anymore as that was not stored;
//with actual py objects this wouldn't happen), so now y has a pointer to a deleted X.
//The only proper way around is using shared_ptr instead: if ClassWrapper has a
//shared_ptr< X >, Store takes a shared_ptr< X > (which it should do after all
//if it's planning to keep the argument longer then the function scope) and
//we pass a copy of ClassWrapper's object to Store, all is fine: when deleting
//the garbage collected object, shared_ptr's destructor is called but the object
//is not deleted unless there are no references anymore.
#ifndef UPYWRAP_SHAREDPTROBJ
#define UPYWRAP_SHAREDPTROBJ (1)
#endif

//Require exact type matches when converting uPy objects into native ones.
//By default this is on in order to get proper error messages when passing mismatching types.
//However when your application wants to passs pointers to derived classes to functions
//taking base class pointers this has to be turned off.
#ifndef UPYWRAP_FULLTYPECHECK
#define UPYWRAP_FULLTYPECHECK (1)
#endif

#endif
