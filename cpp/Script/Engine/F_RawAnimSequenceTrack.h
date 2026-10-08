// /Script/Engine.RawAnimSequenceTrack
// size 0x30, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimTypes.h

USTRUCT()
struct FRawAnimSequenceTrack
{
    UPROPERTY() TArray<FVector> PosKeys;  // 0x0000, size 0x10
    UPROPERTY() TArray<FQuat> RotKeys;  // 0x0010, size 0x10
    UPROPERTY() TArray<FVector> ScaleKeys;  // 0x0020, size 0x10
};
