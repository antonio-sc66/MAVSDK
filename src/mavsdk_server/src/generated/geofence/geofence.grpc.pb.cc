// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: geofence/geofence.proto

#include "geofence/geofence.pb.h"
#include "geofence/geofence.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace mavsdk {
namespace rpc {
namespace geofence {

static const char* GeofenceService_method_names[] = {
  "/mavsdk.rpc.geofence.GeofenceService/UploadGeofence",
};

std::unique_ptr< GeofenceService::Stub> GeofenceService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< GeofenceService::Stub> stub(new GeofenceService::Stub(channel));
  return stub;
}

GeofenceService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_UploadGeofence_(GeofenceService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status GeofenceService::Stub::UploadGeofence(::grpc::ClientContext* context, const ::mavsdk::rpc::geofence::UploadGeofenceRequest& request, ::mavsdk::rpc::geofence::UploadGeofenceResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::geofence::UploadGeofenceRequest, ::mavsdk::rpc::geofence::UploadGeofenceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_UploadGeofence_, context, request, response);
}

void GeofenceService::Stub::experimental_async::UploadGeofence(::grpc::ClientContext* context, const ::mavsdk::rpc::geofence::UploadGeofenceRequest* request, ::mavsdk::rpc::geofence::UploadGeofenceResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::geofence::UploadGeofenceRequest, ::mavsdk::rpc::geofence::UploadGeofenceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_UploadGeofence_, context, request, response, std::move(f));
}

void GeofenceService::Stub::experimental_async::UploadGeofence(::grpc::ClientContext* context, const ::mavsdk::rpc::geofence::UploadGeofenceRequest* request, ::mavsdk::rpc::geofence::UploadGeofenceResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_UploadGeofence_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::geofence::UploadGeofenceResponse>* GeofenceService::Stub::PrepareAsyncUploadGeofenceRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::geofence::UploadGeofenceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::geofence::UploadGeofenceResponse, ::mavsdk::rpc::geofence::UploadGeofenceRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_UploadGeofence_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::geofence::UploadGeofenceResponse>* GeofenceService::Stub::AsyncUploadGeofenceRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::geofence::UploadGeofenceRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncUploadGeofenceRaw(context, request, cq);
  result->StartCall();
  return result;
}

GeofenceService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GeofenceService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GeofenceService::Service, ::mavsdk::rpc::geofence::UploadGeofenceRequest, ::mavsdk::rpc::geofence::UploadGeofenceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](GeofenceService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::geofence::UploadGeofenceRequest* req,
             ::mavsdk::rpc::geofence::UploadGeofenceResponse* resp) {
               return service->UploadGeofence(ctx, req, resp);
             }, this)));
}

GeofenceService::Service::~Service() {
}

::grpc::Status GeofenceService::Service::UploadGeofence(::grpc::ServerContext* context, const ::mavsdk::rpc::geofence::UploadGeofenceRequest* request, ::mavsdk::rpc::geofence::UploadGeofenceResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mavsdk
}  // namespace rpc
}  // namespace geofence
