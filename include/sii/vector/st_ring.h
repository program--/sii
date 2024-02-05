#pragma once
#ifndef SII_VECTOR_ST_RING_H
#define SII_VECTOR_ST_RING_H

#include <sii/vector/st_point.h>

typedef struct st_ring st_ring;

/**/
st_ring*  st_ring_init_empty(void);
st_ring*  st_ring_init(st_point* points[], st_size_t count);
void      st_ring_destroy(st_ring** r);
st_ring*  st_ring_clone(st_ring* r);
st_point* st_ring_begin(st_ring* r);
st_point* st_ring_end(st_ring* r);
st_size_t st_ring_size(st_ring* r);
st_point* st_ring_at(st_ring* r);

#endif /* SII_VECTOR_ST_RING_H */
