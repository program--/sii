#pragma once
#ifndef SII_ERROR_H
#define SII_ERROR_H

typedef int st_error_t;

/**
 * st_error Enumerators
 *
 * @note Values within [0, ST_ERR_EXTENSION] are SII-reserved.
 *       They should be used by name, and not overwritten.
 *
 * @note Values greater than ST_ERR_EXTENSION are implementation-defined
 *       extended error codes.
 */
typedef enum st_error
{
    ST_ERR_OK,
    ST_ERR_ERROR,
    ST_ERR_NOT_IMPLEMENTED,

    /* Counter */
    ST_ERR_EXTENSION = 100
} st_error;

#endif /* SII_ERROR_H */
