#include <iostream>
#include <fstream>
#include <openssl/sha.h>      
#include <opencv2/opencv.hpp> 

std::string calculate(const cv::Mat image)
{
    unsigned char h[SHA256_DIGEST_LENGTH];
    SHA256(image.data, image.total() * image.elemSize(), h);
    std::string res;
    const char *hex = "0123456789abcdef";
    for (int i = 0; i < SHA256_DIGEST_LENGTH; ++i)
    {
        unsigned char byte = h[i];
        res += hex[(byte >> 4) & 0xF];
        res += hex[byte & 0xF];
    }
    return res;
}