#pragma once
#ifndef SII_VECTOR_ST_POLYGON_H
#define SII_VECTOR_ST_POLYGON_H

#include <sii/vector/st_ring.h>

/* Spatial Polygon type */
typedef struct st_polygon st_polygon;

/**/
st_polygon* st_polygon_init(st_ring* rings[], st_size_t count);
void        st_polygon_destroy(st_polygon** p);
st_polygon* st_polygon_clone(st_polygon* p);
st_ring*    st_polygon_begin(st_polygon* p);
st_ring*    st_polygon_end(st_polygon* p);
st_size_t   st_polygon_size(st_polygon* p);
st_ring*    st_polygon_at(st_polygon* p);

#endif /* SII_VECTOR_ST_POLYGON_H */
