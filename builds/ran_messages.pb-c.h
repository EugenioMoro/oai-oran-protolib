/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ran_messages.proto */

#ifndef PROTOBUF_C_ran_5fmessages_2eproto__INCLUDED
#define PROTOBUF_C_ran_5fmessages_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct RANParamMapEntry RANParamMapEntry;
typedef struct RANIndicationRequest RANIndicationRequest;
typedef struct RANIndicationResponse RANIndicationResponse;
typedef struct RANControlRequest RANControlRequest;
typedef struct RANMessage RANMessage;


/* --- enums --- */

typedef enum _RANMessageType {
  RAN_MESSAGE_TYPE__SUBSCRIPTION = 1,
  RAN_MESSAGE_TYPE__INDICATION_REQUEST = 2,
  RAN_MESSAGE_TYPE__INDICATION_RESPONSE = 3,
  RAN_MESSAGE_TYPE__CONTROL = 4,
  RAN_MESSAGE_TYPE__SOMETHING_ELSE = 5
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(RAN_MESSAGE_TYPE)
} RANMessageType;
typedef enum _RANParameter {
  RAN_PARAMETER__GNB_ID = 1,
  RAN_PARAMETER__SOMETHING = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(RAN_PARAMETER)
} RANParameter;

/* --- messages --- */

struct  RANParamMapEntry
{
  ProtobufCMessage base;
  RANParameter key;
  char *value;
};
#define RAN_PARAM_MAP_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ran_param_map_entry__descriptor) \
    , RAN_PARAMETER__GNB_ID, NULL }


/*
 * RAN SUBMESSAGES 
 */
struct  RANIndicationRequest
{
  ProtobufCMessage base;
  size_t n_target_params;
  RANParameter *target_params;
};
#define RAN_INDICATION_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ran_indication_request__descriptor) \
    , 0,NULL }


struct  RANIndicationResponse
{
  ProtobufCMessage base;
  size_t n_param_map;
  RANParamMapEntry **param_map;
};
#define RAN_INDICATION_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ran_indication_response__descriptor) \
    , 0,NULL }


struct  RANControlRequest
{
  ProtobufCMessage base;
  size_t n_target_param_map;
  RANParamMapEntry **target_param_map;
};
#define RAN_CONTROL_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ran_control_request__descriptor) \
    , 0,NULL }


typedef enum {
  RAN_MESSAGE__PAYLOAD__NOT_SET = 0,
  RAN_MESSAGE__PAYLOAD_RAN_INDICATION_REQUEST = 2,
  RAN_MESSAGE__PAYLOAD_RAN_INDICATION_RESPONSE = 3,
  RAN_MESSAGE__PAYLOAD_RAN_CONTROL_REQUEST = 4
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(RAN_MESSAGE__PAYLOAD__CASE)
} RANMessage__PayloadCase;

struct  RANMessage
{
  ProtobufCMessage base;
  RANMessageType msg_type;
  RANMessage__PayloadCase payload_case;
  union {
    RANIndicationRequest *ran_indication_request;
    RANIndicationResponse *ran_indication_response;
    RANControlRequest *ran_control_request;
  };
};
#define RAN_MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ran_message__descriptor) \
    , RAN_MESSAGE_TYPE__SUBSCRIPTION, RAN_MESSAGE__PAYLOAD__NOT_SET, {0} }


/* RANParamMapEntry methods */
void   ran_param_map_entry__init
                     (RANParamMapEntry         *message);
size_t ran_param_map_entry__get_packed_size
                     (const RANParamMapEntry   *message);
size_t ran_param_map_entry__pack
                     (const RANParamMapEntry   *message,
                      uint8_t             *out);
size_t ran_param_map_entry__pack_to_buffer
                     (const RANParamMapEntry   *message,
                      ProtobufCBuffer     *buffer);
RANParamMapEntry *
       ran_param_map_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ran_param_map_entry__free_unpacked
                     (RANParamMapEntry *message,
                      ProtobufCAllocator *allocator);
/* RANIndicationRequest methods */
void   ran_indication_request__init
                     (RANIndicationRequest         *message);
size_t ran_indication_request__get_packed_size
                     (const RANIndicationRequest   *message);
size_t ran_indication_request__pack
                     (const RANIndicationRequest   *message,
                      uint8_t             *out);
size_t ran_indication_request__pack_to_buffer
                     (const RANIndicationRequest   *message,
                      ProtobufCBuffer     *buffer);
RANIndicationRequest *
       ran_indication_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ran_indication_request__free_unpacked
                     (RANIndicationRequest *message,
                      ProtobufCAllocator *allocator);
/* RANIndicationResponse methods */
void   ran_indication_response__init
                     (RANIndicationResponse         *message);
size_t ran_indication_response__get_packed_size
                     (const RANIndicationResponse   *message);
size_t ran_indication_response__pack
                     (const RANIndicationResponse   *message,
                      uint8_t             *out);
size_t ran_indication_response__pack_to_buffer
                     (const RANIndicationResponse   *message,
                      ProtobufCBuffer     *buffer);
RANIndicationResponse *
       ran_indication_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ran_indication_response__free_unpacked
                     (RANIndicationResponse *message,
                      ProtobufCAllocator *allocator);
/* RANControlRequest methods */
void   ran_control_request__init
                     (RANControlRequest         *message);
size_t ran_control_request__get_packed_size
                     (const RANControlRequest   *message);
size_t ran_control_request__pack
                     (const RANControlRequest   *message,
                      uint8_t             *out);
size_t ran_control_request__pack_to_buffer
                     (const RANControlRequest   *message,
                      ProtobufCBuffer     *buffer);
RANControlRequest *
       ran_control_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ran_control_request__free_unpacked
                     (RANControlRequest *message,
                      ProtobufCAllocator *allocator);
/* RANMessage methods */
void   ran_message__init
                     (RANMessage         *message);
size_t ran_message__get_packed_size
                     (const RANMessage   *message);
size_t ran_message__pack
                     (const RANMessage   *message,
                      uint8_t             *out);
size_t ran_message__pack_to_buffer
                     (const RANMessage   *message,
                      ProtobufCBuffer     *buffer);
RANMessage *
       ran_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ran_message__free_unpacked
                     (RANMessage *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*RANParamMapEntry_Closure)
                 (const RANParamMapEntry *message,
                  void *closure_data);
typedef void (*RANIndicationRequest_Closure)
                 (const RANIndicationRequest *message,
                  void *closure_data);
typedef void (*RANIndicationResponse_Closure)
                 (const RANIndicationResponse *message,
                  void *closure_data);
typedef void (*RANControlRequest_Closure)
                 (const RANControlRequest *message,
                  void *closure_data);
typedef void (*RANMessage_Closure)
                 (const RANMessage *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    ran_message_type__descriptor;
extern const ProtobufCEnumDescriptor    ran_parameter__descriptor;
extern const ProtobufCMessageDescriptor ran_param_map_entry__descriptor;
extern const ProtobufCMessageDescriptor ran_indication_request__descriptor;
extern const ProtobufCMessageDescriptor ran_indication_response__descriptor;
extern const ProtobufCMessageDescriptor ran_control_request__descriptor;
extern const ProtobufCMessageDescriptor ran_message__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_ran_5fmessages_2eproto__INCLUDED */