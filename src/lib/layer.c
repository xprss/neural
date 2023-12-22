#include "../include/layer.h"
#include <stdlib.h>

struct layer_s
{
    int dimension;
    float **weights;
    neuron_t *neurons;
    int node_in;
    int node_out;
};

size_t layer_ds_size(void) {
    return sizeof(struct layer_s);
}

layer_t layer_init(int neurons)
{
    layer_t layer;

    layer = (layer_t)malloc(sizeof(struct layer_s));

    if (layer == 0)
    {
        return 0;
    }

    layer->dimension = neurons;

    return layer;
}

void layer_free(layer_t layer)
{
    free(layer);
}

int layer_dimension(layer_t layer) {
    return layer->dimension;
}