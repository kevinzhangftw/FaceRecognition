//
//  EmojiRecognizer.hpp
//  CvFaceDectection
//
//  Created by Kai Zhang on 2017-03-20.
//  Copyright © 2017 Kai Zhang. All rights reserved.
//

#ifndef EmojiRecognizer_hpp
#define EmojiRecognizer_hpp

#include <stdio.h>
#include <iostream>

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core.hpp"
#include "opencv2/face.hpp"

using namespace cv;
using namespace cv::face;

class EmojiRecognizer{
    
public:
    uchar recognize(Mat face);
    
};
#endif /* EmojiRecognizer_hpp */
