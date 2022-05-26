/* Copyright 2020 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "tensorflow/compiler/tf2xla/xla_op_kernel.h"
#include "tensorflow/compiler/tf2xla/xla_op_registry.h"

namespace tensorflow {
namespace {

// TODO: This is only a dummy kernel
class BincountOp : public XlaOpKernel {
 public:
  explicit BincountOp(OpKernelConstruction* ctx) : XlaOpKernel(ctx) {
    DataType dtype;
  }

  void Compile(XlaOpKernelContext* ctx) override {
    xla::XlaOp input = ctx->Input(0);

    ctx->SetOutput(0, input);
  }
};

REGISTER_XLA_OP(Name("Bincount"), BincountOp);

}  // namespace
}  // namespace tensorflow
