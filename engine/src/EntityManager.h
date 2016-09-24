/*
 * EntityManager.h
 *
 *  Created on: Sep 23, 2016
 *      Author: eric
 */

#ifndef SRC_ENTITYMANAGER_H_
#define SRC_ENTITYMANAGER_H_
#include <vector>
#include "Entity.h"
#include "Component.h"
class EntityManager {
public:
	EntityManager(int numberOfEntities);
	virtual ~EntityManager();
	void addEntity(Entity entity);
	void removeEntity(Entity entity);
	Entity getEntity(uint uuid);

private:
	std::vector<Entity> entities;
};

#endif /* SRC_ENTITYMANAGER_H_ */
