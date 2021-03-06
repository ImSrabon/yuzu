// Copyright 2018 yuzu emulator team
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "common/logging/log.h"
#include "core/hle/ipc_helpers.h"
#include "core/hle/kernel/hle_ipc.h"
#include "core/hle/service/audio/codecctl.h"

namespace Service::Audio {

CodecCtl::CodecCtl() : ServiceFramework("codecctl") {
    static const FunctionInfo functions[] = {
        {0, nullptr, "InitializeCodecController"},
        {1, nullptr, "FinalizeCodecController"},
        {2, nullptr, "SleepCodecController"},
        {3, nullptr, "WakeCodecController"},
        {4, nullptr, "SetCodecVolume"},
        {5, nullptr, "GetCodecVolumeMax"},
        {6, nullptr, "GetCodecVolumeMin"},
        {7, nullptr, "SetCodecActiveTarget"},
        {8, nullptr, "GetCodecActiveTarget"},
        {9, nullptr, "BindCodecHeadphoneMicJackInterrupt"},
        {10, nullptr, "IsCodecHeadphoneMicJackInserted"},
        {11, nullptr, "ClearCodecHeadphoneMicJackInterrupt"},
        {12, nullptr, "IsCodecDeviceRequested"},
    };
    RegisterHandlers(functions);
}

} // namespace Service::Audio
