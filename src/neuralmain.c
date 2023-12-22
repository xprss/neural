#include <stdio.h>
#include "include/neural_network.h"

int main(int argc, char const *argv[])
{
    neural_network_t nn;
    int layers[] = {18,2,3};
    int count = 3;
    int i;

    nn = neural_network_init(layers, count);
    
    for (i = 0; i < count; i++)
    {
        printf("Layer %d - Size: %d\n", i, layer_dimension(get_layer(nn, i)));
    }

    return 0;
}
