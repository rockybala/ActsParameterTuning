#include <iostream>
#include <vector>

#include "ActsTuning/TunableParameters.hpp"

using namespace std;
void TunableParameters::extract(){

  for(int i = 0; i < num_params; i++){

    std::cout << m_params[i] << std::endl;
    std::cout << min_params[i] << std::endl;
    std::cout << max_params[i] << std::endl;
  }


}
