#ifndef AlgorithmEstimation_hpp
#define AlgorithmEstimation_hpp

#include "CollectedStatistics.hpp"
#include "FeatureAlgorithm.hpp"
#include "ImageTransformation.hpp"

const float T_MAX = 20.0;
const float T_STEP = 0.4;

bool computeMatchesDistanceStatistics(const Matches& matches, float& meanDistance, float& stdDev);

void ratioTest(const std::vector<Matches>& knMatches, float maxRatio, Matches& goodMatches);

bool performEstimation(const FeatureAlgorithm& alg,
                       const ImageTransformation& transformation,
                       const cv::Mat& sourceImage,
                       const Keypoints& sourceKp,
                       const Descriptors& sourceDesc,
                       SingleRunStatistics& stat);


#endif