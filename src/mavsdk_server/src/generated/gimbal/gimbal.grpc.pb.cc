// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: gimbal/gimbal.proto

#include "gimbal/gimbal.pb.h"
#include "gimbal/gimbal.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace mavsdk {
namespace rpc {
namespace gimbal {

static const char* GimbalService_method_names[] = {
  "/mavsdk.rpc.gimbal.GimbalService/SetAngles",
  "/mavsdk.rpc.gimbal.GimbalService/SetAngularRates",
  "/mavsdk.rpc.gimbal.GimbalService/SetRoiLocation",
  "/mavsdk.rpc.gimbal.GimbalService/TakeControl",
  "/mavsdk.rpc.gimbal.GimbalService/ReleaseControl",
  "/mavsdk.rpc.gimbal.GimbalService/SubscribeGimbalList",
  "/mavsdk.rpc.gimbal.GimbalService/SubscribeControlStatus",
  "/mavsdk.rpc.gimbal.GimbalService/GetControlStatus",
  "/mavsdk.rpc.gimbal.GimbalService/SubscribeAttitude",
  "/mavsdk.rpc.gimbal.GimbalService/GetAttitude",
};

std::unique_ptr< GimbalService::Stub> GimbalService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< GimbalService::Stub> stub(new GimbalService::Stub(channel, options));
  return stub;
}

GimbalService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_SetAngles_(GimbalService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetAngularRates_(GimbalService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetRoiLocation_(GimbalService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_TakeControl_(GimbalService_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ReleaseControl_(GimbalService_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SubscribeGimbalList_(GimbalService_method_names[5], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_SubscribeControlStatus_(GimbalService_method_names[6], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_GetControlStatus_(GimbalService_method_names[7], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SubscribeAttitude_(GimbalService_method_names[8], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_GetAttitude_(GimbalService_method_names[9], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status GimbalService::Stub::SetAngles(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetAnglesRequest& request, ::mavsdk::rpc::gimbal::SetAnglesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::gimbal::SetAnglesRequest, ::mavsdk::rpc::gimbal::SetAnglesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SetAngles_, context, request, response);
}

void GimbalService::Stub::async::SetAngles(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetAnglesRequest* request, ::mavsdk::rpc::gimbal::SetAnglesResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::gimbal::SetAnglesRequest, ::mavsdk::rpc::gimbal::SetAnglesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetAngles_, context, request, response, std::move(f));
}

void GimbalService::Stub::async::SetAngles(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetAnglesRequest* request, ::mavsdk::rpc::gimbal::SetAnglesResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetAngles_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::SetAnglesResponse>* GimbalService::Stub::PrepareAsyncSetAnglesRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetAnglesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::gimbal::SetAnglesResponse, ::mavsdk::rpc::gimbal::SetAnglesRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SetAngles_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::SetAnglesResponse>* GimbalService::Stub::AsyncSetAnglesRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetAnglesRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetAnglesRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status GimbalService::Stub::SetAngularRates(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetAngularRatesRequest& request, ::mavsdk::rpc::gimbal::SetAngularRatesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::gimbal::SetAngularRatesRequest, ::mavsdk::rpc::gimbal::SetAngularRatesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SetAngularRates_, context, request, response);
}

void GimbalService::Stub::async::SetAngularRates(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetAngularRatesRequest* request, ::mavsdk::rpc::gimbal::SetAngularRatesResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::gimbal::SetAngularRatesRequest, ::mavsdk::rpc::gimbal::SetAngularRatesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetAngularRates_, context, request, response, std::move(f));
}

void GimbalService::Stub::async::SetAngularRates(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetAngularRatesRequest* request, ::mavsdk::rpc::gimbal::SetAngularRatesResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetAngularRates_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::SetAngularRatesResponse>* GimbalService::Stub::PrepareAsyncSetAngularRatesRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetAngularRatesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::gimbal::SetAngularRatesResponse, ::mavsdk::rpc::gimbal::SetAngularRatesRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SetAngularRates_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::SetAngularRatesResponse>* GimbalService::Stub::AsyncSetAngularRatesRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetAngularRatesRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetAngularRatesRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status GimbalService::Stub::SetRoiLocation(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetRoiLocationRequest& request, ::mavsdk::rpc::gimbal::SetRoiLocationResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::gimbal::SetRoiLocationRequest, ::mavsdk::rpc::gimbal::SetRoiLocationResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SetRoiLocation_, context, request, response);
}

void GimbalService::Stub::async::SetRoiLocation(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetRoiLocationRequest* request, ::mavsdk::rpc::gimbal::SetRoiLocationResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::gimbal::SetRoiLocationRequest, ::mavsdk::rpc::gimbal::SetRoiLocationResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetRoiLocation_, context, request, response, std::move(f));
}

void GimbalService::Stub::async::SetRoiLocation(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetRoiLocationRequest* request, ::mavsdk::rpc::gimbal::SetRoiLocationResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetRoiLocation_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::SetRoiLocationResponse>* GimbalService::Stub::PrepareAsyncSetRoiLocationRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetRoiLocationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::gimbal::SetRoiLocationResponse, ::mavsdk::rpc::gimbal::SetRoiLocationRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SetRoiLocation_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::SetRoiLocationResponse>* GimbalService::Stub::AsyncSetRoiLocationRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SetRoiLocationRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetRoiLocationRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status GimbalService::Stub::TakeControl(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::TakeControlRequest& request, ::mavsdk::rpc::gimbal::TakeControlResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::gimbal::TakeControlRequest, ::mavsdk::rpc::gimbal::TakeControlResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_TakeControl_, context, request, response);
}

void GimbalService::Stub::async::TakeControl(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::TakeControlRequest* request, ::mavsdk::rpc::gimbal::TakeControlResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::gimbal::TakeControlRequest, ::mavsdk::rpc::gimbal::TakeControlResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TakeControl_, context, request, response, std::move(f));
}

void GimbalService::Stub::async::TakeControl(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::TakeControlRequest* request, ::mavsdk::rpc::gimbal::TakeControlResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TakeControl_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::TakeControlResponse>* GimbalService::Stub::PrepareAsyncTakeControlRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::TakeControlRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::gimbal::TakeControlResponse, ::mavsdk::rpc::gimbal::TakeControlRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_TakeControl_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::TakeControlResponse>* GimbalService::Stub::AsyncTakeControlRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::TakeControlRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncTakeControlRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status GimbalService::Stub::ReleaseControl(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::ReleaseControlRequest& request, ::mavsdk::rpc::gimbal::ReleaseControlResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::gimbal::ReleaseControlRequest, ::mavsdk::rpc::gimbal::ReleaseControlResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ReleaseControl_, context, request, response);
}

void GimbalService::Stub::async::ReleaseControl(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::ReleaseControlRequest* request, ::mavsdk::rpc::gimbal::ReleaseControlResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::gimbal::ReleaseControlRequest, ::mavsdk::rpc::gimbal::ReleaseControlResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ReleaseControl_, context, request, response, std::move(f));
}

void GimbalService::Stub::async::ReleaseControl(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::ReleaseControlRequest* request, ::mavsdk::rpc::gimbal::ReleaseControlResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ReleaseControl_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::ReleaseControlResponse>* GimbalService::Stub::PrepareAsyncReleaseControlRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::ReleaseControlRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::gimbal::ReleaseControlResponse, ::mavsdk::rpc::gimbal::ReleaseControlRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ReleaseControl_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::ReleaseControlResponse>* GimbalService::Stub::AsyncReleaseControlRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::ReleaseControlRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncReleaseControlRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientReader< ::mavsdk::rpc::gimbal::GimbalListResponse>* GimbalService::Stub::SubscribeGimbalListRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SubscribeGimbalListRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::mavsdk::rpc::gimbal::GimbalListResponse>::Create(channel_.get(), rpcmethod_SubscribeGimbalList_, context, request);
}

void GimbalService::Stub::async::SubscribeGimbalList(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SubscribeGimbalListRequest* request, ::grpc::ClientReadReactor< ::mavsdk::rpc::gimbal::GimbalListResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::mavsdk::rpc::gimbal::GimbalListResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_SubscribeGimbalList_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::gimbal::GimbalListResponse>* GimbalService::Stub::AsyncSubscribeGimbalListRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SubscribeGimbalListRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::gimbal::GimbalListResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeGimbalList_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::gimbal::GimbalListResponse>* GimbalService::Stub::PrepareAsyncSubscribeGimbalListRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SubscribeGimbalListRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::gimbal::GimbalListResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeGimbalList_, context, request, false, nullptr);
}

::grpc::ClientReader< ::mavsdk::rpc::gimbal::ControlStatusResponse>* GimbalService::Stub::SubscribeControlStatusRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SubscribeControlStatusRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::mavsdk::rpc::gimbal::ControlStatusResponse>::Create(channel_.get(), rpcmethod_SubscribeControlStatus_, context, request);
}

void GimbalService::Stub::async::SubscribeControlStatus(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SubscribeControlStatusRequest* request, ::grpc::ClientReadReactor< ::mavsdk::rpc::gimbal::ControlStatusResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::mavsdk::rpc::gimbal::ControlStatusResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_SubscribeControlStatus_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::gimbal::ControlStatusResponse>* GimbalService::Stub::AsyncSubscribeControlStatusRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SubscribeControlStatusRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::gimbal::ControlStatusResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeControlStatus_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::gimbal::ControlStatusResponse>* GimbalService::Stub::PrepareAsyncSubscribeControlStatusRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SubscribeControlStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::gimbal::ControlStatusResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeControlStatus_, context, request, false, nullptr);
}

::grpc::Status GimbalService::Stub::GetControlStatus(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::GetControlStatusRequest& request, ::mavsdk::rpc::gimbal::GetControlStatusResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::gimbal::GetControlStatusRequest, ::mavsdk::rpc::gimbal::GetControlStatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetControlStatus_, context, request, response);
}

void GimbalService::Stub::async::GetControlStatus(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::GetControlStatusRequest* request, ::mavsdk::rpc::gimbal::GetControlStatusResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::gimbal::GetControlStatusRequest, ::mavsdk::rpc::gimbal::GetControlStatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetControlStatus_, context, request, response, std::move(f));
}

void GimbalService::Stub::async::GetControlStatus(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::GetControlStatusRequest* request, ::mavsdk::rpc::gimbal::GetControlStatusResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetControlStatus_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::GetControlStatusResponse>* GimbalService::Stub::PrepareAsyncGetControlStatusRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::GetControlStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::gimbal::GetControlStatusResponse, ::mavsdk::rpc::gimbal::GetControlStatusRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetControlStatus_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::GetControlStatusResponse>* GimbalService::Stub::AsyncGetControlStatusRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::GetControlStatusRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetControlStatusRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientReader< ::mavsdk::rpc::gimbal::AttitudeResponse>* GimbalService::Stub::SubscribeAttitudeRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SubscribeAttitudeRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::mavsdk::rpc::gimbal::AttitudeResponse>::Create(channel_.get(), rpcmethod_SubscribeAttitude_, context, request);
}

void GimbalService::Stub::async::SubscribeAttitude(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SubscribeAttitudeRequest* request, ::grpc::ClientReadReactor< ::mavsdk::rpc::gimbal::AttitudeResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::mavsdk::rpc::gimbal::AttitudeResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_SubscribeAttitude_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::gimbal::AttitudeResponse>* GimbalService::Stub::AsyncSubscribeAttitudeRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SubscribeAttitudeRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::gimbal::AttitudeResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeAttitude_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::gimbal::AttitudeResponse>* GimbalService::Stub::PrepareAsyncSubscribeAttitudeRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::SubscribeAttitudeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::gimbal::AttitudeResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeAttitude_, context, request, false, nullptr);
}

::grpc::Status GimbalService::Stub::GetAttitude(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::GetAttitudeRequest& request, ::mavsdk::rpc::gimbal::GetAttitudeResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::gimbal::GetAttitudeRequest, ::mavsdk::rpc::gimbal::GetAttitudeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetAttitude_, context, request, response);
}

void GimbalService::Stub::async::GetAttitude(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::GetAttitudeRequest* request, ::mavsdk::rpc::gimbal::GetAttitudeResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::gimbal::GetAttitudeRequest, ::mavsdk::rpc::gimbal::GetAttitudeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetAttitude_, context, request, response, std::move(f));
}

void GimbalService::Stub::async::GetAttitude(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::GetAttitudeRequest* request, ::mavsdk::rpc::gimbal::GetAttitudeResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetAttitude_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::GetAttitudeResponse>* GimbalService::Stub::PrepareAsyncGetAttitudeRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::GetAttitudeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::gimbal::GetAttitudeResponse, ::mavsdk::rpc::gimbal::GetAttitudeRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetAttitude_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::gimbal::GetAttitudeResponse>* GimbalService::Stub::AsyncGetAttitudeRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::gimbal::GetAttitudeRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetAttitudeRaw(context, request, cq);
  result->StartCall();
  return result;
}

GimbalService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GimbalService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GimbalService::Service, ::mavsdk::rpc::gimbal::SetAnglesRequest, ::mavsdk::rpc::gimbal::SetAnglesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](GimbalService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::gimbal::SetAnglesRequest* req,
             ::mavsdk::rpc::gimbal::SetAnglesResponse* resp) {
               return service->SetAngles(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GimbalService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GimbalService::Service, ::mavsdk::rpc::gimbal::SetAngularRatesRequest, ::mavsdk::rpc::gimbal::SetAngularRatesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](GimbalService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::gimbal::SetAngularRatesRequest* req,
             ::mavsdk::rpc::gimbal::SetAngularRatesResponse* resp) {
               return service->SetAngularRates(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GimbalService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GimbalService::Service, ::mavsdk::rpc::gimbal::SetRoiLocationRequest, ::mavsdk::rpc::gimbal::SetRoiLocationResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](GimbalService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::gimbal::SetRoiLocationRequest* req,
             ::mavsdk::rpc::gimbal::SetRoiLocationResponse* resp) {
               return service->SetRoiLocation(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GimbalService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GimbalService::Service, ::mavsdk::rpc::gimbal::TakeControlRequest, ::mavsdk::rpc::gimbal::TakeControlResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](GimbalService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::gimbal::TakeControlRequest* req,
             ::mavsdk::rpc::gimbal::TakeControlResponse* resp) {
               return service->TakeControl(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GimbalService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GimbalService::Service, ::mavsdk::rpc::gimbal::ReleaseControlRequest, ::mavsdk::rpc::gimbal::ReleaseControlResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](GimbalService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::gimbal::ReleaseControlRequest* req,
             ::mavsdk::rpc::gimbal::ReleaseControlResponse* resp) {
               return service->ReleaseControl(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GimbalService_method_names[5],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< GimbalService::Service, ::mavsdk::rpc::gimbal::SubscribeGimbalListRequest, ::mavsdk::rpc::gimbal::GimbalListResponse>(
          [](GimbalService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::gimbal::SubscribeGimbalListRequest* req,
             ::grpc::ServerWriter<::mavsdk::rpc::gimbal::GimbalListResponse>* writer) {
               return service->SubscribeGimbalList(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GimbalService_method_names[6],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< GimbalService::Service, ::mavsdk::rpc::gimbal::SubscribeControlStatusRequest, ::mavsdk::rpc::gimbal::ControlStatusResponse>(
          [](GimbalService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::gimbal::SubscribeControlStatusRequest* req,
             ::grpc::ServerWriter<::mavsdk::rpc::gimbal::ControlStatusResponse>* writer) {
               return service->SubscribeControlStatus(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GimbalService_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GimbalService::Service, ::mavsdk::rpc::gimbal::GetControlStatusRequest, ::mavsdk::rpc::gimbal::GetControlStatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](GimbalService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::gimbal::GetControlStatusRequest* req,
             ::mavsdk::rpc::gimbal::GetControlStatusResponse* resp) {
               return service->GetControlStatus(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GimbalService_method_names[8],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< GimbalService::Service, ::mavsdk::rpc::gimbal::SubscribeAttitudeRequest, ::mavsdk::rpc::gimbal::AttitudeResponse>(
          [](GimbalService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::gimbal::SubscribeAttitudeRequest* req,
             ::grpc::ServerWriter<::mavsdk::rpc::gimbal::AttitudeResponse>* writer) {
               return service->SubscribeAttitude(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GimbalService_method_names[9],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GimbalService::Service, ::mavsdk::rpc::gimbal::GetAttitudeRequest, ::mavsdk::rpc::gimbal::GetAttitudeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](GimbalService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::gimbal::GetAttitudeRequest* req,
             ::mavsdk::rpc::gimbal::GetAttitudeResponse* resp) {
               return service->GetAttitude(ctx, req, resp);
             }, this)));
}

GimbalService::Service::~Service() {
}

::grpc::Status GimbalService::Service::SetAngles(::grpc::ServerContext* context, const ::mavsdk::rpc::gimbal::SetAnglesRequest* request, ::mavsdk::rpc::gimbal::SetAnglesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status GimbalService::Service::SetAngularRates(::grpc::ServerContext* context, const ::mavsdk::rpc::gimbal::SetAngularRatesRequest* request, ::mavsdk::rpc::gimbal::SetAngularRatesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status GimbalService::Service::SetRoiLocation(::grpc::ServerContext* context, const ::mavsdk::rpc::gimbal::SetRoiLocationRequest* request, ::mavsdk::rpc::gimbal::SetRoiLocationResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status GimbalService::Service::TakeControl(::grpc::ServerContext* context, const ::mavsdk::rpc::gimbal::TakeControlRequest* request, ::mavsdk::rpc::gimbal::TakeControlResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status GimbalService::Service::ReleaseControl(::grpc::ServerContext* context, const ::mavsdk::rpc::gimbal::ReleaseControlRequest* request, ::mavsdk::rpc::gimbal::ReleaseControlResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status GimbalService::Service::SubscribeGimbalList(::grpc::ServerContext* context, const ::mavsdk::rpc::gimbal::SubscribeGimbalListRequest* request, ::grpc::ServerWriter< ::mavsdk::rpc::gimbal::GimbalListResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status GimbalService::Service::SubscribeControlStatus(::grpc::ServerContext* context, const ::mavsdk::rpc::gimbal::SubscribeControlStatusRequest* request, ::grpc::ServerWriter< ::mavsdk::rpc::gimbal::ControlStatusResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status GimbalService::Service::GetControlStatus(::grpc::ServerContext* context, const ::mavsdk::rpc::gimbal::GetControlStatusRequest* request, ::mavsdk::rpc::gimbal::GetControlStatusResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status GimbalService::Service::SubscribeAttitude(::grpc::ServerContext* context, const ::mavsdk::rpc::gimbal::SubscribeAttitudeRequest* request, ::grpc::ServerWriter< ::mavsdk::rpc::gimbal::AttitudeResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status GimbalService::Service::GetAttitude(::grpc::ServerContext* context, const ::mavsdk::rpc::gimbal::GetAttitudeRequest* request, ::mavsdk::rpc::gimbal::GetAttitudeResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mavsdk
}  // namespace rpc
}  // namespace gimbal

