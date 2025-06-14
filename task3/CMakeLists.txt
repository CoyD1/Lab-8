cmake_minimum_required(VERSION 3.10)
project(Task3)


find_package(OpenCV REQUIRED)
find_package(OpenSSL REQUIRED)

add_executable(Task3 main.cpp func3.cpp)

# Указываем компилятору где искать заголовки
target_include_directories(Task3 PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${OpenCV_INCLUDE_DIRS}
    ${OPENSSL_INCLUDE_DIR}
    
)

# Связываем с библиотеками OpenCV
target_link_libraries(Task3 PRIVATE 
    ${OpenCV_LIBS}
    ${OPENSSL_CRYPTO_LIBRARY}
)