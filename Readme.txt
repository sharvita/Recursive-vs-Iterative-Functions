******************************************************
*  Name      : Sharvita Paithankar         
*  Student ID:      108172438           
*  Class     :  CSC 2312          
*  HW#       :  4                
*  Due Date  :  13 October,2017 
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

his assignment will have you read information in from 
various files, perform exception handling when reading 
those files, and create a base class and derived classes 
with virtual functions to read the various files, perform 
some computations on the inputs as described below, and 
print the file details. 
*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that calls sub-functions
   to read data from an input file, use the data to create three grids,
   and compute and display their sum and product.

Name:  Animal.h
   Contains the definition for the class Grid.  

Name: Animal.cpp
   Defines and implements the Animal class .
   This class provides routines to construct for each 
animal and provides example of inhertance and 
virtual functions.

   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.  
   
   The program was developed and tested on gnu g++ 4.4.2.  It was 
   compiled, run, and tested on putty


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [PaithankarHW4]

   Now you should see a directory named homework with the files:
        main.cpp
        Animal.h
        Animal.cpp
        makefile
        Readme.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [PaithankarHW4]

    Compile the program by:
    % make

3. Run the program by:
   % ./[PaithankarHW4]

4. Delete the obj files, executables, and core dump by
   %./make clean
