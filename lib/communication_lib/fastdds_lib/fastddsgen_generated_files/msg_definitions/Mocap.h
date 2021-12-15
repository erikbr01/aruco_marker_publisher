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
 * @file Mocap.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _IDL_MSG_MOCAP_H_
#define _IDL_MSG_MOCAP_H_

#include "Header.h"
#include "Pose.h"

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(Mocap_SOURCE)
#define Mocap_DllAPI __declspec( dllexport )
#else
#define Mocap_DllAPI __declspec( dllimport )
#endif // Mocap_SOURCE
#else
#define Mocap_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define Mocap_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace idl_msg {
    /*!
     * @brief This class represents the structure Mocap defined by the user in the IDL file.
     * @ingroup MOCAP
     */
    class Mocap
    {
    public:

        /*!
         * @brief Default constructor.
         */
        eProsima_user_DllExport Mocap();

        /*!
         * @brief Default destructor.
         */
        eProsima_user_DllExport ~Mocap();

        /*!
         * @brief Copy constructor.
         * @param x Reference to the object idl_msg::Mocap that will be copied.
         */
        eProsima_user_DllExport Mocap(
                const Mocap& x);

        /*!
         * @brief Move constructor.
         * @param x Reference to the object idl_msg::Mocap that will be copied.
         */
        eProsima_user_DllExport Mocap(
                Mocap&& x);

        /*!
         * @brief Copy assignment.
         * @param x Reference to the object idl_msg::Mocap that will be copied.
         */
        eProsima_user_DllExport Mocap& operator =(
                const Mocap& x);

        /*!
         * @brief Move assignment.
         * @param x Reference to the object idl_msg::Mocap that will be copied.
         */
        eProsima_user_DllExport Mocap& operator =(
                Mocap&& x);

        /*!
         * @brief This function copies the value in member header
         * @param _header New value to be copied in member header
         */
        eProsima_user_DllExport void header(
                const idl_msg::Header& _header);

        /*!
         * @brief This function moves the value in member header
         * @param _header New value to be moved in member header
         */
        eProsima_user_DllExport void header(
                idl_msg::Header&& _header);

        /*!
         * @brief This function returns a constant reference to member header
         * @return Constant reference to member header
         */
        eProsima_user_DllExport const idl_msg::Header& header() const;

        /*!
         * @brief This function returns a reference to member header
         * @return Reference to member header
         */
        eProsima_user_DllExport idl_msg::Header& header();
        /*!
         * @brief This function copies the value in member pose
         * @param _pose New value to be copied in member pose
         */
        eProsima_user_DllExport void pose(
                const idl_msg::Pose& _pose);

        /*!
         * @brief This function moves the value in member pose
         * @param _pose New value to be moved in member pose
         */
        eProsima_user_DllExport void pose(
                idl_msg::Pose&& _pose);

        /*!
         * @brief This function returns a constant reference to member pose
         * @return Constant reference to member pose
         */
        eProsima_user_DllExport const idl_msg::Pose& pose() const;

        /*!
         * @brief This function returns a reference to member pose
         * @return Reference to member pose
         */
        eProsima_user_DllExport idl_msg::Pose& pose();
        /*!
         * @brief This function sets a value in member latency
         * @param _latency New value for member latency
         */
        eProsima_user_DllExport void latency(
                float _latency);

        /*!
         * @brief This function returns the value of member latency
         * @return Value of member latency
         */
        eProsima_user_DllExport float latency() const;

        /*!
         * @brief This function returns a reference to member latency
         * @return Reference to member latency
         */
        eProsima_user_DllExport float& latency();


        /*!
         * @brief This function returns the maximum serialized size of an object
         * depending on the buffer alignment.
         * @param current_alignment Buffer alignment.
         * @return Maximum serialized size.
         */
        eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                size_t current_alignment = 0);

        /*!
         * @brief This function returns the serialized size of a data depending on the buffer alignment.
         * @param data Data which is calculated its serialized size.
         * @param current_alignment Buffer alignment.
         * @return Serialized size.
         */
        eProsima_user_DllExport static size_t getCdrSerializedSize(
                const idl_msg::Mocap& data,
                size_t current_alignment = 0);


        /*!
         * @brief This function serializes an object using CDR serialization.
         * @param cdr CDR serialization object.
         */
        eProsima_user_DllExport void serialize(
                eprosima::fastcdr::Cdr& cdr) const;

        /*!
         * @brief This function deserializes an object using CDR serialization.
         * @param cdr CDR serialization object.
         */
        eProsima_user_DllExport void deserialize(
                eprosima::fastcdr::Cdr& cdr);



        /*!
         * @brief This function returns the maximum serialized size of the Key of an object
         * depending on the buffer alignment.
         * @param current_alignment Buffer alignment.
         * @return Maximum serialized size.
         */
        eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                size_t current_alignment = 0);

        /*!
         * @brief This function tells you if the Key has been defined for this type
         */
        eProsima_user_DllExport static bool isKeyDefined();

        /*!
         * @brief This function serializes the key members of an object using CDR serialization.
         * @param cdr CDR serialization object.
         */
        eProsima_user_DllExport void serializeKey(
                eprosima::fastcdr::Cdr& cdr) const;

    private:

        idl_msg::Header m_header;
        idl_msg::Pose m_pose;
        float m_latency;
    };
} // namespace idl_msg

#endif // _IDL_MSG_MOCAP_H_