#pragma once

#if defined _WIN32 || defined __CYGWIN__
#  define MyFirstFSMController_DLLIMPORT __declspec(dllimport)
#  define MyFirstFSMController_DLLEXPORT __declspec(dllexport)
#  define MyFirstFSMController_DLLLOCAL
#else
// On Linux, for GCC >= 4, tag symbols using GCC extension.
#  if __GNUC__ >= 4
#    define MyFirstFSMController_DLLIMPORT __attribute__((visibility("default")))
#    define MyFirstFSMController_DLLEXPORT __attribute__((visibility("default")))
#    define MyFirstFSMController_DLLLOCAL __attribute__((visibility("hidden")))
#  else
// Otherwise (GCC < 4 or another compiler is used), export everything.
#    define MyFirstFSMController_DLLIMPORT
#    define MyFirstFSMController_DLLEXPORT
#    define MyFirstFSMController_DLLLOCAL
#  endif // __GNUC__ >= 4
#endif // defined _WIN32 || defined __CYGWIN__

#ifdef MyFirstFSMController_STATIC
// If one is using the library statically, get rid of
// extra information.
#  define MyFirstFSMController_DLLAPI
#  define MyFirstFSMController_LOCAL
#else
// Depending on whether one is building or using the
// library define DLLAPI to import or export.
#  ifdef MyFirstFSMController_EXPORTS
#    define MyFirstFSMController_DLLAPI MyFirstFSMController_DLLEXPORT
#  else
#    define MyFirstFSMController_DLLAPI MyFirstFSMController_DLLIMPORT
#  endif // MyFirstFSMController_EXPORTS
#  define MyFirstFSMController_LOCAL MyFirstFSMController_DLLLOCAL
#endif // MyFirstFSMController_STATIC