#include <kiss_icp/pipeline/KissICP.hpp>

int main() {
  kiss_icp::pipeline::KISSConfig config{};
  config.voxel_size = 2.0;
  kiss_icp::pipeline::KissICP kiss_icp{config};
  return 0;
}