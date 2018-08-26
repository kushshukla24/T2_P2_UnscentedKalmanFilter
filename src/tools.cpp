#include <iostream>
#include "tools.h"

using Eigen::VectorXd;
using Eigen::MatrixXd;
using std::vector;

Tools::Tools() {}

Tools::~Tools() {}

VectorXd Tools::CalculateRMSE(const vector<VectorXd> &estimations,
                              const vector<VectorXd> &ground_truth) {
  /**
  TODO:
    * Calculate the RMSE here.
  */
  if(estimations.size()==0 || estimations.size()!=ground_truth.size()) {
    cout<<"ERROR: You have either no estimations or the \
          number of estimations do not match the number of truth values available!"<<endl;
    return VectorXd(4);
  }

  unsigned nbEstimations = estimations.size();
  VectorXd rmse(4);
  for(unsigned i = 0; i<nbEstimations;++i) {
    VectorXd residuals = estimations[i] - ground_truth[i];
    residuals = residuals.array() * residuals.array();
    rmse += residuals;
  }

  rmse /= nbEstimations;
  rmse = rmse.array().sqrt();
  
  return rmse;
}