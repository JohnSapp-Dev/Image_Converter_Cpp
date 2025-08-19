
# Image Converter

I found myself using online tools to quikly convert image file formats from one to another. I decided to build a simple Command-Line Interface (CLI) tool to do this for me. 


## Demo

![me](https://github.com/JohnSapp-Dev/Image_Converter_Cpp/blob/main/gif/Image_convert_GIF.gif)


## Authors

- [John Sapp Git](https://github.com/JohnSapp-Dev)
- [John Sapp Linked in](https://www.linkedin.com/in/johnsapp150/)


## Acknowledgements

 - [OpenCV](https://opencv.org/)


## Tech Stack

**CLI:** C++, Cmake, OpenCV

**Editer:** VS Code

## Overview

This program is written in C++ in an effort to better understand the language. The results can be achieved using a scripting language such as Python. 

This program runs in the terminal/CLI and uses command-line arguments to pass information into the program. 

The program uses OpenCV for image loading (read) and image saving (write) operations.

### How to run the program
- Navigate to the location where the exe is located 
- Type: (Program name) Image_conver.exe
- Followed by: (Current image path with image file name and file type) C:\folder\image.jpg
- Followed by: (desired image format) png
- Press enter and watch the program run. 

Example: Image_conver.exe C:\folder\image.jpg png

This will create a copy of the image at the image path that has been converted to the desired image file format.

### Support
The converter supports the following image formats

- OpenEXR
- Radiance HDR
- JPEG 2000
- JPEG XL
- PAM
- PNG
- PGM/PPM
- TIFF
- GIF 
