#!/usr/bin/env python
# -*- coding: utf-8 -*-
import sys

sys.path.append("../../sdk_py_code")

import in_sdk_pb2 as Sdk
import in_sdk_header_pb2 as SdkHeader
import in_sdk_body_pb2 as SdkBody
import in_sdk_footer_pb2 as SdkFooter
import in_sdk_body_user_pb2 as SdkUser
import in_sdk_body_appmodule_pb2 as SdkAppModule


def encode():
    msg = Sdk.Sdk()

    header = msg.header
    body = msg.body
    footer = msg.footer

    # header
    header.msg_magic = SdkHeader.SdkMagic.SDK_MAGIC
    header.version = SdkHeader.SdkVersion.SDK_CUR_VERSION
    header.pack_id = 1

    _time = header.time
    _time.in_time = 2018
    _time.out_time = 2019

    header.data_dir = SdkHeader.DataFlow.DATA_IN

    host = header.host
    host.ip_version = SdkHeader.IpVersion.IPV4
    host.port = 9001
    host.ip = "127.0.0.1"

    dest = header.dest
    dest.ip_version = SdkHeader.IpVersion.IPV4
    dest.port = 9001
    dest.ip = "127.0.0.1"

    header.trans_proto = SdkHeader.TransProto.TCP

    # body
    user_session = body.user_session
    user_session.user_type = SdkUser.UserSessionMsg.U_LOGIN
    user_session.user.user_name = "test"
    user_session.user.user_pass = "123"
    user_session.user.permission = SdkUser.U_PERMISSION_ADMIN
    user_session.user.email = "astralrovers@outlook.com"
    user_session.user.phone = "12345678901"
    user_session.token = "asdf"
    user_session.alive_time = 3

    body.url = "xxx.com"
    body.method = SdkBody.OperationType.GET

    content = body.content
    lists = content.app_module_list

    # 添加一个
    module = lists.app_modules.add()
    module.id = 0
    module.run_state = SdkAppModule.E_APP_MODULE_RUN_ST_OK
    module.base_info.name = "test module1"
    module.base_info.enable = True
    module.base_info.state = SdkAppModule.E_APP_MODULE_IDLE
    module.base_info.permission = SdkAppModule.E_APP_MODULE_CFG_PERMISSION_ENABLE

    # 添加另一个
    module = lists.app_modules.add()
    module.id = 0
    module.run_state = SdkAppModule.E_APP_MODULE_RUN_ST_OK
    module.base_info.name = "test module2"
    module.base_info.enable = True
    module.base_info.state = SdkAppModule.E_APP_MODULE_IDLE
    module.base_info.permission = SdkAppModule.E_APP_MODULE_CFG_PERMISSION_ENABLE

    # footer
    footer.res = 123
    footer.result.sdk_result.status_code = SdkFooter.OK
    footer.result.sdk_result.code = "........sdk ok"
    footer.result.content_result.status_code = SdkFooter.R_CODE_OK
    footer.result.content_result.code = "........sdk ok"

    return msg.SerializeToString()


def decode(data):
    msg = Sdk.Sdk()
    msg.ParseFromString(data)

    header = msg.header
    body = msg.body
    footer = msg.footer

    print("#####################header######################")
    print("header.msg_magic : ", header.msg_magic)
    print("header.version : ", header.version)
    print("header.pack_id : ", header.pack_id)

    _time = header.time
    print("_time.in_time : ", _time.in_time)
    print("_time.out_time : ", _time.out_time)

    print("header.data_dir : ", header.data_dir)

    host = header.host
    print("host.ip_version : ", host.ip_version)
    print("host.port : ", host.port)
    print("host.ip : ", host.ip)

    dest = header.dest
    print("dest.ip_version : ", dest.ip_version)
    print("dest.port : ", dest.port)
    print("dest.ip : ", dest.ip)
    print("header.trans_proto : ", header.trans_proto)

    print("#####################body######################")

    user_session = body.user_session
    print("user_session.user_type : ", user_session.user_type)
    print("user_session.user.user_name : ", user_session.user.user_name)
    print("user_session.user.user_pass : ", user_session.user.user_pass)
    print("user_session.user.permission : ", user_session.user.permission)
    print("user_session.user.email : ", user_session.user.email)
    print("user_session.user.phone : ", user_session.user.phone)
    print("user_session.token : ", user_session.token)
    print("user_session.alive_time : ", user_session.alive_time)
    print("body.url : ", body.url)
    print("body.method : ", body.method)

    content = body.content

    if content.WhichOneof("ContentOneof") != "app_module_list":
        print("parser content error")
        return

    for module in content.app_module_list.app_modules:
        pass
        print("module.id : ", module.id)
        print("module.run_state : ", module.run_state)
        print("module.base_info.name : ", module.base_info.name)
        print("module.base_info.enable : ", module.base_info.enable)
        print("module.base_info.state : ", module.base_info.state)
        print("module.base_info.permission : ", module.base_info.permission)
    
    print("#####################footer######################")

    print("footer.res : ", footer.res)
    print("footer.result.sdk_result.status_code : ", footer.result.sdk_result.status_code)
    print("footer.result.sdk_result.code : ", footer.result.sdk_result.code)
    print("footer.result.content_result.status_code : ", footer.result.content_result.status_code)
    print("footer.result.content_result.code : ", footer.result.content_result.code)

    print("#####################over######################")


if __name__ == "__main__":
    decode(encode())
