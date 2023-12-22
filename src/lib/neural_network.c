#include "../include/neural_network.h"
#include <stdlib.h>

struct neural_network_s
{
    layer_t *layers;
    int layers_count;
};

neural_network_t neural_network_init(int *layers, int count)
{
    int i;
    neural_network_t neural_network;

    neural_network = (neural_network_t)malloc(sizeof(struct neural_network_s));

    if (neural_network == (neural_network_t)(0))
    {
        return (neural_network_t)(0);
    }

    if (count <= 0)
    {
        return (neural_network_t)(0);
    }

    neural_network->layers = (layer_t*)malloc(count * layer_ds_size());

    for (i = 0; i < count; i++)
    {
        neural_network->layers[i] = layer_init(layers[i]);
    }

    neural_network->layers_count = count;

    return neural_network;
}

void neural_network_free(neural_network_t neural_network)
{
    free(neural_network);
}

size_t neural_network_ds_size(void)
{
    return sizeof(struct neural_network_s);
}

layer_t neural_network_get_layer(neural_network_t neural_network, int id)
{
    if (id < 0 || id > neural_network->layers_count - 1)
    {
        return (layer_t)(0);
    }
    return neural_network->layers[id];
}