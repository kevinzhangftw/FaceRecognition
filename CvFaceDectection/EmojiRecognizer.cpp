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

    return emojiClass;
}
