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
 * @file TrajectorySetpoint.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "TrajectorySetpoint.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


px4_msgs::msg::TrajectorySetpoint::TrajectorySetpoint()
{
    // m_timestamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@700fb871
    m_timestamp = 0;
    // m_position com.eprosima.idl.parser.typecode.AliasTypeCode@3b35a229
    memset(&m_position, 0, (3) * 4);
    // m_velocity com.eprosima.idl.parser.typecode.AliasTypeCode@3b35a229
    memset(&m_velocity, 0, (3) * 4);
    // m_acceleration com.eprosima.idl.parser.typecode.AliasTypeCode@3b35a229
    memset(&m_acceleration, 0, (3) * 4);
    // m_jerk com.eprosima.idl.parser.typecode.AliasTypeCode@3b35a229
    memset(&m_jerk, 0, (3) * 4);
    // m_yaw com.eprosima.idl.parser.typecode.PrimitiveTypeCode@9816741
    m_yaw = 0.0;
    // m_yawspeed com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1e16c0aa
    m_yawspeed = 0.0;

}

px4_msgs::msg::TrajectorySetpoint::~TrajectorySetpoint()
{







}

px4_msgs::msg::TrajectorySetpoint::TrajectorySetpoint(const TrajectorySetpoint &x)
{
    m_timestamp = x.m_timestamp;
    m_position = x.m_position;
    m_velocity = x.m_velocity;
    m_acceleration = x.m_acceleration;
    m_jerk = x.m_jerk;
    m_yaw = x.m_yaw;
    m_yawspeed = x.m_yawspeed;
}

px4_msgs::msg::TrajectorySetpoint::TrajectorySetpoint(TrajectorySetpoint &&x)
{
    m_timestamp = x.m_timestamp;
    m_position = std::move(x.m_position);
    m_velocity = std::move(x.m_velocity);
    m_acceleration = std::move(x.m_acceleration);
    m_jerk = std::move(x.m_jerk);
    m_yaw = x.m_yaw;
    m_yawspeed = x.m_yawspeed;
}

px4_msgs::msg::TrajectorySetpoint& px4_msgs::msg::TrajectorySetpoint::operator=(const TrajectorySetpoint &x)
{

    m_timestamp = x.m_timestamp;
    m_position = x.m_position;
    m_velocity = x.m_velocity;
    m_acceleration = x.m_acceleration;
    m_jerk = x.m_jerk;
    m_yaw = x.m_yaw;
    m_yawspeed = x.m_yawspeed;

    return *this;
}

px4_msgs::msg::TrajectorySetpoint& px4_msgs::msg::TrajectorySetpoint::operator=(TrajectorySetpoint &&x)
{

    m_timestamp = x.m_timestamp;
    m_position = std::move(x.m_position);
    m_velocity = std::move(x.m_velocity);
    m_acceleration = std::move(x.m_acceleration);
    m_jerk = std::move(x.m_jerk);
    m_yaw = x.m_yaw;
    m_yawspeed = x.m_yawspeed;

    return *this;
}

size_t px4_msgs::msg::TrajectorySetpoint::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += ((3) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((3) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((3) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += ((3) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

size_t px4_msgs::msg::TrajectorySetpoint::getCdrSerializedSize(const px4_msgs::msg::TrajectorySetpoint& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    if ((3) > 0)
    {
        current_alignment += ((3) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    if ((3) > 0)
    {
        current_alignment += ((3) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    if ((3) > 0)
    {
        current_alignment += ((3) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    if ((3) > 0)
    {
        current_alignment += ((3) * 4) + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    }

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void px4_msgs::msg::TrajectorySetpoint::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp;
    scdr << m_position;

    scdr << m_velocity;

    scdr << m_acceleration;

    scdr << m_jerk;

    scdr << m_yaw;
    scdr << m_yawspeed;
}

void px4_msgs::msg::TrajectorySetpoint::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp;
    dcdr >> m_position;

    dcdr >> m_velocity;

    dcdr >> m_acceleration;

    dcdr >> m_jerk;

    dcdr >> m_yaw;
    dcdr >> m_yawspeed;
}

/*!
 * @brief This function sets a value in member timestamp
 * @param _timestamp New value for member timestamp
 */
void px4_msgs::msg::TrajectorySetpoint::timestamp(uint64_t _timestamp)
{
m_timestamp = _timestamp;
}

/*!
 * @brief This function returns the value of member timestamp
 * @return Value of member timestamp
 */
uint64_t px4_msgs::msg::TrajectorySetpoint::timestamp() const
{
    return m_timestamp;
}

/*!
 * @brief This function returns a reference to member timestamp
 * @return Reference to member timestamp
 */
uint64_t& px4_msgs::msg::TrajectorySetpoint::timestamp()
{
    return m_timestamp;
}

/*!
 * @brief This function copies the value in member position
 * @param _position New value to be copied in member position
 */
void px4_msgs::msg::TrajectorySetpoint::position(const px4_msgs::msg::float__3 &_position)
{
m_position = _position;
}

/*!
 * @brief This function moves the value in member position
 * @param _position New value to be moved in member position
 */
void px4_msgs::msg::TrajectorySetpoint::position(px4_msgs::msg::float__3 &&_position)
{
m_position = std::move(_position);
}

/*!
 * @brief This function returns a constant reference to member position
 * @return Constant reference to member position
 */
const px4_msgs::msg::float__3& px4_msgs::msg::TrajectorySetpoint::position() const
{
    return m_position;
}

/*!
 * @brief This function returns a reference to member position
 * @return Reference to member position
 */
px4_msgs::msg::float__3& px4_msgs::msg::TrajectorySetpoint::position()
{
    return m_position;
}
/*!
 * @brief This function copies the value in member velocity
 * @param _velocity New value to be copied in member velocity
 */
void px4_msgs::msg::TrajectorySetpoint::velocity(const px4_msgs::msg::float__3 &_velocity)
{
m_velocity = _velocity;
}

/*!
 * @brief This function moves the value in member velocity
 * @param _velocity New value to be moved in member velocity
 */
void px4_msgs::msg::TrajectorySetpoint::velocity(px4_msgs::msg::float__3 &&_velocity)
{
m_velocity = std::move(_velocity);
}

/*!
 * @brief This function returns a constant reference to member velocity
 * @return Constant reference to member velocity
 */
const px4_msgs::msg::float__3& px4_msgs::msg::TrajectorySetpoint::velocity() const
{
    return m_velocity;
}

/*!
 * @brief This function returns a reference to member velocity
 * @return Reference to member velocity
 */
px4_msgs::msg::float__3& px4_msgs::msg::TrajectorySetpoint::velocity()
{
    return m_velocity;
}
/*!
 * @brief This function copies the value in member acceleration
 * @param _acceleration New value to be copied in member acceleration
 */
void px4_msgs::msg::TrajectorySetpoint::acceleration(const px4_msgs::msg::float__3 &_acceleration)
{
m_acceleration = _acceleration;
}

/*!
 * @brief This function moves the value in member acceleration
 * @param _acceleration New value to be moved in member acceleration
 */
void px4_msgs::msg::TrajectorySetpoint::acceleration(px4_msgs::msg::float__3 &&_acceleration)
{
m_acceleration = std::move(_acceleration);
}

/*!
 * @brief This function returns a constant reference to member acceleration
 * @return Constant reference to member acceleration
 */
const px4_msgs::msg::float__3& px4_msgs::msg::TrajectorySetpoint::acceleration() const
{
    return m_acceleration;
}

/*!
 * @brief This function returns a reference to member acceleration
 * @return Reference to member acceleration
 */
px4_msgs::msg::float__3& px4_msgs::msg::TrajectorySetpoint::acceleration()
{
    return m_acceleration;
}
/*!
 * @brief This function copies the value in member jerk
 * @param _jerk New value to be copied in member jerk
 */
void px4_msgs::msg::TrajectorySetpoint::jerk(const px4_msgs::msg::float__3 &_jerk)
{
m_jerk = _jerk;
}

/*!
 * @brief This function moves the value in member jerk
 * @param _jerk New value to be moved in member jerk
 */
void px4_msgs::msg::TrajectorySetpoint::jerk(px4_msgs::msg::float__3 &&_jerk)
{
m_jerk = std::move(_jerk);
}

/*!
 * @brief This function returns a constant reference to member jerk
 * @return Constant reference to member jerk
 */
const px4_msgs::msg::float__3& px4_msgs::msg::TrajectorySetpoint::jerk() const
{
    return m_jerk;
}

/*!
 * @brief This function returns a reference to member jerk
 * @return Reference to member jerk
 */
px4_msgs::msg::float__3& px4_msgs::msg::TrajectorySetpoint::jerk()
{
    return m_jerk;
}
/*!
 * @brief This function sets a value in member yaw
 * @param _yaw New value for member yaw
 */
void px4_msgs::msg::TrajectorySetpoint::yaw(float _yaw)
{
m_yaw = _yaw;
}

/*!
 * @brief This function returns the value of member yaw
 * @return Value of member yaw
 */
float px4_msgs::msg::TrajectorySetpoint::yaw() const
{
    return m_yaw;
}

/*!
 * @brief This function returns a reference to member yaw
 * @return Reference to member yaw
 */
float& px4_msgs::msg::TrajectorySetpoint::yaw()
{
    return m_yaw;
}

/*!
 * @brief This function sets a value in member yawspeed
 * @param _yawspeed New value for member yawspeed
 */
void px4_msgs::msg::TrajectorySetpoint::yawspeed(float _yawspeed)
{
m_yawspeed = _yawspeed;
}

/*!
 * @brief This function returns the value of member yawspeed
 * @return Value of member yawspeed
 */
float px4_msgs::msg::TrajectorySetpoint::yawspeed() const
{
    return m_yawspeed;
}

/*!
 * @brief This function returns a reference to member yawspeed
 * @return Reference to member yawspeed
 */
float& px4_msgs::msg::TrajectorySetpoint::yawspeed()
{
    return m_yawspeed;
}


size_t px4_msgs::msg::TrajectorySetpoint::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;










    return current_align;
}

bool px4_msgs::msg::TrajectorySetpoint::isKeyDefined()
{
   return false;
}

void px4_msgs::msg::TrajectorySetpoint::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
     
     
     
     
}


