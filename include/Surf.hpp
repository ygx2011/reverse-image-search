#pragma once
#ifndef REVERSE_IMAGE_SEARCH_SURF_H
#define REVERSE_IMAGE_SEARCH_SURF_H
#include <vector>
#include <opencv2/features2d.hpp>
#include <opencv2/xfeatures2d.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

std::vector<cv::KeyPoint> get_key_points(cv::Mat &input_image);

cv::Mat get_single_feature_vector(cv::Mat &image, std::vector<cv::KeyPoint> &key_points);

std::vector<cv::Mat> get_multiple_feature_vectors(std::vector<std::string> &file_names);

cv::Mat ConcatenateDescriptors(std::vector<cv::Mat> &descriptors);
#endif //REVERSE_IMAGE_SEARCH_SURF_H
