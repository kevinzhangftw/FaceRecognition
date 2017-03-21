//
//  EmojiLearner.cpp
//  CvFaceDectection
//
//  Created by Kai Zhang on 2017-03-20.
//  Copyright © 2017 Kai Zhang. All rights reserved.
//

#include "EmojiLearner.hpp"

bool EmojiLearner::learn(Mat face, uchar emoji){
    bool learning;
    Mat grayFace;
    cvtColor(face, grayFace, CV_BGR2GRAY);
    //load set of images to be trained
    images.push_back(grayFace);
    labels.push_back(emoji);
    
    Ptr<FaceRecognizer> model =  createLBPHFaceRecognizer();
    model->train(images, labels);
    
    model->save("EmojiModel");
    
    return learning;
}
