#pragma once
#ifndef SII_VECTOR_ST_POINT_H
#define SII_VECTOR_ST_POINT_H

#include <sii/st_types.h>
#include <sii/st_error.h>

/* Spatial Point type */
typedef struct st_point st_point;

/**/
st_point* st_point_init_xy(st_coord_t x, st_coord_t y);
st_point* st_point_init_xyz(st_coord_t x, st_coord_t y, st_coord_t z);
st_point* st_point_init_xym(st_coord_t x, st_coord_t y, st_coord_t m);
st_point* st_point_init_xyzm(st_coord_t x, st_coord_t y, st_coord_t z, st_coord_t m);
void      st_point_destroy(st_point** p);
st_point* st_point_clone(st_point* p);

#endif /* SII_VECTOR_ST_POINT_H */
