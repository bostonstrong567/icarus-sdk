// /Script/Engine.AnimSlotInfo
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FAnimSlotInfo
{
    UPROPERTY() FName SlotName;  // 0x0000, size 0x8
    UPROPERTY() TArray<float> ChannelWeights;  // 0x0008, size 0x10
};
