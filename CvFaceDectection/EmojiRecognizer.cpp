//
//  EmojiRecognizer.cpp
//  CvFaceDectection
//
//  Created by Kai Zhang on 2017-03-20.
//  Copyright © 2017 Kai Zhang. All rights reserved.
//

#include "EmojiRecognizer.hpp"

uchar EmojiRecognizer::recognize(Mat face){
    uchar emojiClass;
    Mat grayFace;
    cvtColor(face, grayFace, CV_BGR2GRAY);
    
    //init a model
    Ptr<FaceRecognizer> model =  createLBPHFaceRecognizer();
    //load XML data
    model->load("EmojiModel");
    
    int predicted_label = model->predict(grayFace);
    emojiClass = (uchar) predicted_label;
    

    return emojiClass;
}
