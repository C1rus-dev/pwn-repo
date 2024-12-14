/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: magic.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "magic.pb-c.h"
void   magic__message__init
                     (Magic__Message         *message)
{
  static const Magic__Message init_value = MAGIC__MESSAGE__INIT;
  *message = init_value;
}
size_t magic__message__get_packed_size
                     (const Magic__Message *message)
{
  assert(message->base.descriptor == &magic__message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t magic__message__pack
                     (const Magic__Message *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &magic__message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t magic__message__pack_to_buffer
                     (const Magic__Message *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &magic__message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Magic__Message *
       magic__message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Magic__Message *)
     protobuf_c_message_unpack (&magic__message__descriptor,
                                allocator, len, data);
}
void   magic__message__free_unpacked
                     (Magic__Message *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &magic__message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor magic__message__field_descriptors[3] =
{
  {
    "magic_type",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Magic__Message, magic_type),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "magic_content",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Magic__Message, has_magic_content),
    offsetof(Magic__Message, magic_content),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "spell_size",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Magic__Message, spell_size),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned magic__message__field_indices_by_name[] = {
  1,   /* field[1] = magic_content */
  0,   /* field[0] = magic_type */
  2,   /* field[2] = spell_size */
};
static const ProtobufCIntRange magic__message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor magic__message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "magic.Message",
  "Message",
  "Magic__Message",
  "magic",
  sizeof(Magic__Message),
  3,
  magic__message__field_descriptors,
  magic__message__field_indices_by_name,
  1,  magic__message__number_ranges,
  (ProtobufCMessageInit) magic__message__init,
  NULL,NULL,NULL    /* reserved[123] */
};