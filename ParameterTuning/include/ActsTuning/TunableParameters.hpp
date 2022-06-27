#include <vector>

#pragma once

//template <class T>
class TunableParameters{

public:

  TunableParameters(int nparams, std::vector<float> params, std::vector<float> paramsMin, std::vector<float> paramsMax){
    num_params = nparams;
    m_params = params;
    min_params = paramsMin;
    max_params = paramsMax;
  }

  void extract();


private:
  int num_params;
  std::vector<float> m_params;
  std::vector<float> min_params;
  std::vector<float> max_params;





};
