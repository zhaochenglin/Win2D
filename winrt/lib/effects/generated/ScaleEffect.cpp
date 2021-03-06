// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may
// not use these files except in compliance with the License. You may obtain
// a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations
// under the License.

// This file was automatically generated. Please do not edit it manually.

#include "pch.h"
#include "ScaleEffect.h"

namespace ABI { namespace Microsoft { namespace Graphics { namespace Canvas { namespace Effects
{
    ScaleEffect::ScaleEffect()
        : CanvasEffect(CLSID_D2D1Scale, 5, 1, true)
    {
        // Set default values
        SetProperty<float[2]>(D2D1_SCALE_PROP_SCALE, Numerics::Vector2{ 1, 1 });
        SetProperty<float[2]>(D2D1_SCALE_PROP_CENTER_POINT, Numerics::Vector2{ 0, 0 });
        SetProperty<uint32_t>(D2D1_SCALE_PROP_INTERPOLATION_MODE, D2D1_CONVOLVEMATRIX_SCALE_MODE_LINEAR);
        SetProperty<uint32_t>(D2D1_SCALE_PROP_BORDER_MODE, D2D1_BORDER_MODE_SOFT);
        SetProperty<float>(D2D1_SCALE_PROP_SHARPNESS, 0.0f);
    }

    IMPLEMENT_EFFECT_PROPERTY_WITH_VALIDATION(ScaleEffect,
        Scale,
        float[2],
        Numerics::Vector2,
        D2D1_SCALE_PROP_SCALE,
        (value.X >= 0.01f) && (value.Y >= 0.01f))

    IMPLEMENT_EFFECT_PROPERTY(ScaleEffect,
        CenterPoint,
        float[2],
        Numerics::Vector2,
        D2D1_SCALE_PROP_CENTER_POINT)

    IMPLEMENT_EFFECT_PROPERTY(ScaleEffect,
        InterpolationMode,
        uint32_t,
        CanvasImageInterpolation,
        D2D1_SCALE_PROP_INTERPOLATION_MODE)

    IMPLEMENT_EFFECT_PROPERTY(ScaleEffect,
        BorderMode,
        uint32_t,
        EffectBorderMode,
        D2D1_SCALE_PROP_BORDER_MODE)

    IMPLEMENT_EFFECT_PROPERTY_WITH_VALIDATION(ScaleEffect,
        Sharpness,
        float,
        float,
        D2D1_SCALE_PROP_SHARPNESS,
        (value >= 0.0f) && (value <= 1.0f))

    IMPLEMENT_EFFECT_INPUT_PROPERTY(ScaleEffect,
        Source,
        0)

    ActivatableClass(ScaleEffect);
}}}}}
