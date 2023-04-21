#pragma once
#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include "imgui_impl_opengl3_loader.h"
#include <iostream>

#include <GLFW/glfw3.h>

namespace OwnForm
{
	IMGUI_API void ShowTestForm(bool* p_open = NULL);
}
