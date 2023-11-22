#pragma once
#ifndef SII_MODEL_ST_POINT_H
#define SII_MODEL_ST_POINT_H

#include <sii/st_types.h>
#include <sii/st_error.h>

// Spatial Point type
typedef struct st_point st_point;

// Spatial Coordinate Dimension type
typedef enum st_dim_t
{
    XY,
    XYZ,
    XYM,
    XYZM
} st_dim_t;

//
st_point*   st_point_init_empty(void);
st_point*   st_point_init_xy(st_coord_t x, st_coord_t y);
st_point*   st_point_init_xyz(st_coord_t x, st_coord_t y, st_coord_t z);
st_point*   st_point_init_xym(st_coord_t x, st_coord_t y, st_coord_t m);
st_point*   st_point_init_xyzm(st_coord_t x, st_coord_t y, st_coord_t z, st_coord_t m);
void        st_point_destroy(st_point** p);
st_point*   st_point_clone(st_point* p);

st_coord_t* st_point_x(st_point* p);
st_coord_t* st_point_y(st_point* p);
st_coord_t* st_point_z(st_point* p);
st_coord_t* st_point_m(st_point* p);

st_point*   st_point_coord_cast(st_point* p, st_dim_t dim);

#endif // SII_MODEL_ST_POINT_H
