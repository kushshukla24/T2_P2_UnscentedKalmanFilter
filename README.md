# Unscented Kalman Filter Project
This repository contains the C++ source code for Udacity Self Driving Car Nanodegree Term 2 Project 2

## Project Description
This code implements the unscented Kalman filter in C++. We are providing simulated lidar and radar measurements detecting a car that travels around your vehicle. We have used a Unscented Kalman filter, lidar measurements and radar measurements to track the bicycle's position and velocity.

## Dependencies
- cmake >= 3.5
All OSes: click here for installation instructions
- make >= 4.1
Linux: make is installed by default on most Linux distros
Mac: install Xcode command line tools to get make
Windows: Click here for installation instructions
- gcc/g++ >= 5.4
Linux: gcc / g++ is installed by default on most Linux distros
Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
Windows: recommend using MinGW

## Basic Build Instructions
- Clone this repo.
- Make a build directory: mkdir build && cd build
- Compile: cmake .. && make
On windows, you may need to run: cmake .. -G "Unix Makefiles" && make
- Run it: ./UnscentedKF path/to/input.txt path/to/output.txt. You can find some sample inputs in 'data/'.
eg. ./UnscentedKF ../data/sample-laser-radar-measurement-data-1.txt output.txt
