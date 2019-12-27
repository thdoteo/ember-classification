#ifndef KMEANS_H
#define KMEANS_H

struct kmeans_state
{
    unsigned vect_count;
    unsigned vect_dim;
    unsigned char K;

    unsigned char *assignment;
    float *centroids;
    float *centroids_next;
    unsigned *centroids_count;

    float *upper_bounds;
    float *lower_bounds;
    float *p;
    float *s;
};

double distance(float *vec1, float *vec2, unsigned dim);

void kmeanspp(float *vectors, struct kmeans_state *state);

#endif /* ! KMEANS_H */
