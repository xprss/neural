#include "../include/neuron.h"
#include <stdlib.h>

struct neuron_s {
    int layer_position;
    float (*activation_function)(float);
};

neuron_t neuron_init() {
    neuron_t neuron;

    neuron = (neuron_t) malloc(sizeof(struct neuron_s));

    if(neuron == 0) {
        return 0;
    }

    return neuron;
}

void neuron_free(neuron_t neuron) {
    free(neuron);
}


int neuron_get_layer_position(neuron_t neuron) {
    return neuron->activation_function;
}

float (*neuron_get_activation_function(neuron_t neuron))(float) {
    return neuron->activation_function;
}