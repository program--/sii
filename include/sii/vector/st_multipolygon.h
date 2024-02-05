#pragma once
#ifndef SII_VECTOR_ST_MULTIPOLYGON_H
#define SII_VECTOR_ST_MULTIPOLYGON_H

#include <sii/vector/st_polygon.h>

typedef struct st_multipolygon st_multipolygon;

/**/
st_multipolygon* st_multipolygon_init(st_polygon* polygons[], st_size_t count);
void             st_multipolygon_destroy(st_multipolygon** mp);
st_multipolygon* st_multipolygon_clone(st_multipolygon* mp);
st_polygon*      st_multipolygon_begin(st_multipolygon* mp);
st_polygon*      st_multipolygon_end(st_multipolygon* mp);
st_size_t        st_multipolygon_size(st_multipolygon* mp);
st_polygon*      st_multipolygon_at(st_multipolygon* mp);

#endif /* SII_VECTOR_ST_MULTIPOLYGON_H */
