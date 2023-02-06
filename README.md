# MockTools
Tooling to mock modules for low level tests.

Include the `CMakeLists.txt` using `add_subdirectory` and create a test calling:
```cmake
make_test(
        MODULE_UNDER_TEST your_tested_file.c
        TEST_DEFINITION your_test_definition.cpp
        REQUIRED_HEADERS
            first_dependency_for_mock.h
            second_dependency_for_mock.h
)
```

This will create the following target:
 * `first_dependency_for_mock.mock`, `second_dependecy_for_mock.h`: Library which creates the mocked functions for 
    this module, is added as automatic dependency for test
 * `your_tested_file.test`: Test executable
 * `your_tested_file.test.run`: Target which will execute the test
 * `RunAllTests`: Target which will execute all tests
