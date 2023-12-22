#ifndef __LAYER_H__
#define __LAYER_H__

#include "neuron.h"
#include <stddef.h>

typedef struct layer_s *layer_t;

size_t layer_ds_size(void);
int layer_dimension(layer_t);
layer_t layer_init(int);
void layer_free(layer_t);

#endif
