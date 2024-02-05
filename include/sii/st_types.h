#pragma once
#ifndef SII_TYPES_H
#define SII_TYPES_H

#include <stddef.h>

typedef double    st_coord_t;
typedef size_t    st_size_t;
typedef ptrdiff_t st_diff_t;

/* Spatial Coordinate Dimension type */
typedef enum st_dim_t
{
    XY,
    XYZ,
    XYM,
    XYZM
} st_dim_t;

#endif /* SII_TYPES_H */
