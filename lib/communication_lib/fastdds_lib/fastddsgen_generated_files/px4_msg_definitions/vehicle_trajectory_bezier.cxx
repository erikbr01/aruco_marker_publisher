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
 * @file vehicle_trajectory_bezier.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "vehicle_trajectory_bezier.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>









vehicle_trajectory_bezier::vehicle_trajectory_bezier()
{
    // m_timestamp_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@445b295b
    m_timestamp_ = 0;
    // m_control_points com.eprosima.idl.parser.typecode.AliasTypeCode@49e5f737

    // m_bezier_order_ com.eprosima.idl.parser.typecode.PrimitiveTypeCode@5c671d7f
    m_bezier_order_ = 0;

}

vehicle_trajectory_bezier::~vehicle_trajectory_bezier()
{



}

vehicle_trajectory_bezier::vehicle_trajectory_bezier(
        const vehicle_trajectory_bezier& x)
{
    m_timestamp_ = x.m_timestamp_;
    m_control_points = x.m_control_points;
    m_bezier_order_ = x.m_bezier_order_;
}

vehicle_trajectory_bezier::vehicle_trajectory_bezier(
        vehicle_trajectory_bezier&& x)
{
    m_timestamp_ = x.m_timestamp_;
    m_control_points = std::move(x.m_control_points);
    m_bezier_order_ = x.m_bezier_order_;
}

vehicle_trajectory_bezier& vehicle_trajectory_bezier::operator =(
        const vehicle_trajectory_bezier& x)
{

    m_timestamp_ = x.m_timestamp_;
    m_control_points = x.m_control_points;
    m_bezier_order_ = x.m_bezier_order_;

    return *this;
}

vehicle_trajectory_bezier& vehicle_trajectory_bezier::operator =(
        vehicle_trajectory_bezier&& x)
{

    m_timestamp_ = x.m_timestamp_;
    m_control_points = std::move(x.m_control_points);
    m_bezier_order_ = x.m_bezier_order_;

    return *this;
}

size_t vehicle_trajectory_bezier::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    for(size_t a = 0; a < (5); ++a)
    {
        current_alignment += trajectory_bezier::getMaxCdrSerializedSize(current_alignment);}
    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t vehicle_trajectory_bezier::getCdrSerializedSize(
        const vehicle_trajectory_bezier& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    for(size_t a = 0; a < data.control_points().size(); ++a)
    {
            current_alignment += trajectory_bezier::getCdrSerializedSize(data.control_points().at(a), current_alignment);
    }
    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void vehicle_trajectory_bezier::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_timestamp_;
    scdr << m_control_points;

    scdr << m_bezier_order_;

}

void vehicle_trajectory_bezier::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_timestamp_;
    dcdr >> m_control_points;

    dcdr >> m_bezier_order_;
}

/*!
 * @brief This function sets a value in member timestamp_
 * @param _timestamp_ New value for member timestamp_
 */
void vehicle_trajectory_bezier::timestamp_(
        uint64_t _timestamp_)
{
    m_timestamp_ = _timestamp_;
}

/*!
 * @brief This function returns the value of member timestamp_
 * @return Value of member timestamp_
 */
uint64_t vehicle_trajectory_bezier::timestamp_() const
{
    return m_timestamp_;
}

/*!
 * @brief This function returns a reference to member timestamp_
 * @return Reference to member timestamp_
 */
uint64_t& vehicle_trajectory_bezier::timestamp_()
{
    return m_timestamp_;
}

/*!
 * @brief This function copies the value in member control_points
 * @param _control_points New value to be copied in member control_points
 */
void vehicle_trajectory_bezier::control_points(
        const vehicle_trajectory_bezier__trajectory_bezier_array_5& _control_points)
{
    m_control_points = _control_points;
}

/*!
 * @brief This function moves the value in member control_points
 * @param _control_points New value to be moved in member control_points
 */
void vehicle_trajectory_bezier::control_points(
        vehicle_trajectory_bezier__trajectory_bezier_array_5&& _control_points)
{
    m_control_points = std::move(_control_points);
}

/*!
 * @brief This function returns a constant reference to member control_points
 * @return Constant reference to member control_points
 */
const vehicle_trajectory_bezier__trajectory_bezier_array_5& vehicle_trajectory_bezier::control_points() const
{
    return m_control_points;
}

/*!
 * @brief This function returns a reference to member control_points
 * @return Reference to member control_points
 */
vehicle_trajectory_bezier__trajectory_bezier_array_5& vehicle_trajectory_bezier::control_points()
{
    return m_control_points;
}
/*!
 * @brief This function sets a value in member bezier_order_
 * @param _bezier_order_ New value for member bezier_order_
 */
void vehicle_trajectory_bezier::bezier_order_(
        uint8_t _bezier_order_)
{
    m_bezier_order_ = _bezier_order_;
}

/*!
 * @brief This function returns the value of member bezier_order_
 * @return Value of member bezier_order_
 */
uint8_t vehicle_trajectory_bezier::bezier_order_() const
{
    return m_bezier_order_;
}

/*!
 * @brief This function returns a reference to member bezier_order_
 * @return Reference to member bezier_order_
 */
uint8_t& vehicle_trajectory_bezier::bezier_order_()
{
    return m_bezier_order_;
}


size_t vehicle_trajectory_bezier::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;






    return current_align;
}

bool vehicle_trajectory_bezier::isKeyDefined()
{
    return false;
}

void vehicle_trajectory_bezier::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
       
}
