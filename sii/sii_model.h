#pragma once
#ifndef SII_MODEL_DEFINITION_H
#define SII_MODEL_DEFINITION_H

/* Vector Data Model ======================================================= */
typedef struct st_point               st_point;
typedef struct st_linestring          st_linestring;
typedef struct st_polygon             st_polygon;
typedef struct st_multipoint          st_multipoint;
typedef struct st_multilinestring     st_multilinestring;
typedef struct st_multipolygon        st_multipolygon;
typedef struct st_geometry_collection st_geometry_collection;
typedef struct st_geometry            st_geometry;

/* Raster Data Model ======================================================= */
typedef struct st_raster   st_raster;
typedef struct st_mdraster st_mdraster;

/* Attribute Data Model ==================================================== */
typedef struct st_attribute st_attribute;

#endif // SII_MODEL_DEFINITION_H
