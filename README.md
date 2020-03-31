# Description
I am currently building a Go bot. I am planning on using RL to train it. It is in the works!

# Results

# Details
Describe the graphics - describe the openGL implementation

Describe the zobrist hashing to check for Ko

Describe the tree search 

Describe the RL components 

Describe the data visualizations

# How to Run my Code
Unfortuantely, Tensorflow 2 no longer supports CMake. They have moved onto Bazel. So, I opted not to use CMake and instead compile my code using the following
```export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib```
```g++ main.cpp -o gl -lGL -lGLU -lglut -ltensorflow```
