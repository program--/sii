#pragma once
#ifndef SII_VECTOR_ST_MULTIPOINT_H
#define SII_VECTOR_ST_MULTIPOINT_H

#include <sii/vector/st_point.h>

typedef struct st_multipoint st_multipoint;

/**/
st_multipoint* st_multipoint_init(st_point* points[], st_size_t count);
void           st_multipoint_destroy(st_multipoint** mp);
st_multipoint* st_multipoint_clone(st_multipoint* mp);
st_point*      st_multipoint_begin(st_multipoint* mp);
st_point*      st_multipoint_end(st_multipoint* mp);
st_size_t      st_multipoint_size(st_multipoint* mp);
st_point*      st_multipoint_at(st_multipoint* mp);

#endif /* SII_VECTOR_ST_MULTIPOINT_H */
