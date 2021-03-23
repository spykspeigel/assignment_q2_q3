# assignment_q2_q3

## To build the project use the following commands.

`mkdir -p build`

`cd build`

`cmake ../ -DCMAKE_BUILD_TYPE=RelWithDebInfo`

`make`

`sudo make install`


##To run the code:

`roscore`
`rosrun mc_rtc_ticker mc_rtc_ticker`
`roslaunch mc_rtc_ticker display.launch`


I have solved assignment 2 and 3 using JSON file. There are two YAML files in etc/ folder. Copy the contents of example.yaml into the other yaml to run the third assignment.
