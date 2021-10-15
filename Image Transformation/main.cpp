#include "ImageTransform.h"
#include "uiuc/PNG.h"

int main() {
  uiuc::PNG png, png2, result;

  png.readFromFile("F:/Programming/C++/Image Transformationalma.png");
  result = grayscale(png);
  result.writeToFile("F:/Programming/C++/Image Transformationout-grayscale.png");
  
  result = createSpotlight(png, 450, 150);
  result.writeToFile("F:/Programming/C++/Image Transformationout-spotlight.png");
  
  result = illinify(png);
  result.writeToFile("F:/Programming/C++/Image Transformationout-illinify.png");
  
  png2.readFromFile("F:/Programming/C++/Image Transformationoverlay.png");
  result = watermark(png, png2);
  result.writeToFile("F:/Programming/C++/Image Transformationout-watermark.png");
  
  return 0;
}
