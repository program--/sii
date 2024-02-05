#pragma once
#ifndef SII_VECTOR_ST_MULTILINESTRING_H
#define SII_VECTOR_ST_MULTILINESTRING_H

#include <sii/vector/st_linestring.h>

typedef struct st_multilinestring st_multilinestring;

/**/
st_multilinestring* st_multilinestring_init(st_linestring* lines[], st_size_t count);
void                st_multilinestring_destroy(st_multilinestring** ml);
st_multilinestring* st_multilinestring_clone(st_multilinestring* ml);
st_linestring*      st_multilinestring_begin(st_multilinestring* ml);
st_linestring*      st_multilinestring_end(st_multilinestring* ml);
st_size_t           st_multilinestring_size(st_multilinestring* ml);
st_linestring*      st_multilinestring_at(st_multilinestring* ml);

#endif /* SII_VECTOR_ST_MULTILINESTRING_H */
