// ATTENTION: The code in this file is highly EXPERIMENTAL.
// Adventurous users should note that the APIs will probably change.

#pragma once

#include "onnx/common/ir.h"
#include "onnx/onnx_pb.h"

namespace onnx {

void ExportModelProto(onnx::ModelProto* p_m, const std::shared_ptr<Graph>& g);
std::unique_ptr<Graph> ImportModelProto(const onnx::ModelProto& mp);

} // namespace onnx
