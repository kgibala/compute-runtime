/*
 * Copyright (C) 2018 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 */

#pragma once
#include "runtime/memory_manager/deferrable_deletion.h"

namespace OCLRT {

class GraphicsAllocation;
class MemoryManager;

class DeferrableAllocationDeletion : public DeferrableDeletion {
  public:
    DeferrableAllocationDeletion(MemoryManager &memoryManager, GraphicsAllocation &graphicsAllocation);
    bool apply() override;

  protected:
    MemoryManager &memoryManager;
    GraphicsAllocation &graphicsAllocation;
};
} // namespace OCLRT
