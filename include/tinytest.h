#ifndef TINYTEST_TINYTEST_H
#define TINYTEST_TINYTEST_H

#if defined(_WIN32) || defined(__CYGWIN__)
#ifdef TINYTEST_CONFIG_BUILDING
#define TINYTEST_SHARED_API __declspec(dllexport)
#else
#define TINYTEST_SHARED_API __declspec(dllimport)
#endif /* TINYTEST_CONFIG_BUILDING */
#else
#define TINYTEST_SHARED_API /* Not needed on POSIX */
#endif                      /* _WIN32 */

TINYTEST_SHARED_API extern int tinytest_test_failed;

TINYTEST_SHARED_API int tinytest_expect(int cond);

TINYTEST_SHARED_API void tinytest_assert(int cond);

#undef TINYTEST_SHARED_API

#endif /* TINYTEST_TINYTEST_H */
