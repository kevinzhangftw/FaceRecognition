//
//  main.cpp
//  CvFaceDectection
//
//  Created by Kai Zhang on 2017-03-15.
//  Copyright © 2017 Kai Zhang. All rights reserved.
//

#include <iostream>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <unistd.h>
#include "EmojiLearner.hpp"
#include "EmojiRecognizer.hpp"

using namespace std;
using namespace cv;

int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout<< "CV_VERSION: " << CV_VERSION << endl;
//    char * dir = getcwd(NULL, 0); // Platform-dependent, see reference link below
//    printf("Current dir: %s", dir);
//
    EmojiLearner emojiLearner = EmojiLearner();
    EmojiRecognizer emojiRecognizer = EmojiRecognizer();
    
    Mat face = imread("kzface.jpg", 1);
    Mat face2 = imread("kzface2.jpg", 1);
    Mat soulcastLogo = imread("soulcastLogo.png", 1);
    Mat commonroom = imread("commonroom.jpg", 1);

    
    int emojiClass = 1;
    int notEmojiClass = 0;
//    emojiLearner.learn(face, emojiClass);
//    emojiLearner.learn(soulcastLogo, notEmojiClass);
//    emojiLearner.learn(commonroom, notEmojiClass);
//    
    int kzfaceis = emojiRecognizer.recognize(face);
    int soulcastLogois = emojiRecognizer.recognize(soulcastLogo);
    int kzface2is = emojiRecognizer.recognize(face2);
    int commonroomis = emojiRecognizer.recognize(commonroom);
    
    cout << "kzface class is "<< kzfaceis << endl;
    cout << "soulcastlogo class is "<< soulcastLogois << endl;
    cout << "kzface2 class is "<< kzface2is << endl;
    cout << "commonroom class is "<< commonroomis << endl;
//    imshow("source", face);
//    waitKey(0);
//    
    
    return 0;
}
