/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */
#include <Atom/RHI.Reflect/StreamingImagePoolDescriptor.h>
#include <AzCore/Serialization/SerializeContext.h>

namespace AZ::RHI
{
    void StreamingImagePoolDescriptor::Reflect(AZ::ReflectContext* context)
    {
        if (SerializeContext* serializeContext = azrtti_cast<SerializeContext*>(context))
        {
            serializeContext->Class<StreamingImagePoolDescriptor, ResourcePoolDescriptor>()
                ->Version(1);
        }
    }
}
