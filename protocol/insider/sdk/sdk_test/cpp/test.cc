/**
 * @file test.cpp
 * @author yuwangliang (astralrovers@outlook.com)
 * @brief 用于测试sdk c++协议
 * @version 0.1
 * @date 2020-01-26
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include "../sdk_cpp_code/in_sdk.pb.h"

using namespace std;
using namespace insider::sdk;

void encode(Sdk &msg)
{
    Header *header = msg.mutable_header();
    Body *body = msg.mutable_body();
    Footer *footer = msg.mutable_footer();

    /**************************************************************/
    header->set_msg_magic(SdkMagic::SDK_MAGIC);
	header->set_version(SdkVersion::SDK_CUR_VERSION);
	header->set_pack_id(1);
	header->mutable_time()->set_in_time(2018);
	header->mutable_time()->set_out_time(2019);
	header->set_data_dir(DataFlow::DATA_IN);
    header->mutable_host()->set_ip_version(IpVersion::IPV4);
	header->mutable_host()->set_port(9001);
	header->mutable_host()->set_ip("127.0.0.1");
    header->mutable_dest()->set_ip_version(IpVersion::IPV4);
	header->mutable_dest()->set_port(9001);
	header->mutable_dest()->set_ip("127.0.0.1");
	header->set_trans_proto(TransProto::TCP);

    /***********************************************************/
    body->mutable_user_session()->set_user_type(UserSessionMsg_UserMethod_U_LOGIN);
    body->mutable_user_session()->mutable_user()->set_user_name("admin");
    body->mutable_user_session()->mutable_user()->set_user_pass("admin");
    body->mutable_user_session()->mutable_user()->set_permission(U_PERMISSION_ADMIN);
    body->mutable_user_session()->mutable_user()->set_email("astralrovers@outlook.com");
    body->mutable_user_session()->mutable_user()->set_phone("12345678901");
	body->mutable_user_session()->set_token("asdf");
	body->mutable_user_session()->set_alive_time(3);

	body->set_url("xxx.com");
	body->set_method(OperationType::GET);

    Content *content = body->mutable_content();

    // 模块列表
    AppModuleCoutInfoList *lists = content->mutable_app_module_list();

    // 添加一个模块
    AppModuleCoutInfo *module = lists->add_app_modules();
    AppModuleBaseInfo *info = module->mutable_base_info();

    module->set_id(0);
    // 使用时不允许设置，只能查询
    module->set_run_state(E_APP_MODULE_RUN_ST_OK);

    info->set_name("test module1");
    info->set_enable(true);

    info->set_state(E_APP_MODULE_IDLE);
    info->set_permission(E_APP_MODULE_CFG_PERMISSION_ENABLE);

    // 添加一个模块
    module = lists->add_app_modules();
    info = module->mutable_base_info();

    info->set_name("test module2");
    info->set_enable(true);

    info->set_state(E_APP_MODULE_INIT);
    info->set_permission(E_APP_MODULE_CFG_PERMISSION_ENABLE);

    /**********************************************************/
    footer->set_res(123);
    Result *result = footer->mutable_result();
    SdkResult *sdk_result = result->mutable_sdk_result();
    ContentResult *content_result = result->mutable_content_result();

    sdk_result->set_status_code(OK);
    sdk_result->set_code("........sdk ok");

    content_result->set_status_code(R_CODE_OK);
    content_result->set_code("........sdk ok");

    return;
}

void decode(const std::string &data)
{
    Sdk msg;

    if (!msg.ParseFromString(data))
	{
		cout << "can not parse sdk protocol\n";
		return ;
	}

    const Header &header = msg.header();
    const Body &body = msg.body();
    const Footer &footer = msg.footer();

    cout << "..................header............................" << endl;

    cout << "msg magic : " << header.msg_magic() << endl;
    cout << "version : " << header.version() << endl;
    cout << "pack id : " << header.pack_id() << endl;
    cout << "in time : " << header.time().in_time() << endl;
    cout << "out time : " << header.time().out_time() << endl;
    cout << "ip version : " << header.host().ip_version() << endl;
    cout << "port : " << header.host().port() << endl;
    cout << "ip : " << header.host().ip() << endl;
    cout << "dest ip version : " << header.dest().ip_version() << endl;
    cout << "dest port : " << header.dest().port() << endl;
    cout << "dest ip : " << header.dest().ip() << endl;
    cout << "trans proto : " << header.trans_proto() << endl;

    /****************************************************************/

    cout << "..................body............................" << endl;

    cout << "url : " << body.url() << endl;
    cout << "method : " << body.method() << endl;

    const UserSessionMsg &user_session = body.user_session();

    cout << "user type : " << user_session.user_type() << endl;
    cout << "user name : " << user_session.user().user_name() << endl;
    cout << "user pass : " << user_session.user().user_pass() << endl;
    cout << "permission : " << user_session.user().permission() << endl;
    cout << "email : " << user_session.user().email() << endl;
    cout << "phone : " << user_session.user().phone() << endl;
    cout << "token : " << user_session.token() << endl;
    cout << "alive time : " << user_session.alive_time() << endl;

    const Content &content = body.content();

    if (Content::kAppModuleList != content.ContentOneof_case())
    {
        cout << "set app module list error" << endl;
        return;
    }

    const AppModuleCoutInfoList &lists = content.app_module_list();

    int size = lists.app_modules_size();

    for (int i = 0; i < size; i++)
    {
        const AppModuleCoutInfo &module = lists.app_modules(i);

        cout << "module id : " << module.id() << endl;
        cout << "run state : " << module.run_state() << endl;

        cout << "modules name : " << module.base_info().name() << endl;
        cout << "modules enable : " << module.base_info().enable() << endl;
        cout << "state : " << module.base_info().state() << endl;
        cout << "permission : " << module.base_info().permission() << endl;

        cout << "########################################" << endl;
    }

    cout << "..................footer............................" << endl;

    cout << "res : " << footer.res() << endl;
    cout << "sdk status code : " << footer.result().sdk_result().status_code() << endl;
    cout << "sdk code : " << footer.result().sdk_result().code() << endl;

    cout << "content status code : " << footer.result().content_result().status_code() << endl;
    cout << "content code : " << footer.result().content_result().code() << endl;

    return;
}

int main(void)
{
    Sdk msg;

    encode(msg);

    std::string data;

    msg.SerializeToString(&data);

    decode(data);

    google::protobuf::ShutdownProtobufLibrary();

    return 0;
}