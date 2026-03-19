#ifndef TINYTEST_TINYTEST_H
#define TINYTEST_TINYTEST_H

#ifdef _WIN32
#ifdef TINYTEST_CONFIG_SHARED
#ifdef TINYTEST_CONFIG_BUILDING
#define TINYTEST_PUBLIC_API __declspec(dllexport)
#else
#define TINYTEST_PUBLIC_API __declspec(dllimport)
#endif /* TINYTEST_CONFIG_BUILDING */
#else
#define TINYTEST_PUBLIC_API /* Not needed on Windows static builds (.lib) */
#endif                      /* TINYTEST_CONFIG_SHARED */
#else
#define TINYTEST_PUBLIC_API /* Not needed outside Windows */
#endif                      /* _WIN32 */

TINYTEST_PUBLIC_API extern int tinytest_test_failed;

TINYTEST_PUBLIC_API int tinytest_expect(int cond);

TINYTEST_PUBLIC_API void tinytest_assert(int cond);

#undef TINYTEST_PUBLIC_API

#endif /* TINYTEST_TINYTEST_H */
