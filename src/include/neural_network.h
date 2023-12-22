#ifndef __NEURAL_NETWORK_H__
#define __NEURAL_NETWORK_H__

#include "layer.h"

typedef struct neural_network_s *neural_network_t;

neural_network_t neural_network_init(int *, int);
void neural_network_free(neural_network_t);
size_t neural_network_ds_size(void);
layer_t neural_network_get_layer(neural_network_t, int);

#endif
