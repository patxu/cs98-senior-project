#include <vector>

#define DllExport   __declspec(	 dllexport )

extern "C" {
	DllExport int* classifyImage(const char* classifierPath, unsigned char* data, int height, int width);
	DllExport void cleanupBBArray();
	DllExport int* findProjectorBox(unsigned char* redData, unsigned char* greenData, unsigned char* blueData, int imageWidth, int imageHeight);
}