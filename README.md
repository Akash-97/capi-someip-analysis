# capi-someip-analysis

This work takes a simple use case, that is, a remote service named "sum" exports "add" as its interface and this interface by a remote client "avg". 

    .-----.                     .-----.
    | avg |--------add()------->| sum |
    '-----'                     '-----'
           \                   /
             \               /
               \
              .--------------.
              |    SOME/IP   |
              '--------------'
              
This information is configured in math.fidl file. And SOME/IP configurations are available in math.fdepl and vsomeip.json under ./project/fidl directory.

*Note: The source code for the above is pre-generated and copied under ./project/src-gen. If you make any changes to fidl or fdepl scripts please follow the steps in https://at.projects.genivi.org/wiki/pages/viewpage.action?pageId=5472316 to re-generate the source files.*


## Steps to build
Make sure you have cloned the repository

### Building CommonAPI-3.1.3
1. cd CommonAPI-3.1.3/
2. mkdir build && cd build
3. cmake ..
4. make
5. cd ../../

### Building CommonAPI-SomeIP-3.1.3
1. cd CommonAPI-SomeIP-3.1.3/
2. mkdir build && cd build
3. cmake ..
4. make
5. cd ../../

### Building vSomeIP-1.3.0
1. cd vSomeIP-1.3.0
2. mkdir build && cd build
3. cmake ..
4. make
5. cd ../../

### Building the main project
1. cd project/
2. mkdir build && cd build
3. cmake ..
4. make


## Steps to Run
1. cp ../fidl/vsomeip.json .
2. From current terminal create a 'new' tab (press 'ctrl+shift+t')
2. Go to first terminal tab and do the following
    export VSOMEIP_CONFIGURATION_FILE=vsomeip.json
    export VSOMEIP_APPLICATION_NAME=service-sample
    ./sum
3. Go to next terminal tab and do the following
    export VSOMEIP_CONFIGURATION_FILE=vsomeip.json
    export VSOMEIP_APPLICATION_NAME=client-sample 
    ./avg
    
Now you will see sum calling avg and get the remote service executed.