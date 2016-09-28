/*
 * Components.h
 *
 *  Created on: Sep 27, 2016
 *      Author: eric
 */

#ifndef INCLUDE_COMPONENTS_H_
#define INCLUDE_COMPONENTS_H_

#include <Entity.h>
#include <string>
#include <array>

struct SunComponent{
	Entity entity;
	std::string type;
	std::string name;
	uint8_t chanceOfHabitablePlanet;
};

struct PlanetComponent{
	Entity entity;
	Entity sun;
	std::string type;
	std::string name;
	uint32_t population;
	uint8_t owner = 0;
	uint8_t maxPopulation;
	uint8_t populationBonus;
	uint8_t foodBonus;
	uint8_t industryBonus;
	uint8_t moneyBonus;
	uint8_t scienceBonus;
};

struct CityComponent{
	Entity entity;
	Entity planet;
	std::string type;
	std::string name;
	uint8_t owner = 0;
	uint32_t population;
};

struct BuildingComponent{
	Entity entity;
	Entity city;
	std::string type;
	uint8_t owner = 0;
	uint32_t workers;
};
#endif /* INCLUDE_COMPONENTS_H_ */
