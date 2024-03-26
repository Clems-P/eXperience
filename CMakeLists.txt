cmake_minimum_required(VERSION 3.10)


project(FirstTest  
        VERSION 1.0
        LANGUAGES C)



#if(TARGET_GROUP STREQUAL production)
#    add_subdirectory(src)
#elseif(TARGET_GROUP STREQUAL test)
    include(CTest)
    add_subdirectory(test)
#else()
#    message(FATAL_ERROR "Given TARGET_GROUP unknown")
#endif()