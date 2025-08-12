# Unit Test:
Unit test is a piece of code that test fucntion or class(in C++) by applying input and evaluate with actual output by calling the function or the class file.

(or)

Unit test is a software testing method where individual units or components of a software applications.

The goal of unit testing is to validate that each unit of the software performs as expected.

Advantages:
1. Helps to understand off code is working as expected or not.
2. Provides proper documentation.
3. Helps detect bugs early.
4. Improves the code value. 

Test Framework:
1. Provides Assertions, Checks and Matchers.
2. Helps organixing the code
3. Provides report
4. Automates the execution

eg: Google Test and Mock, Unity, Catch2, DOctest, Boost.Test

# Unity

Download Unity Framework Source Code:

sudo apt update
sudo apt install git
git clone https://github.com/ThrowTheSwitch/Unity.git

copy the 3 files from the source code directory to the directory where you want to implement automation

setup: executes before running each testcase.
teardown: exectues after running each testcase


Assertion:
1. TEST_ASSER_EQUAL(expected, actual)