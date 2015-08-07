#ifndef RENDERUTIL_H
#define RENDERUTIL_H

#include <string>
#include <GL/gl.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>

namespace DOIT {
	namespace RenderUtil {
		extern bool GLEW_wasInit;
		extern GLuint vao;

		/* Initialize some OpenGL functionality.
		 * That's as specific as I can be. You're welcome.
		 */
		void init();

		/* Clean up.
		 */
		void cleanUp();

		/* Clear everything on the screen.
		 */
		void clearScreen();

		/* Returns the OpenGL version as a string.
		 */
		std::string getOpenGLVersion();
	}
}

#endif //RENDERUTIL_H
