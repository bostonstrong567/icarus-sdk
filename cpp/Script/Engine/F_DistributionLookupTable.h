// /Script/Engine.DistributionLookupTable
// size 0x20, declared in Engine/Source/Runtime/Engine/Public/Distributions.h

USTRUCT()
struct FDistributionLookupTable
{
public:
    UPROPERTY() float TimeScale;  // 0x0000, size 0x4
    UPROPERTY() float TimeBias;  // 0x0004, size 0x4
    UPROPERTY() TArray<float> Values;  // 0x0008, size 0x10
    UPROPERTY() uint8 Op;  // 0x0018, size 0x1
    UPROPERTY() uint8 EntryCount;  // 0x0019, size 0x1
    UPROPERTY() uint8 EntryStride;  // 0x001A, size 0x1
    UPROPERTY() uint8 SubEntryStride;  // 0x001B, size 0x1
    UPROPERTY() uint8 LockFlag;  // 0x001C, size 0x1
};
