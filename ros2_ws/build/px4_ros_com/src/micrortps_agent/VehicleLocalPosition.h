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
 * @file VehicleLocalPosition.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _PX4_MSGS_MSG_VEHICLELOCALPOSITION_H_
#define _PX4_MSGS_MSG_VEHICLELOCALPOSITION_H_

// TODO Poner en el contexto.

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
#endif
#else
#define eProsima_user_DllExport
#endif

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(VehicleLocalPosition_SOURCE)
#define VehicleLocalPosition_DllAPI __declspec( dllexport )
#else
#define VehicleLocalPosition_DllAPI __declspec( dllimport )
#endif // VehicleLocalPosition_SOURCE
#else
#define VehicleLocalPosition_DllAPI
#endif
#else
#define VehicleLocalPosition_DllAPI
#endif // _WIN32

namespace eprosima
{
    namespace fastcdr
    {
        class Cdr;
    }
}


namespace px4_msgs
{
    namespace msg
    {
        typedef std::array<float, 2> float__2;
        namespace VehicleLocalPosition_Constants
        {
            const uint8_t DIST_BOTTOM_SENSOR_NONE = 0;
            const uint8_t DIST_BOTTOM_SENSOR_RANGE = 1;
            const uint8_t DIST_BOTTOM_SENSOR_FLOW = 2;
        }
        /*!
         * @brief This class represents the structure VehicleLocalPosition defined by the user in the IDL file.
         * @ingroup VEHICLELOCALPOSITION
         */
        class VehicleLocalPosition
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport VehicleLocalPosition();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~VehicleLocalPosition();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object px4_msgs::msg::VehicleLocalPosition that will be copied.
             */
            eProsima_user_DllExport VehicleLocalPosition(const VehicleLocalPosition &x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object px4_msgs::msg::VehicleLocalPosition that will be copied.
             */
            eProsima_user_DllExport VehicleLocalPosition(VehicleLocalPosition &&x);

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object px4_msgs::msg::VehicleLocalPosition that will be copied.
             */
            eProsima_user_DllExport VehicleLocalPosition& operator=(const VehicleLocalPosition &x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object px4_msgs::msg::VehicleLocalPosition that will be copied.
             */
            eProsima_user_DllExport VehicleLocalPosition& operator=(VehicleLocalPosition &&x);

            /*!
             * @brief This function sets a value in member timestamp
             * @param _timestamp New value for member timestamp
             */
            eProsima_user_DllExport void timestamp(uint64_t _timestamp);

            /*!
             * @brief This function returns the value of member timestamp
             * @return Value of member timestamp
             */
            eProsima_user_DllExport uint64_t timestamp() const;

            /*!
             * @brief This function returns a reference to member timestamp
             * @return Reference to member timestamp
             */
            eProsima_user_DllExport uint64_t& timestamp();

            /*!
             * @brief This function sets a value in member timestamp_sample
             * @param _timestamp_sample New value for member timestamp_sample
             */
            eProsima_user_DllExport void timestamp_sample(uint64_t _timestamp_sample);

            /*!
             * @brief This function returns the value of member timestamp_sample
             * @return Value of member timestamp_sample
             */
            eProsima_user_DllExport uint64_t timestamp_sample() const;

            /*!
             * @brief This function returns a reference to member timestamp_sample
             * @return Reference to member timestamp_sample
             */
            eProsima_user_DllExport uint64_t& timestamp_sample();

            /*!
             * @brief This function sets a value in member xy_valid
             * @param _xy_valid New value for member xy_valid
             */
            eProsima_user_DllExport void xy_valid(bool _xy_valid);

            /*!
             * @brief This function returns the value of member xy_valid
             * @return Value of member xy_valid
             */
            eProsima_user_DllExport bool xy_valid() const;

            /*!
             * @brief This function returns a reference to member xy_valid
             * @return Reference to member xy_valid
             */
            eProsima_user_DllExport bool& xy_valid();

            /*!
             * @brief This function sets a value in member z_valid
             * @param _z_valid New value for member z_valid
             */
            eProsima_user_DllExport void z_valid(bool _z_valid);

            /*!
             * @brief This function returns the value of member z_valid
             * @return Value of member z_valid
             */
            eProsima_user_DllExport bool z_valid() const;

            /*!
             * @brief This function returns a reference to member z_valid
             * @return Reference to member z_valid
             */
            eProsima_user_DllExport bool& z_valid();

            /*!
             * @brief This function sets a value in member v_xy_valid
             * @param _v_xy_valid New value for member v_xy_valid
             */
            eProsima_user_DllExport void v_xy_valid(bool _v_xy_valid);

            /*!
             * @brief This function returns the value of member v_xy_valid
             * @return Value of member v_xy_valid
             */
            eProsima_user_DllExport bool v_xy_valid() const;

            /*!
             * @brief This function returns a reference to member v_xy_valid
             * @return Reference to member v_xy_valid
             */
            eProsima_user_DllExport bool& v_xy_valid();

            /*!
             * @brief This function sets a value in member v_z_valid
             * @param _v_z_valid New value for member v_z_valid
             */
            eProsima_user_DllExport void v_z_valid(bool _v_z_valid);

            /*!
             * @brief This function returns the value of member v_z_valid
             * @return Value of member v_z_valid
             */
            eProsima_user_DllExport bool v_z_valid() const;

            /*!
             * @brief This function returns a reference to member v_z_valid
             * @return Reference to member v_z_valid
             */
            eProsima_user_DllExport bool& v_z_valid();

            /*!
             * @brief This function sets a value in member x
             * @param _x New value for member x
             */
            eProsima_user_DllExport void x(float _x);

            /*!
             * @brief This function returns the value of member x
             * @return Value of member x
             */
            eProsima_user_DllExport float x() const;

            /*!
             * @brief This function returns a reference to member x
             * @return Reference to member x
             */
            eProsima_user_DllExport float& x();

            /*!
             * @brief This function sets a value in member y
             * @param _y New value for member y
             */
            eProsima_user_DllExport void y(float _y);

            /*!
             * @brief This function returns the value of member y
             * @return Value of member y
             */
            eProsima_user_DllExport float y() const;

            /*!
             * @brief This function returns a reference to member y
             * @return Reference to member y
             */
            eProsima_user_DllExport float& y();

            /*!
             * @brief This function sets a value in member z
             * @param _z New value for member z
             */
            eProsima_user_DllExport void z(float _z);

            /*!
             * @brief This function returns the value of member z
             * @return Value of member z
             */
            eProsima_user_DllExport float z() const;

            /*!
             * @brief This function returns a reference to member z
             * @return Reference to member z
             */
            eProsima_user_DllExport float& z();

            /*!
             * @brief This function copies the value in member delta_xy
             * @param _delta_xy New value to be copied in member delta_xy
             */
            eProsima_user_DllExport void delta_xy(const px4_msgs::msg::float__2 &_delta_xy);

            /*!
             * @brief This function moves the value in member delta_xy
             * @param _delta_xy New value to be moved in member delta_xy
             */
            eProsima_user_DllExport void delta_xy(px4_msgs::msg::float__2 &&_delta_xy);

            /*!
             * @brief This function returns a constant reference to member delta_xy
             * @return Constant reference to member delta_xy
             */
            eProsima_user_DllExport const px4_msgs::msg::float__2& delta_xy() const;

            /*!
             * @brief This function returns a reference to member delta_xy
             * @return Reference to member delta_xy
             */
            eProsima_user_DllExport px4_msgs::msg::float__2& delta_xy();
            /*!
             * @brief This function sets a value in member xy_reset_counter
             * @param _xy_reset_counter New value for member xy_reset_counter
             */
            eProsima_user_DllExport void xy_reset_counter(uint8_t _xy_reset_counter);

            /*!
             * @brief This function returns the value of member xy_reset_counter
             * @return Value of member xy_reset_counter
             */
            eProsima_user_DllExport uint8_t xy_reset_counter() const;

            /*!
             * @brief This function returns a reference to member xy_reset_counter
             * @return Reference to member xy_reset_counter
             */
            eProsima_user_DllExport uint8_t& xy_reset_counter();

            /*!
             * @brief This function sets a value in member delta_z
             * @param _delta_z New value for member delta_z
             */
            eProsima_user_DllExport void delta_z(float _delta_z);

            /*!
             * @brief This function returns the value of member delta_z
             * @return Value of member delta_z
             */
            eProsima_user_DllExport float delta_z() const;

            /*!
             * @brief This function returns a reference to member delta_z
             * @return Reference to member delta_z
             */
            eProsima_user_DllExport float& delta_z();

            /*!
             * @brief This function sets a value in member z_reset_counter
             * @param _z_reset_counter New value for member z_reset_counter
             */
            eProsima_user_DllExport void z_reset_counter(uint8_t _z_reset_counter);

            /*!
             * @brief This function returns the value of member z_reset_counter
             * @return Value of member z_reset_counter
             */
            eProsima_user_DllExport uint8_t z_reset_counter() const;

            /*!
             * @brief This function returns a reference to member z_reset_counter
             * @return Reference to member z_reset_counter
             */
            eProsima_user_DllExport uint8_t& z_reset_counter();

            /*!
             * @brief This function sets a value in member vx
             * @param _vx New value for member vx
             */
            eProsima_user_DllExport void vx(float _vx);

            /*!
             * @brief This function returns the value of member vx
             * @return Value of member vx
             */
            eProsima_user_DllExport float vx() const;

            /*!
             * @brief This function returns a reference to member vx
             * @return Reference to member vx
             */
            eProsima_user_DllExport float& vx();

            /*!
             * @brief This function sets a value in member vy
             * @param _vy New value for member vy
             */
            eProsima_user_DllExport void vy(float _vy);

            /*!
             * @brief This function returns the value of member vy
             * @return Value of member vy
             */
            eProsima_user_DllExport float vy() const;

            /*!
             * @brief This function returns a reference to member vy
             * @return Reference to member vy
             */
            eProsima_user_DllExport float& vy();

            /*!
             * @brief This function sets a value in member vz
             * @param _vz New value for member vz
             */
            eProsima_user_DllExport void vz(float _vz);

            /*!
             * @brief This function returns the value of member vz
             * @return Value of member vz
             */
            eProsima_user_DllExport float vz() const;

            /*!
             * @brief This function returns a reference to member vz
             * @return Reference to member vz
             */
            eProsima_user_DllExport float& vz();

            /*!
             * @brief This function sets a value in member z_deriv
             * @param _z_deriv New value for member z_deriv
             */
            eProsima_user_DllExport void z_deriv(float _z_deriv);

            /*!
             * @brief This function returns the value of member z_deriv
             * @return Value of member z_deriv
             */
            eProsima_user_DllExport float z_deriv() const;

            /*!
             * @brief This function returns a reference to member z_deriv
             * @return Reference to member z_deriv
             */
            eProsima_user_DllExport float& z_deriv();

            /*!
             * @brief This function copies the value in member delta_vxy
             * @param _delta_vxy New value to be copied in member delta_vxy
             */
            eProsima_user_DllExport void delta_vxy(const px4_msgs::msg::float__2 &_delta_vxy);

            /*!
             * @brief This function moves the value in member delta_vxy
             * @param _delta_vxy New value to be moved in member delta_vxy
             */
            eProsima_user_DllExport void delta_vxy(px4_msgs::msg::float__2 &&_delta_vxy);

            /*!
             * @brief This function returns a constant reference to member delta_vxy
             * @return Constant reference to member delta_vxy
             */
            eProsima_user_DllExport const px4_msgs::msg::float__2& delta_vxy() const;

            /*!
             * @brief This function returns a reference to member delta_vxy
             * @return Reference to member delta_vxy
             */
            eProsima_user_DllExport px4_msgs::msg::float__2& delta_vxy();
            /*!
             * @brief This function sets a value in member vxy_reset_counter
             * @param _vxy_reset_counter New value for member vxy_reset_counter
             */
            eProsima_user_DllExport void vxy_reset_counter(uint8_t _vxy_reset_counter);

            /*!
             * @brief This function returns the value of member vxy_reset_counter
             * @return Value of member vxy_reset_counter
             */
            eProsima_user_DllExport uint8_t vxy_reset_counter() const;

            /*!
             * @brief This function returns a reference to member vxy_reset_counter
             * @return Reference to member vxy_reset_counter
             */
            eProsima_user_DllExport uint8_t& vxy_reset_counter();

            /*!
             * @brief This function sets a value in member delta_vz
             * @param _delta_vz New value for member delta_vz
             */
            eProsima_user_DllExport void delta_vz(float _delta_vz);

            /*!
             * @brief This function returns the value of member delta_vz
             * @return Value of member delta_vz
             */
            eProsima_user_DllExport float delta_vz() const;

            /*!
             * @brief This function returns a reference to member delta_vz
             * @return Reference to member delta_vz
             */
            eProsima_user_DllExport float& delta_vz();

            /*!
             * @brief This function sets a value in member vz_reset_counter
             * @param _vz_reset_counter New value for member vz_reset_counter
             */
            eProsima_user_DllExport void vz_reset_counter(uint8_t _vz_reset_counter);

            /*!
             * @brief This function returns the value of member vz_reset_counter
             * @return Value of member vz_reset_counter
             */
            eProsima_user_DllExport uint8_t vz_reset_counter() const;

            /*!
             * @brief This function returns a reference to member vz_reset_counter
             * @return Reference to member vz_reset_counter
             */
            eProsima_user_DllExport uint8_t& vz_reset_counter();

            /*!
             * @brief This function sets a value in member ax
             * @param _ax New value for member ax
             */
            eProsima_user_DllExport void ax(float _ax);

            /*!
             * @brief This function returns the value of member ax
             * @return Value of member ax
             */
            eProsima_user_DllExport float ax() const;

            /*!
             * @brief This function returns a reference to member ax
             * @return Reference to member ax
             */
            eProsima_user_DllExport float& ax();

            /*!
             * @brief This function sets a value in member ay
             * @param _ay New value for member ay
             */
            eProsima_user_DllExport void ay(float _ay);

            /*!
             * @brief This function returns the value of member ay
             * @return Value of member ay
             */
            eProsima_user_DllExport float ay() const;

            /*!
             * @brief This function returns a reference to member ay
             * @return Reference to member ay
             */
            eProsima_user_DllExport float& ay();

            /*!
             * @brief This function sets a value in member az
             * @param _az New value for member az
             */
            eProsima_user_DllExport void az(float _az);

            /*!
             * @brief This function returns the value of member az
             * @return Value of member az
             */
            eProsima_user_DllExport float az() const;

            /*!
             * @brief This function returns a reference to member az
             * @return Reference to member az
             */
            eProsima_user_DllExport float& az();

            /*!
             * @brief This function sets a value in member heading
             * @param _heading New value for member heading
             */
            eProsima_user_DllExport void heading(float _heading);

            /*!
             * @brief This function returns the value of member heading
             * @return Value of member heading
             */
            eProsima_user_DllExport float heading() const;

            /*!
             * @brief This function returns a reference to member heading
             * @return Reference to member heading
             */
            eProsima_user_DllExport float& heading();

            /*!
             * @brief This function sets a value in member delta_heading
             * @param _delta_heading New value for member delta_heading
             */
            eProsima_user_DllExport void delta_heading(float _delta_heading);

            /*!
             * @brief This function returns the value of member delta_heading
             * @return Value of member delta_heading
             */
            eProsima_user_DllExport float delta_heading() const;

            /*!
             * @brief This function returns a reference to member delta_heading
             * @return Reference to member delta_heading
             */
            eProsima_user_DllExport float& delta_heading();

            /*!
             * @brief This function sets a value in member heading_reset_counter
             * @param _heading_reset_counter New value for member heading_reset_counter
             */
            eProsima_user_DllExport void heading_reset_counter(uint8_t _heading_reset_counter);

            /*!
             * @brief This function returns the value of member heading_reset_counter
             * @return Value of member heading_reset_counter
             */
            eProsima_user_DllExport uint8_t heading_reset_counter() const;

            /*!
             * @brief This function returns a reference to member heading_reset_counter
             * @return Reference to member heading_reset_counter
             */
            eProsima_user_DllExport uint8_t& heading_reset_counter();

            /*!
             * @brief This function sets a value in member heading_good_for_control
             * @param _heading_good_for_control New value for member heading_good_for_control
             */
            eProsima_user_DllExport void heading_good_for_control(bool _heading_good_for_control);

            /*!
             * @brief This function returns the value of member heading_good_for_control
             * @return Value of member heading_good_for_control
             */
            eProsima_user_DllExport bool heading_good_for_control() const;

            /*!
             * @brief This function returns a reference to member heading_good_for_control
             * @return Reference to member heading_good_for_control
             */
            eProsima_user_DllExport bool& heading_good_for_control();

            /*!
             * @brief This function sets a value in member xy_global
             * @param _xy_global New value for member xy_global
             */
            eProsima_user_DllExport void xy_global(bool _xy_global);

            /*!
             * @brief This function returns the value of member xy_global
             * @return Value of member xy_global
             */
            eProsima_user_DllExport bool xy_global() const;

            /*!
             * @brief This function returns a reference to member xy_global
             * @return Reference to member xy_global
             */
            eProsima_user_DllExport bool& xy_global();

            /*!
             * @brief This function sets a value in member z_global
             * @param _z_global New value for member z_global
             */
            eProsima_user_DllExport void z_global(bool _z_global);

            /*!
             * @brief This function returns the value of member z_global
             * @return Value of member z_global
             */
            eProsima_user_DllExport bool z_global() const;

            /*!
             * @brief This function returns a reference to member z_global
             * @return Reference to member z_global
             */
            eProsima_user_DllExport bool& z_global();

            /*!
             * @brief This function sets a value in member ref_timestamp
             * @param _ref_timestamp New value for member ref_timestamp
             */
            eProsima_user_DllExport void ref_timestamp(uint64_t _ref_timestamp);

            /*!
             * @brief This function returns the value of member ref_timestamp
             * @return Value of member ref_timestamp
             */
            eProsima_user_DllExport uint64_t ref_timestamp() const;

            /*!
             * @brief This function returns a reference to member ref_timestamp
             * @return Reference to member ref_timestamp
             */
            eProsima_user_DllExport uint64_t& ref_timestamp();

            /*!
             * @brief This function sets a value in member ref_lat
             * @param _ref_lat New value for member ref_lat
             */
            eProsima_user_DllExport void ref_lat(double _ref_lat);

            /*!
             * @brief This function returns the value of member ref_lat
             * @return Value of member ref_lat
             */
            eProsima_user_DllExport double ref_lat() const;

            /*!
             * @brief This function returns a reference to member ref_lat
             * @return Reference to member ref_lat
             */
            eProsima_user_DllExport double& ref_lat();

            /*!
             * @brief This function sets a value in member ref_lon
             * @param _ref_lon New value for member ref_lon
             */
            eProsima_user_DllExport void ref_lon(double _ref_lon);

            /*!
             * @brief This function returns the value of member ref_lon
             * @return Value of member ref_lon
             */
            eProsima_user_DllExport double ref_lon() const;

            /*!
             * @brief This function returns a reference to member ref_lon
             * @return Reference to member ref_lon
             */
            eProsima_user_DllExport double& ref_lon();

            /*!
             * @brief This function sets a value in member ref_alt
             * @param _ref_alt New value for member ref_alt
             */
            eProsima_user_DllExport void ref_alt(float _ref_alt);

            /*!
             * @brief This function returns the value of member ref_alt
             * @return Value of member ref_alt
             */
            eProsima_user_DllExport float ref_alt() const;

            /*!
             * @brief This function returns a reference to member ref_alt
             * @return Reference to member ref_alt
             */
            eProsima_user_DllExport float& ref_alt();

            /*!
             * @brief This function sets a value in member dist_bottom
             * @param _dist_bottom New value for member dist_bottom
             */
            eProsima_user_DllExport void dist_bottom(float _dist_bottom);

            /*!
             * @brief This function returns the value of member dist_bottom
             * @return Value of member dist_bottom
             */
            eProsima_user_DllExport float dist_bottom() const;

            /*!
             * @brief This function returns a reference to member dist_bottom
             * @return Reference to member dist_bottom
             */
            eProsima_user_DllExport float& dist_bottom();

            /*!
             * @brief This function sets a value in member dist_bottom_valid
             * @param _dist_bottom_valid New value for member dist_bottom_valid
             */
            eProsima_user_DllExport void dist_bottom_valid(bool _dist_bottom_valid);

            /*!
             * @brief This function returns the value of member dist_bottom_valid
             * @return Value of member dist_bottom_valid
             */
            eProsima_user_DllExport bool dist_bottom_valid() const;

            /*!
             * @brief This function returns a reference to member dist_bottom_valid
             * @return Reference to member dist_bottom_valid
             */
            eProsima_user_DllExport bool& dist_bottom_valid();

            /*!
             * @brief This function sets a value in member dist_bottom_sensor_bitfield
             * @param _dist_bottom_sensor_bitfield New value for member dist_bottom_sensor_bitfield
             */
            eProsima_user_DllExport void dist_bottom_sensor_bitfield(uint8_t _dist_bottom_sensor_bitfield);

            /*!
             * @brief This function returns the value of member dist_bottom_sensor_bitfield
             * @return Value of member dist_bottom_sensor_bitfield
             */
            eProsima_user_DllExport uint8_t dist_bottom_sensor_bitfield() const;

            /*!
             * @brief This function returns a reference to member dist_bottom_sensor_bitfield
             * @return Reference to member dist_bottom_sensor_bitfield
             */
            eProsima_user_DllExport uint8_t& dist_bottom_sensor_bitfield();

            /*!
             * @brief This function sets a value in member eph
             * @param _eph New value for member eph
             */
            eProsima_user_DllExport void eph(float _eph);

            /*!
             * @brief This function returns the value of member eph
             * @return Value of member eph
             */
            eProsima_user_DllExport float eph() const;

            /*!
             * @brief This function returns a reference to member eph
             * @return Reference to member eph
             */
            eProsima_user_DllExport float& eph();

            /*!
             * @brief This function sets a value in member epv
             * @param _epv New value for member epv
             */
            eProsima_user_DllExport void epv(float _epv);

            /*!
             * @brief This function returns the value of member epv
             * @return Value of member epv
             */
            eProsima_user_DllExport float epv() const;

            /*!
             * @brief This function returns a reference to member epv
             * @return Reference to member epv
             */
            eProsima_user_DllExport float& epv();

            /*!
             * @brief This function sets a value in member evh
             * @param _evh New value for member evh
             */
            eProsima_user_DllExport void evh(float _evh);

            /*!
             * @brief This function returns the value of member evh
             * @return Value of member evh
             */
            eProsima_user_DllExport float evh() const;

            /*!
             * @brief This function returns a reference to member evh
             * @return Reference to member evh
             */
            eProsima_user_DllExport float& evh();

            /*!
             * @brief This function sets a value in member evv
             * @param _evv New value for member evv
             */
            eProsima_user_DllExport void evv(float _evv);

            /*!
             * @brief This function returns the value of member evv
             * @return Value of member evv
             */
            eProsima_user_DllExport float evv() const;

            /*!
             * @brief This function returns a reference to member evv
             * @return Reference to member evv
             */
            eProsima_user_DllExport float& evv();

            /*!
             * @brief This function sets a value in member vxy_max
             * @param _vxy_max New value for member vxy_max
             */
            eProsima_user_DllExport void vxy_max(float _vxy_max);

            /*!
             * @brief This function returns the value of member vxy_max
             * @return Value of member vxy_max
             */
            eProsima_user_DllExport float vxy_max() const;

            /*!
             * @brief This function returns a reference to member vxy_max
             * @return Reference to member vxy_max
             */
            eProsima_user_DllExport float& vxy_max();

            /*!
             * @brief This function sets a value in member vz_max
             * @param _vz_max New value for member vz_max
             */
            eProsima_user_DllExport void vz_max(float _vz_max);

            /*!
             * @brief This function returns the value of member vz_max
             * @return Value of member vz_max
             */
            eProsima_user_DllExport float vz_max() const;

            /*!
             * @brief This function returns a reference to member vz_max
             * @return Reference to member vz_max
             */
            eProsima_user_DllExport float& vz_max();

            /*!
             * @brief This function sets a value in member hagl_min
             * @param _hagl_min New value for member hagl_min
             */
            eProsima_user_DllExport void hagl_min(float _hagl_min);

            /*!
             * @brief This function returns the value of member hagl_min
             * @return Value of member hagl_min
             */
            eProsima_user_DllExport float hagl_min() const;

            /*!
             * @brief This function returns a reference to member hagl_min
             * @return Reference to member hagl_min
             */
            eProsima_user_DllExport float& hagl_min();

            /*!
             * @brief This function sets a value in member hagl_max
             * @param _hagl_max New value for member hagl_max
             */
            eProsima_user_DllExport void hagl_max(float _hagl_max);

            /*!
             * @brief This function returns the value of member hagl_max
             * @return Value of member hagl_max
             */
            eProsima_user_DllExport float hagl_max() const;

            /*!
             * @brief This function returns a reference to member hagl_max
             * @return Reference to member hagl_max
             */
            eProsima_user_DllExport float& hagl_max();


            /*!
             * @brief This function returns the maximum serialized size of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getMaxCdrSerializedSize(size_t current_alignment = 0);

            /*!
             * @brief This function returns the serialized size of a data depending on the buffer alignment.
             * @param data Data which is calculated its serialized size.
             * @param current_alignment Buffer alignment.
             * @return Serialized size.
             */
            eProsima_user_DllExport static size_t getCdrSerializedSize(const px4_msgs::msg::VehicleLocalPosition& data, size_t current_alignment = 0);


            /*!
             * @brief This function serializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serialize(eprosima::fastcdr::Cdr &cdr) const;

            /*!
             * @brief This function deserializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void deserialize(eprosima::fastcdr::Cdr &cdr);



            /*!
             * @brief This function returns the maximum serialized size of the Key of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(size_t current_alignment = 0);

            /*!
             * @brief This function tells you if the Key has been defined for this type
             */
            eProsima_user_DllExport static bool isKeyDefined();

            /*!
             * @brief This function serializes the key members of an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serializeKey(eprosima::fastcdr::Cdr &cdr) const;

        private:
            uint64_t m_timestamp;
            uint64_t m_timestamp_sample;
            bool m_xy_valid;
            bool m_z_valid;
            bool m_v_xy_valid;
            bool m_v_z_valid;
            float m_x;
            float m_y;
            float m_z;
            px4_msgs::msg::float__2 m_delta_xy;
            uint8_t m_xy_reset_counter;
            float m_delta_z;
            uint8_t m_z_reset_counter;
            float m_vx;
            float m_vy;
            float m_vz;
            float m_z_deriv;
            px4_msgs::msg::float__2 m_delta_vxy;
            uint8_t m_vxy_reset_counter;
            float m_delta_vz;
            uint8_t m_vz_reset_counter;
            float m_ax;
            float m_ay;
            float m_az;
            float m_heading;
            float m_delta_heading;
            uint8_t m_heading_reset_counter;
            bool m_heading_good_for_control;
            bool m_xy_global;
            bool m_z_global;
            uint64_t m_ref_timestamp;
            double m_ref_lat;
            double m_ref_lon;
            float m_ref_alt;
            float m_dist_bottom;
            bool m_dist_bottom_valid;
            uint8_t m_dist_bottom_sensor_bitfield;
            float m_eph;
            float m_epv;
            float m_evh;
            float m_evv;
            float m_vxy_max;
            float m_vz_max;
            float m_hagl_min;
            float m_hagl_max;
        };
    }
}

#endif // _PX4_MSGS_MSG_VEHICLELOCALPOSITION_H_