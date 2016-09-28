/*
 * World.h
 *
 *  Created on: Sep 27, 2016
 *      Author: eric
 */

#ifndef INCLUDE_WORLD_H_
#define INCLUDE_WORLD_H_

#include <Components.h>
#include <Entity.h>
#include <System.h>
#include <vector>

class World{
public:
	World(){};
	~World(){};

	// Entity Functions
	void initEntities(int maxEntities);
	void createEntity();

	// Component Functions
	void initComponents(int numberOfComponents);


	// Entity vectors and variables
	std::vector<Entity> entities;
	std::vector<Entity> removedEntities;
	Entity highestAvailableEntity = 0;

	// Component vectors
	std::vector<struct PlanetComponet> planets;
	std::vector<struct SunComponent> suns;
	std::vector<struct CityComponent> cities;
	std::vector<struct BuildingComponent> buildings;
};



#endif /* INCLUDE_WORLD_H_ */
