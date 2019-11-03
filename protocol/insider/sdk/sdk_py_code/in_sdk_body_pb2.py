# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: in_sdk_body.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='in_sdk_body.proto',
  package='insider.sdk',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n\x11in_sdk_body.proto\x12\x0binsider.sdk\",\n\x04User\x12\x11\n\tuser_name\x18\x01 \x01(\t\x12\x11\n\tuser_pass\x18\x02 \x01(\t\"\xa0\x01\n\x08UserInfo\x12\x31\n\tuser_type\x18\x01 \x01(\x0e\x32\x1e.insider.sdk.UserInfo.UserType\x12\x1f\n\x04user\x18\x02 \x03(\x0b\x32\x11.insider.sdk.User\x12\r\n\x05token\x18\x03 \x03(\t\"1\n\x08UserType\x12\x0b\n\x07U_LOGIN\x10\x00\x12\x0c\n\x08U_LOGOUT\x10\x01\x12\n\n\x06U_VERI\x10\x02\"\x18\n\x07\x43ontent\x12\r\n\x05magic\x18\x01 \x01(\x03\"\xc1\x01\n\x04\x42ody\x12#\n\x04user\x18\x01 \x01(\x0b\x32\x15.insider.sdk.UserInfo\x12\x0b\n\x03url\x18\x02 \x01(\t\x12*\n\x06method\x18\x03 \x01(\x0e\x32\x1a.insider.sdk.OperationType\x12\x34\n\x0fresponse_result\x18\x04 \x03(\x0e\x32\x1b.insider.sdk.ResponseResult\x12%\n\x07\x63ontent\x18\x05 \x03(\x0b\x32\x14.insider.sdk.Content*7\n\rOperationType\x12\x07\n\x03GET\x10\x00\x12\x08\n\x04POST\x10\x01\x12\x07\n\x03PUT\x10\x02\x12\n\n\x06\x44\x45LETE\x10\x03*#\n\x0eResponseResult\x12\x06\n\x02OK\x10\x00\x12\t\n\x05\x45RROR\x10\x01\x62\x06proto3')
)

_OPERATIONTYPE = _descriptor.EnumDescriptor(
  name='OperationType',
  full_name='insider.sdk.OperationType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='GET', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='POST', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PUT', index=2, number=2,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='DELETE', index=3, number=3,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=465,
  serialized_end=520,
)
_sym_db.RegisterEnumDescriptor(_OPERATIONTYPE)

OperationType = enum_type_wrapper.EnumTypeWrapper(_OPERATIONTYPE)
_RESPONSERESULT = _descriptor.EnumDescriptor(
  name='ResponseResult',
  full_name='insider.sdk.ResponseResult',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='OK', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERROR', index=1, number=1,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=522,
  serialized_end=557,
)
_sym_db.RegisterEnumDescriptor(_RESPONSERESULT)

ResponseResult = enum_type_wrapper.EnumTypeWrapper(_RESPONSERESULT)
GET = 0
POST = 1
PUT = 2
DELETE = 3
OK = 0
ERROR = 1


_USERINFO_USERTYPE = _descriptor.EnumDescriptor(
  name='UserType',
  full_name='insider.sdk.UserInfo.UserType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='U_LOGIN', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='U_LOGOUT', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='U_VERI', index=2, number=2,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=192,
  serialized_end=241,
)
_sym_db.RegisterEnumDescriptor(_USERINFO_USERTYPE)


_USER = _descriptor.Descriptor(
  name='User',
  full_name='insider.sdk.User',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='user_name', full_name='insider.sdk.User.user_name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='user_pass', full_name='insider.sdk.User.user_pass', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=34,
  serialized_end=78,
)


_USERINFO = _descriptor.Descriptor(
  name='UserInfo',
  full_name='insider.sdk.UserInfo',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='user_type', full_name='insider.sdk.UserInfo.user_type', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='user', full_name='insider.sdk.UserInfo.user', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='token', full_name='insider.sdk.UserInfo.token', index=2,
      number=3, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _USERINFO_USERTYPE,
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=81,
  serialized_end=241,
)


_CONTENT = _descriptor.Descriptor(
  name='Content',
  full_name='insider.sdk.Content',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='magic', full_name='insider.sdk.Content.magic', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=243,
  serialized_end=267,
)


_BODY = _descriptor.Descriptor(
  name='Body',
  full_name='insider.sdk.Body',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='user', full_name='insider.sdk.Body.user', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='url', full_name='insider.sdk.Body.url', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='method', full_name='insider.sdk.Body.method', index=2,
      number=3, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='response_result', full_name='insider.sdk.Body.response_result', index=3,
      number=4, type=14, cpp_type=8, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='content', full_name='insider.sdk.Body.content', index=4,
      number=5, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=270,
  serialized_end=463,
)

_USERINFO.fields_by_name['user_type'].enum_type = _USERINFO_USERTYPE
_USERINFO.fields_by_name['user'].message_type = _USER
_USERINFO_USERTYPE.containing_type = _USERINFO
_BODY.fields_by_name['user'].message_type = _USERINFO
_BODY.fields_by_name['method'].enum_type = _OPERATIONTYPE
_BODY.fields_by_name['response_result'].enum_type = _RESPONSERESULT
_BODY.fields_by_name['content'].message_type = _CONTENT
DESCRIPTOR.message_types_by_name['User'] = _USER
DESCRIPTOR.message_types_by_name['UserInfo'] = _USERINFO
DESCRIPTOR.message_types_by_name['Content'] = _CONTENT
DESCRIPTOR.message_types_by_name['Body'] = _BODY
DESCRIPTOR.enum_types_by_name['OperationType'] = _OPERATIONTYPE
DESCRIPTOR.enum_types_by_name['ResponseResult'] = _RESPONSERESULT
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

User = _reflection.GeneratedProtocolMessageType('User', (_message.Message,), {
  'DESCRIPTOR' : _USER,
  '__module__' : 'in_sdk_body_pb2'
  # @@protoc_insertion_point(class_scope:insider.sdk.User)
  })
_sym_db.RegisterMessage(User)

UserInfo = _reflection.GeneratedProtocolMessageType('UserInfo', (_message.Message,), {
  'DESCRIPTOR' : _USERINFO,
  '__module__' : 'in_sdk_body_pb2'
  # @@protoc_insertion_point(class_scope:insider.sdk.UserInfo)
  })
_sym_db.RegisterMessage(UserInfo)

Content = _reflection.GeneratedProtocolMessageType('Content', (_message.Message,), {
  'DESCRIPTOR' : _CONTENT,
  '__module__' : 'in_sdk_body_pb2'
  # @@protoc_insertion_point(class_scope:insider.sdk.Content)
  })
_sym_db.RegisterMessage(Content)

Body = _reflection.GeneratedProtocolMessageType('Body', (_message.Message,), {
  'DESCRIPTOR' : _BODY,
  '__module__' : 'in_sdk_body_pb2'
  # @@protoc_insertion_point(class_scope:insider.sdk.Body)
  })
_sym_db.RegisterMessage(Body)


# @@protoc_insertion_point(module_scope)
