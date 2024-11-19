#include <iostream>
#include <fmt/core.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

GLFWwindow* createWindow() {
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);

	GLFWwindow* window = glfwCreateWindow(800, 600, "test window", NULL, NULL);
	return window;
}

void destroyWindow(GLFWwindow* window) {
	glfwDestroyWindow(window);
	glfwTerminate();
}

int main()
{
	std::cout << "hi c" << std::endl;
	fmt::print("hi fmt\n");

	glm::vec3 vec{ 1.0f };
	fmt::print("hi glm ({}, {}, {})\n", vec.x, vec.y, vec.z);

	auto window = createWindow();

	glfwMakeContextCurrent(window);
	while (!glfwWindowShouldClose(window))
	{
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	destroyWindow(window);
}
