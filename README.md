# CV_Project_VIRTUAL_RULER

Abstract:

The objective of this project is to develop an application which finds the original size of an object in a room. The input given to the application is a pair of stereo images. To achieve accurate and correct dimensions of the object various algorithms are implemented over the input data set to reduce error margin to the minimal.

Motivation:

The advancement and research being carried out in the field of computer vision has given an opportunity to find easier and simpler ways to carry out daily chores such as making an appointment, adding reminders and measuring things. With mobile phone being one of the most important things in a person’s life, we expect it to perform many of our regular needs. The old-school method of using a scale or ruler to measure the size of objects requires an additional device to fulfil the need. As an alternative to the existing technique we’re planning to 

Installation:

1- Install CMAKE: 
    
   Download OpenCV 3.0 from:  http://opencv.org/downloads.html
   
   Download opencv_contrib zip from: https://github.com/itseez/opencv_contrib
   
   Download Cmake from: http://www.cmake.org/files/v2.8/cmake-2.8.11.2-win32-x86.exe  (You can download the latest version of cmake if you’re using recent versions of VS)
   
   Extract OpenCV 3.0 
   
   Extract opencv_contrib. Choose ccalib, contrib_world, stereo modules.
   

2- Buiding & Compiling:
  
   http://audhootchavancv.blogspot.in/2015/08/how-to-install-opencv-30-and.html
   
   NOTE: Since the number of steps are too lengthy, i've attached a link to make the document more readable.
   
3- Creating a System Variable
    
   Variable name: OPENCV_BUILD
  
   Value: C:\opencv3\build
   
   Path: C:\opencv3\build\install\x86\vc11\bin
   
4- Configuration to test a sample project

 Open Visual Studio and create a Console Application
 
Right click on the file and click properties

Choose Configuration Manager and add x64 platform if your system is x64 (only if your system is x64)

At configuration field, choose all configurations

At Configuration Properties -> C/C++ -> Additional Include Directories, add opencv include folders

Additional Include Directories:

C:\opencv3\build\install\include

C:\opencv3\build\install\include\opencv

C:\opencv3\build\install\include\opencv2
    
    
Tools & Libraries REQUIRED:

OpenCV 3.2
Microsoft Visual Studio 2015
Matlab [for Camera Calibration]


How to RUN?

We've hardcoded the input path's to stereo images. This can be changed by opening the file ConsoleApplication1.cpp.

Under main() method, 

   ---Left image Path into variabel left_file_name;
   
   ---Right image Path into variabel right_file_name;
   
   
Build the solution ( Ctrl+Shift+B)

Run the solution by clicking F5

