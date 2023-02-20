#include "block.h"
#include <cmath>
#include <iostream>

int Block::height() const {
  /* your code here */
  return data.size();
}

int Block::width() const {
  return data[0].size();
} 

 /**
   * Renders the given block onto img with its upper
   * left corner at (x, 0). Assumes block fits on the 
   * image.
   */
void Block::render(PNG &im, int x) const {

  for (int col=0;col<height();col++){
    for (int row=x;row<width()+x;row++){

      *im.getPixel(row,col) = data[row-x][col];
      
    }
  }
  
}

/** 
   * Creates a block that is width X img.height pixels in size
   * by copying the pixels from (x, 0) to (x+width-1, img.height-1)
   * in img. Assumes img is large enough to supply these pixels.
   */
void Block::build(PNG &im, int x, int width) {

  for (unsigned int j = 0; j<im.height(); j++){
    vector<HSLAPixel> v;
    for (int i =x; i<width+x; i++){
      //HSLAPixel* pixel = im.getPixel(i,j);
      v.push_back(*im.getPixel(i,j));
    }
    data.push_back(v);
  }
}

