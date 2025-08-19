#include <array>
#include <iostream>
#include <string>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/opencv.hpp>

using namespace std;

cv::Mat openImage(string filePath);
array<string,2> getFileType(string filePath);
int saveNewFileFormat(cv::Mat image, string filePath, string newFileType);


int main(int argc, char* argv[]) {

  string filePath = argv[1];
  string newFileType = argv[2];

  cout << "The file path is: " << filePath << endl;
  cout << "The new File type is: " << newFileType << endl;

  array<string,2> pathInfo = getFileType(filePath);

  if (pathInfo[1] != "file type not detected."){

    saveNewFileFormat(openImage(filePath),pathInfo[0],newFileType);

  }
  
  // cout << "Stripped path: " << pathInfo[0] << endl;
  // cout << "Stripped file type: " << pathInfo[1] << endl;

  return 0;
}


// The "openImage" method takes a file path. using openCV the file is opened and displayed. 
cv::Mat openImage(string filePath) {

  cv::Mat image = cv::imread(filePath, cv::IMREAD_COLOR);
  // cv::imshow("Display window", image);
  // cv::waitKey(0);
  return image;
  
}

/* The "saveNewFileFormat" method takes a image file object "MAT", a file path, and a new file extention.
   The method then saves the image in the new format. */
int saveNewFileFormat(cv::Mat image, string filePath, string newFileType){
  
  string newFile = filePath + "." + newFileType; 
  bool success = cv::imwrite(newFile,image);
  if (success){
    cout << "File successfully converted to a " << newFileType << endl;
    return 0;

  }else{
    cout << "File convertion failed" << endl;
    return 1;
  }


}


/* the "getFileType" method take a file path and strips the path from the file type
 example "image.jpg" return an array[0] = "image", array[1] = "jpg"*/
array<string,2> getFileType(string filePath) {

  array<string,2> fileSplit;
  bool extention = false;
  int length = filePath.length();

  if (length > 0){

    for(int i = 0; i < length; i++){

      if(extention){
        fileSplit[1].push_back(filePath[i]);
      }
      if(filePath[i] == '.'){
          extention = true;
      }else if(!extention){
         fileSplit[0].push_back(filePath[i]);
      }
      
    } 

    if(fileSplit[1].length() > 0) {
      return fileSplit;
    }else{
      fileSplit[1].append("file type not detected.");
      return fileSplit;
    }

  }else{
  fileSplit[0].append("no path detected");
  return fileSplit;
  }
}

