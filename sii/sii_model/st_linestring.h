#pragma once
#ifndef SII_MODEL_ST_LINESTRING_H
#define SII_MODEL_ST_LINESTRING_H

#include <sii/sii_model/st_point.h>

typedef struct st_linestring st_linestring;

//
st_linestring* st_linestring_init_empty(void);
st_linestring* st_linestring_init(st_point* points[]);
void           st_linestring_destroy(st_linestring** l);
st_linestring* st_linestring_clone(st_linestring* l);

st_point*      st_linestring_start(st_linestring* l);
st_point*      st_linestring_end(st_linestring* l);
st_size_t      st_linestring_size(st_linestring* l);
st_point*      st_linestring_at(st_linestring* l);

#endif // SII_MODEL_ST_LINESTRING_H
