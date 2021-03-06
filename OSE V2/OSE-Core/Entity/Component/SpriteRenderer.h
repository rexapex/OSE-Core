#pragma once
#include "OSE-Core/Types.h"
#include "Component.h"

namespace ose
{
	class Texture;
	class Material;

	// Renders a 2D texture at the entities transform
	class SpriteRenderer : public Component
	{
	// Declare SpriteRenderer as an OSE Component
	COMPONENT(SpriteRenderer, Component)

	private:
	
		// A sprite renderer is composed of a 2D texture and a material
		// NOTE - these pointer are owned and managed by the resource manager
		Texture const * texture_	{ nullptr };
		Material const * material_	{ nullptr };

	public:

		// Set the texture displayed by the sprite renderer
		void SetTexture(Texture const * texture) { texture_ = texture; }

		// Get the texture displayed by the sprite renderer
		Texture const * GetTexture() const { return texture_; }

		// Set the material used to shade the sprite
		void SetMaterial(Material const * material) { material_ = material; }

		// Get the material used to shade the sprite
		Material const * GetMaterial() const { return material_; }

		// Initialise the sprite renderer
		SpriteRenderer(std::string const & name, Texture const * t, Material const * m) : Component(name), texture_(t), material_(m) {}

		// Does nothing
		virtual ~SpriteRenderer() noexcept {}

		// Default copy/move constructors
		SpriteRenderer(SpriteRenderer const & other) noexcept = default;
		SpriteRenderer(SpriteRenderer && other) noexcept = default;

		SpriteRenderer & operator=(SpriteRenderer &) noexcept = delete;
		SpriteRenderer & operator=(SpriteRenderer &&) noexcept = delete;
	};
}
