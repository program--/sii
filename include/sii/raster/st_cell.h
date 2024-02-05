#pragma once
#ifndef SII_RASTER_ST_CELL_H
#define SII_RASTER_ST_CELL_H

#include <sii/st_types.h>

typedef struct st_cell st_cell;

/**/
st_size_t st_cell_x(st_cell* cell);
st_size_t st_cell_y(st_cell* cell);
double    st_cell_get(st_cell* cell);
void      st_cell_set(st_cell* cell, double value);

#endif /* SII_RASTER_ST_CELL_H */
