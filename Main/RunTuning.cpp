#include <iostream>
#include <vector>

#include "ActsTuning/TunableParameters.hpp"

using namespace std;
int main()
{

  std::vector<float> list_of_params = {2.3, 5.6, 7.8};
  std::vector<float> min_of_params = {2.1, 5.2, 7.2};
  std::vector<float> max_of_params = {2.5, 5.9, 7.9};

  TunableParameters tunable(3, list_of_params, min_of_params, max_of_params);
  tunable.extract();

  /*
  std::cout << tunable.m_params.size() << std::endl;
  for(int i = 0; i < tunable.m_params.size(); i++){
    std::cout << tunable.m_params[i] << std::endl;
  }

  std::cout << tunable.min_params.size() << std::endl;
  for(int i = 0; i < tunable.min_params.size(); i++){
    std::cout << tunable.min_params[i] << std::endl;
  }

  std::cout << tunable.max_params.size() << std::endl;
  for(int i = 0; i < tunable.max_params.size(); i++){
    std::cout << tunable.max_params[i] << std::endl;
  }
  */


}
