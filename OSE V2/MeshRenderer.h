#pragma once
#include "stdafx.h"
#include "Component.h"

struct MeshRenderer : public Component
{
	//shader reference ?
	//pointer to material data ?

	//allocate rendering engine data
	MeshRenderer(const std::string & name) : Component(name) {}

	//de-allocate rendering engine data
	virtual ~MeshRenderer() {}

	//copy constructor
	MeshRenderer(const MeshRenderer & other) noexcept : Component(other) {}

	//copy assignment constructor
	MeshRenderer & operator=(const MeshRenderer & other) noexcept
	{
		Component::operator=(other);
		return *this;
	}

	//move constructor
	MeshRenderer(const MeshRenderer && other) noexcept : Component(other) {}

	//move assignment constructor
	MeshRenderer & operator=(const MeshRenderer && other) noexcept
	{
		Component::operator=(other);
		return *this;
	}

	//clone method which can be overwritten by base classes
	virtual std::unique_ptr<Component> clone() const
	{
		return std::make_unique<MeshRenderer>(*this);
	}
};
