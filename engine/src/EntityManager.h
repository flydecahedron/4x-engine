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
	EntityManager();
	virtual ~EntityManager();
	void initEntities(int numberOfEntities);
	void addEntity(Entity entity);
	void removeEntity(Entity entity);


private:
	std::vector<Entity> entities;
};

#endif /* SRC_ENTITYMANAGER_H_ */
