/*
 * EntityManager.cpp
 *
 *  Created on: Sep 23, 2016
 *      Author: eric
 */

#include "EntityManager.h"

EntityManager::EntityManager(int numberOfEntities) {
	entities.reserve(numberOfEntities);
}

EntityManager::~EntityManager() {
	// TODO Auto-generated destructor stub
}

void EntityManager::addEntity(Entity entity) {
}

void EntityManager::removeEntity(Entity entity) {
}

Entity EntityManager::getEntity(uint uuid) {
}
