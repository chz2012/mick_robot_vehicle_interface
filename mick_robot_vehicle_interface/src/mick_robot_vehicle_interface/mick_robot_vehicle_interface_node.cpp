// Copyright 2024 mick team.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <mick_robot_vehicle_interface/mick_robot_vehicle_interface.hpp>
#include <rclcpp/rclcpp.hpp>

#include <memory>

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    //   CHENG启动自己的interface
    auto node = std::make_shared<MickRobotVehicleInterface>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
