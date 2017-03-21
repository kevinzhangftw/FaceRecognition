//
//  EmojiLearner.hpp
//  CvFaceDectection
//
//  Created by Kai Zhang on 2017-03-20.
//  Copyright © 2017 Kai Zhang. All rights reserved.
//

#ifndef EmojiLearner_hpp
#define EmojiLearner_hpp

#include <stdio.h>
#include <iostream>

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/core.hpp"
#include "opencv2/face.hpp"

using namespace cv;
using namespace std;
using namespace cv::face;

class EmojiLearner{
    // holds images and labels
    vector<Mat> images;
    vector<int> labels;
    Ptr<FaceRecognizer> model;
    
public:
    bool learn(Mat face, int emoji);
    
};
#endif /* EmojiLearner_hpp */
