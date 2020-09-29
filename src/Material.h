#pragma once
#include "sceneStructs.h"
#include <device_launch_parameters.h>
#include <cuda.h>
#include "glm/glm.hpp"
#include "glm/gtx/norm.hpp"
#include <thrust/execution_policy.h>
#include <thrust/random.h>
#include <thrust/remove.h>
#include "intersections.h"
#include "interactions.h"


__host__ __device__ thrust::default_random_engine makeSeededRandomEngine(int iter, int index, int depth);


__global__ void shadeFakeMaterial(
    int iter
    , int num_paths
    , ShadeableIntersection* shadeableIntersections
    , PathSegment* pathSegments
    , Material* materials
);