#ifndef _VKTSPARSERESOURCESBUFFERREBIND_HPP
#define _VKTSPARSERESOURCESBUFFERREBIND_HPP
/*------------------------------------------------------------------------
 * Vulkan Conformance Tests
 * ------------------------
 *
 * Copyright (c) 2023 The Khronos Group Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *//*!
 * \file  vktSparseResourcesBufferRebind.hpp
 * \brief Sparse buffer memory rebind tests
 *//*--------------------------------------------------------------------*/

#include "tcuDefs.hpp"
#include "vktTestCase.hpp"

namespace vkt
{
namespace sparse
{

void addBufferSparseRebindTests(tcu::TestCaseGroup* group, const bool useDeviceGroups);

} // sparse
} // vkt

#endif // _VKTSPARSERESOURCESBUFFERREBIND_HPP
