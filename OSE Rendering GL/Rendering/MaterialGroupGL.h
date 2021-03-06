#pragma once
#include "RenderGroupGL.h"

namespace ose::rendering
{
	struct MaterialGroupGL
	{
		GLuint shader_prog_		{ 0 };

		bool enable_blend_ { false };
		GLenum blend_fac_  { GL_SRC_ALPHA };
		GLenum blend_func_ { GL_ONE_MINUS_SRC_ALPHA };

		std::vector<RenderGroupGL> render_groups_;
	};
}
