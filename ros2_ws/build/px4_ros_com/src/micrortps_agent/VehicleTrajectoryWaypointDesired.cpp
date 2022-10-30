// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

/*!
 * @file VehicleTrajectoryWaypointDesired.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "VehicleTrajectoryWaypointDesired.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>











px4_msgs::msg::VehicleTrajectoryWaypointDesired::VehicleTrajectoryWaypointDesired()
{
    // m_timestamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@41488b16
    m_timestamp = 0;
    // m_type com.eprosima.idl.parser.typecode.PrimitiveTypeCode@a8ef162
    m_type = 0;
    // m_waypoints com.eprosima.idl.parser.typecode.AliasTypeCode@2eea88a1


}

px4_msgs::msg::VehicleTrajectoryWaypointDesired::~VehicleTrajectoryWaypointDesired()
{



}

px4_msgs::msg::VehicleTrajectoryWaypointDesired::VehicleTrajectoryWaypointDesired(const VehicleTrajectoryWaypointDesired &x)
{
    m_timestamp = x.m_timestamp;
    m_type = x.m_type;
    m_waypoints = x.m_waypoints;
}

px4_msgs::msg::VehicleTrajectoryWaypointDesired::VehicleTrajectoryWaypointDesired(VehicleTrajectoryWaypointDesired &&x)
{
    m_timestamp = x.m_timestamp;
    m_type = x.m_type;
    m_waypoints = std::move(x.m_waypoints);
}

px4_msgs::msg::VehicleTrajectoryWaypointDesired& px4_msgs::msg::VehicleTrajectoryWaypointDesired::operator=(const VehicleTrajectoryWaypointDesired &x)
{

    m_timestamp = x.m_timestamp;
    m_type = x.m_type;
    m_waypoints = x.m_waypoints;

    return *this;
}

px4_msgs::msg::VehicleTrajectoryWaypointDesired& px4_msgs::msg::VehicleTrajectoryWaypointDesired::operator=(VehicleTrajectoryWaypointDesired &&x)
{

    m_timestamp = x.m_timestamp;
    m_type = x.m_type;
    m_waypoints = std::move(x.m_waypoints);

    return *this;
}

size_t px4_msgs::msg::VehicleTrajectoryWaypointDesired::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    for(size_t a = 0; a < (5); ++a)
    {
        current_alignment += px4_msgs::msg::px4_msgs__msg__TrajectoryWaypoint::getMaxCdrSerializedSize(current_alignment);}

    return current_alignment - initial_alignment;
}

size_t px4_msgs::msg::VehicleTrajectoryWaypointDesired::getCdrSerializedSize(const px4_msgs::msg::VehicleTrajectoryWaypointDesired& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    for(size_t a = 0; a < data.waypoints().size(); ++a)
    {
            current_alignment += px4_msgs::msg::px4_msgs__msg__TrajectoryWaypoint::getCdrSerializedSize(data.waypoints().at(a), current_alignment);
    }

    return current_alignment - initial_alignment;
}

void px4_msgs::msg::VehicleTrajectoryWaypointDesired::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp;
    scdr << m_type;
    scdr << m_waypoints;

}

void px4_msgs::msg::VehicleTrajectoryWaypointDesired::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp;
    dcdr >> m_type;
    dcdr >> m_waypoints;

}

/*!
 * @brief This function sets a value in member timestamp
 * @param _timestamp New value for member timestamp
 */
void px4_msgs::msg::VehicleTrajectoryWaypointDesired::timestamp(uint64_t _timestamp)
{
m_timestamp = _timestamp;
}

/*!
 * @brief This function returns the value of member timestamp
 * @return Value of member timestamp
 */
uint64_t px4_msgs::msg::VehicleTrajectoryWaypointDesired::timestamp() const
{
    return m_timestamp;
}

/*!
 * @brief This function returns a reference to member timestamp
 * @return Reference to member timestamp
 */
uint64_t& px4_msgs::msg::VehicleTrajectoryWaypointDesired::timestamp()
{
    return m_timestamp;
}

/*!
 * @brief This function sets a value in member type
 * @param _type New value for member type
 */
void px4_msgs::msg::VehicleTrajectoryWaypointDesired::type(uint8_t _type)
{
m_type = _type;
}

/*!
 * @brief This function returns the value of member type
 * @return Value of member type
 */
uint8_t px4_msgs::msg::VehicleTrajectoryWaypointDesired::type() const
{
    return m_type;
}

/*!
 * @brief This function returns a reference to member type
 * @return Reference to member type
 */
uint8_t& px4_msgs::msg::VehicleTrajectoryWaypointDesired::type()
{
    return m_type;
}

/*!
 * @brief This function copies the value in member waypoints
 * @param _waypoints New value to be copied in member waypoints
 */
void px4_msgs::msg::VehicleTrajectoryWaypointDesired::waypoints(const px4_msgs::msg::px4_msgs__msg__TrajectoryWaypoint__5 &_waypoints)
{
m_waypoints = _waypoints;
}

/*!
 * @brief This function moves the value in member waypoints
 * @param _waypoints New value to be moved in member waypoints
 */
void px4_msgs::msg::VehicleTrajectoryWaypointDesired::waypoints(px4_msgs::msg::px4_msgs__msg__TrajectoryWaypoint__5 &&_waypoints)
{
m_waypoints = std::move(_waypoints);
}

/*!
 * @brief This function returns a constant reference to member waypoints
 * @return Constant reference to member waypoints
 */
const px4_msgs::msg::px4_msgs__msg__TrajectoryWaypoint__5& px4_msgs::msg::VehicleTrajectoryWaypointDesired::waypoints() const
{
    return m_waypoints;
}

/*!
 * @brief This function returns a reference to member waypoints
 * @return Reference to member waypoints
 */
px4_msgs::msg::px4_msgs__msg__TrajectoryWaypoint__5& px4_msgs::msg::VehicleTrajectoryWaypointDesired::waypoints()
{
    return m_waypoints;
}

size_t px4_msgs::msg::VehicleTrajectoryWaypointDesired::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;






    return current_align;
}

bool px4_msgs::msg::VehicleTrajectoryWaypointDesired::isKeyDefined()
{
   return false;
}

void px4_msgs::msg::VehicleTrajectoryWaypointDesired::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
}


