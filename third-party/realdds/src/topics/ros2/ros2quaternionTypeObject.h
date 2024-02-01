// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2023 Intel Corporation. All Rights Reserved.

/*!
 * @file QuaternionTypeObject.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_QUATERNION_TYPE_OBJECT_H_
#define _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_QUATERNION_TYPE_OBJECT_H_


#include <fastrtps/types/TypeObject.h>
#include <map>

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
#if defined(Quaternion_SOURCE)
#define Quaternion_DllAPI __declspec( dllexport )
#else
#define Quaternion_DllAPI __declspec( dllimport )
#endif // Quaternion_SOURCE
#else
#define Quaternion_DllAPI
#endif
#else
#define Quaternion_DllAPI
#endif // _WIN32

using namespace eprosima::fastrtps::types;

eProsima_user_DllExport void registerQuaternionTypes();

namespace geometry_msgs {
    namespace msg {
        eProsima_user_DllExport const TypeIdentifier* GetQuaternionIdentifier(bool complete = false);
        eProsima_user_DllExport const TypeObject* GetQuaternionObject(bool complete = false);
        eProsima_user_DllExport const TypeObject* GetMinimalQuaternionObject();
        eProsima_user_DllExport const TypeObject* GetCompleteQuaternionObject();

    } // namespace msg
} // namespace geometry_msgs

#endif // _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_QUATERNION_TYPE_OBJECT_H_