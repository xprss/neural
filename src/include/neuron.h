#ifndef __NEURON_H__
#define __NEURON_H__

#include "function.h"
#include <stddef.h>

typedef struct neuron_s *neuron_t;

neuron_t neuron_init();
void neuron_free(neuron_t);
int neuron_get_layer_position(neuron_t);
float (*neuron_get_activation_function(neuron_t))(float);
size_t neuron_ds_size(void);

#endif
