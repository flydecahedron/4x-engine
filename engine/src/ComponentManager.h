/*
 * ComponentManager.h
 *
 *  Created on: Sep 23, 2016
 *      Author: eric
 */

#ifndef SRC_COMPONENTMANAGER_H_
#define SRC_COMPONENTMANAGER_H_

#include "Component.h"
#include <map>

class ComponentManager {
public:
	ComponentManager();
	virtual ~ComponentManager();
	void addComponent(Component component);
	void removeComponent(Component component);
	void addFamily();
	void removeFamily();

private:
	std::map<Component> components;
};

#endif /* SRC_COMPONENTMANAGER_H_ */
