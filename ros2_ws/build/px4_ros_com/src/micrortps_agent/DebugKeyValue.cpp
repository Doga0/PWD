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
 * @file DebugKeyValue.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "DebugKeyValue.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


px4_msgs::msg::DebugKeyValue::DebugKeyValue()
{
    // m_timestamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@78e4deb0
    m_timestamp = 0;
    // m_key com.eprosima.idl.parser.typecode.AliasTypeCode@6e9175d8
    memset(&m_key, 0, (10) * 1);
    // m_value com.eprosima.idl.parser.typecode.PrimitiveTypeCode@7d0b7e3c
    m_value = 0.0;

}

px4_msgs::msg::DebugKeyValue::~DebugKeyValue()
{



}

px4_msgs::msg::DebugKeyValue::DebugKeyValue(const DebugKeyValue &x)
{
    m_timestamp = x.m_timestamp;
    m_key = x.m_key;
    m_value = x.m_value;
}

px4_msgs::msg::DebugKeyValue::DebugKeyValue(DebugKeyValue &&x)
{
    m_timestamp = x.m_timestamp;
    m_key = std::move(x.m_key);
    m_value = x.m_value;
}

px4_msgs::msg::DebugKeyValue& px4_msgs::msg::DebugKeyValue::operator=(const DebugKeyValue &x)
{

    m_timestamp = x.m_timestamp;
    m_key = x.m_key;
    m_value = x.m_value;

    return *this;
}

px4_msgs::msg::DebugKeyValue& px4_msgs::msg::DebugKeyValue::operator=(DebugKeyValue &&x)
{

    m_timestamp = x.m_timestamp;
    m_key = std::move(x.m_key);
    m_value = x.m_value;

    return *this;
}

size_t px4_msgs::msg::DebugKeyValue::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += ((10) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

size_t px4_msgs::msg::DebugKeyValue::getCdrSerializedSize(const px4_msgs::msg::DebugKeyValue& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    if ((10) > 0)
    {
        current_alignment += ((10) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void px4_msgs::msg::DebugKeyValue::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_timestamp;
    scdr << m_key;

    scdr << m_value;
}

void px4_msgs::msg::DebugKeyValue::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_timestamp;
    dcdr >> m_key;

    dcdr >> m_value;
}

/*!
 * @brief This function sets a value in member timestamp
 * @param _timestamp New value for member timestamp
 */
void px4_msgs::msg::DebugKeyValue::timestamp(uint64_t _timestamp)
{
m_timestamp = _timestamp;
}

/*!
 * @brief This function returns the value of member timestamp
 * @return Value of member timestamp
 */
uint64_t px4_msgs::msg::DebugKeyValue::timestamp() const
{
    return m_timestamp;
}

/*!
 * @brief This function returns a reference to member timestamp
 * @return Reference to member timestamp
 */
uint64_t& px4_msgs::msg::DebugKeyValue::timestamp()
{
    return m_timestamp;
}

/*!
 * @brief This function copies the value in member key
 * @param _key New value to be copied in member key
 */
void px4_msgs::msg::DebugKeyValue::key(const px4_msgs::msg::uint8__10 &_key)
{
m_key = _key;
}

/*!
 * @brief This function moves the value in member key
 * @param _key New value to be moved in member key
 */
void px4_msgs::msg::DebugKeyValue::key(px4_msgs::msg::uint8__10 &&_key)
{
m_key = std::move(_key);
}

/*!
 * @brief This function returns a constant reference to member key
 * @return Constant reference to member key
 */
const px4_msgs::msg::uint8__10& px4_msgs::msg::DebugKeyValue::key() const
{
    return m_key;
}

/*!
 * @brief This function returns a reference to member key
 * @return Reference to member key
 */
px4_msgs::msg::uint8__10& px4_msgs::msg::DebugKeyValue::key()
{
    return m_key;
}
/*!
 * @brief This function sets a value in member value
 * @param _value New value for member value
 */
void px4_msgs::msg::DebugKeyValue::value(float _value)
{
m_value = _value;
}

/*!
 * @brief This function returns the value of member value
 * @return Value of member value
 */
float px4_msgs::msg::DebugKeyValue::value() const
{
    return m_value;
}

/*!
 * @brief This function returns a reference to member value
 * @return Reference to member value
 */
float& px4_msgs::msg::DebugKeyValue::value()
{
    return m_value;
}


size_t px4_msgs::msg::DebugKeyValue::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;






    return current_align;
}

bool px4_msgs::msg::DebugKeyValue::isKeyDefined()
{
   return false;
}

void px4_msgs::msg::DebugKeyValue::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
}

