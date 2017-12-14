#ifndef _CVT_H_
#define _CVT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <math.h>

// static char *cvt(double arg, int ndigits, int *decpt, int *sign, char *buf, int eflag);

char *ecvt(double arg, int ndigits, int *decpt, int *sign);

char *ecvtbuf(double arg, int ndigits, int *decpt, int *sign, char *buf);

char *fcvt(double arg, int ndigits, int *decpt, int *sign);

char *fcvtbuf(double arg, int ndigits, int *decpt, int *sign, char *buf);

#ifdef __cplusplus
}
#endif

#endif // _CVT_H_
