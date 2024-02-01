// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2023 Intel Corporation. All Rights Reserved.

/*!
 * @file HeaderTypeObject.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include <realdds/topics/ros2/ros2header.h>
#include "ros2headerTypeObject.h"
#include <utility>
#include <sstream>
#include <fastrtps/rtps/common/SerializedPayload.h>
#include <fastrtps/utils/md5.h>
#include <fastrtps/types/TypeObjectFactory.h>
#include <fastrtps/types/TypeNamesGenerator.h>
#include <fastrtps/types/AnnotationParameterValue.h>
#include <fastcdr/FastBuffer.h>
#include <fastcdr/Cdr.h>

using namespace eprosima::fastrtps::rtps;

void registerHeaderTypes()
{
    TypeObjectFactory *factory = TypeObjectFactory::get_instance();
    factory->add_type_object("std_msgs::msg::Time", std_msgs::msg::GetTimeIdentifier(true),
            std_msgs::msg::GetTimeObject(true));
    factory->add_type_object("std_msgs::msg::Time", std_msgs::msg::GetTimeIdentifier(false),
            std_msgs::msg::GetTimeObject(false));



    factory->add_type_object("std_msgs::msg::Header", std_msgs::msg::GetHeaderIdentifier(true),
            std_msgs::msg::GetHeaderObject(true));
    factory->add_type_object("std_msgs::msg::Header", std_msgs::msg::GetHeaderIdentifier(false),
            std_msgs::msg::GetHeaderObject(false));



}

namespace std_msgs {
    namespace msg {
        const TypeIdentifier* GetHeaderIdentifier(bool complete)
        {
            const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("Header", complete);
            if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
            {
                return c_identifier;
            }

            GetHeaderObject(complete); // Generated inside
            return TypeObjectFactory::get_instance()->get_type_identifier("Header", complete);
        }

        const TypeObject* GetHeaderObject(bool complete)
        {
            const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("Header", complete);
            if (c_type_object != nullptr)
            {
                return c_type_object;
            }
            else if (complete)
            {
                return GetCompleteHeaderObject();
            }
            //else
            return GetMinimalHeaderObject();
        }

        const TypeObject* GetMinimalHeaderObject()
        {
            const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("Header", false);
            if (c_type_object != nullptr)
            {
                return c_type_object;
            }

            TypeObject *type_object = new TypeObject();
            type_object->_d(EK_MINIMAL);
            type_object->minimal()._d(TK_STRUCTURE);

            type_object->minimal().struct_type().struct_flags().IS_FINAL(false);
            type_object->minimal().struct_type().struct_flags().IS_APPENDABLE(false);
            type_object->minimal().struct_type().struct_flags().IS_MUTABLE(false);
            type_object->minimal().struct_type().struct_flags().IS_NESTED(false);
            type_object->minimal().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

            MemberId memberId = 0;
            MinimalStructMember mst_stamp;
            mst_stamp.common().member_id(memberId++);
            mst_stamp.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
            mst_stamp.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
            mst_stamp.common().member_flags().IS_EXTERNAL(false); // Unsupported
            mst_stamp.common().member_flags().IS_OPTIONAL(false);
            mst_stamp.common().member_flags().IS_MUST_UNDERSTAND(false);
            mst_stamp.common().member_flags().IS_KEY(false);
            mst_stamp.common().member_flags().IS_DEFAULT(false); // Doesn't apply
            mst_stamp.common().member_type_id(*std_msgs::msg::GetTimeIdentifier(false));
            MD5 stamp_hash("stamp");
            for(int i = 0; i < 4; ++i)
            {
                mst_stamp.detail().name_hash()[i] = stamp_hash.digest[i];
            }
            type_object->minimal().struct_type().member_seq().emplace_back(mst_stamp);

            MinimalStructMember mst_frame_id;
            mst_frame_id.common().member_id(memberId++);
            mst_frame_id.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
            mst_frame_id.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
            mst_frame_id.common().member_flags().IS_EXTERNAL(false); // Unsupported
            mst_frame_id.common().member_flags().IS_OPTIONAL(false);
            mst_frame_id.common().member_flags().IS_MUST_UNDERSTAND(false);
            mst_frame_id.common().member_flags().IS_KEY(false);
            mst_frame_id.common().member_flags().IS_DEFAULT(false); // Doesn't apply
            mst_frame_id.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));


            MD5 frame_id_hash("frame_id");
            for(int i = 0; i < 4; ++i)
            {
                mst_frame_id.detail().name_hash()[i] = frame_id_hash.digest[i];
            }
            type_object->minimal().struct_type().member_seq().emplace_back(mst_frame_id);


            // Header
            // TODO Inheritance
            //type_object->minimal().struct_type().header().base_type()._d(EK_MINIMAL);
            //type_object->minimal().struct_type().header().base_type().equivalence_hash()[0..13];

            TypeIdentifier identifier;
            identifier._d(EK_MINIMAL);

            SerializedPayload_t payload(static_cast<uint32_t>(
                MinimalStructType::getCdrSerializedSize(type_object->minimal().struct_type()) + 4));
            eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
            // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
            eprosima::fastcdr::Cdr ser(
                fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
                eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
            payload.encapsulation = CDR_LE;

            type_object->serialize(ser);
            payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
            MD5 objectHash;
            objectHash.update((char*)payload.data, payload.length);
            objectHash.finalize();
            for(int i = 0; i < 14; ++i)
            {
                identifier.equivalence_hash()[i] = objectHash.digest[i];
            }

            TypeObjectFactory::get_instance()->add_type_object("Header", &identifier, type_object);
            delete type_object;
            return TypeObjectFactory::get_instance()->get_type_object("Header", false);
        }

        const TypeObject* GetCompleteHeaderObject()
        {
            const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("Header", true);
            if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
            {
                return c_type_object;
            }

            TypeObject *type_object = new TypeObject();
            type_object->_d(EK_COMPLETE);
            type_object->complete()._d(TK_STRUCTURE);

            type_object->complete().struct_type().struct_flags().IS_FINAL(false);
            type_object->complete().struct_type().struct_flags().IS_APPENDABLE(false);
            type_object->complete().struct_type().struct_flags().IS_MUTABLE(false);
            type_object->complete().struct_type().struct_flags().IS_NESTED(false);
            type_object->complete().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

            MemberId memberId = 0;
            CompleteStructMember cst_stamp;
            cst_stamp.common().member_id(memberId++);
            cst_stamp.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
            cst_stamp.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
            cst_stamp.common().member_flags().IS_EXTERNAL(false); // Unsupported
            cst_stamp.common().member_flags().IS_OPTIONAL(false);
            cst_stamp.common().member_flags().IS_MUST_UNDERSTAND(false);
            cst_stamp.common().member_flags().IS_KEY(false);
            cst_stamp.common().member_flags().IS_DEFAULT(false); // Doesn't apply
            cst_stamp.common().member_type_id(*std_msgs::msg::GetTimeIdentifier(true));
            cst_stamp.detail().name("stamp");

            type_object->complete().struct_type().member_seq().emplace_back(cst_stamp);

            CompleteStructMember cst_frame_id;
            cst_frame_id.common().member_id(memberId++);
            cst_frame_id.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
            cst_frame_id.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
            cst_frame_id.common().member_flags().IS_EXTERNAL(false); // Unsupported
            cst_frame_id.common().member_flags().IS_OPTIONAL(false);
            cst_frame_id.common().member_flags().IS_MUST_UNDERSTAND(false);
            cst_frame_id.common().member_flags().IS_KEY(false);
            cst_frame_id.common().member_flags().IS_DEFAULT(false); // Doesn't apply
            cst_frame_id.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));


            cst_frame_id.detail().name("frame_id");

            type_object->complete().struct_type().member_seq().emplace_back(cst_frame_id);


            // Header
            type_object->complete().struct_type().header().detail().type_name("Header");
            // TODO inheritance


            TypeIdentifier identifier;
            identifier._d(EK_COMPLETE);

            SerializedPayload_t payload(static_cast<uint32_t>(
                CompleteStructType::getCdrSerializedSize(type_object->complete().struct_type()) + 4));
            eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
            // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
            eprosima::fastcdr::Cdr ser(
                fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
                eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
            payload.encapsulation = CDR_LE;

            type_object->serialize(ser);
            payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
            MD5 objectHash;
            objectHash.update((char*)payload.data, payload.length);
            objectHash.finalize();
            for(int i = 0; i < 14; ++i)
            {
                identifier.equivalence_hash()[i] = objectHash.digest[i];
            }

            TypeObjectFactory::get_instance()->add_type_object("Header", &identifier, type_object);
            delete type_object;
            return TypeObjectFactory::get_instance()->get_type_object("Header", true);
        }

    } // namespace msg
} // namespace std_msgs