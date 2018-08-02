/// \file       SRenderData.hpp
/// \date       02/08/2018
/// \project    OOM-Engine
/// \package    Render/Shader
/// \author     Vincent STEHLY--CALISTO

#ifndef OOM_ENGINE_S_RENDER_DATA_HPP__
#define OOM_ENGINE_S_RENDER_DATA_HPP__

#include <GLM/glm.hpp>

namespace Oom
{

struct SRenderData
{
    const glm::mat4& MVP;
    const glm::mat4& M;
    const glm::mat4& V;
    const glm::mat4& P;
};

}

#endif // !OOM_ENGINE_S_RENDER_DATA_HPP__