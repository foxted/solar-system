//
// Created by Zac G on 14/10/2017.
//

#ifndef SOLAR_SYSTEM_PLANET_RELATIONSHIPS_H
#define SOLAR_SYSTEM_PLANET_RELATIONSHIPS_H

#include <map>

#include "planet.h"

/** class PlanetRelationships
 *
 * Stores a graph containing the relationships
 * between each pair of planets.
 */
class PlanetRelationships {
public:
    std::map<std::pair<Planet*, Planet*>, float> relations;

    PlanetRelationships();

    // Initialise all graph edges to 0
    explicit PlanetRelationships(std::vector<Planet*> planets);

    // Gets the relationship between two planets
    float get(Planet*, Planet*);

    // Sets the relationship between two planets
    void set(Planet*, Planet*, float);

    // Adds a number to the relationship between two planets.
    // Equivalent rel[a, b] += ∂
    void shift(Planet*, Planet*, float delta);
};

#endif //SOLAR_SYSTEM_PLANET_RELATIONSHIPS_H
