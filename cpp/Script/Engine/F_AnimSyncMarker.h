// /Script/Engine.AnimSyncMarker
// size 0xC, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimTypes.h

USTRUCT()
struct FAnimSyncMarker
{
    UPROPERTY(BlueprintReadOnly) FName MarkerName;  // 0x0000, size 0x8
    UPROPERTY(BlueprintReadOnly) float Time;  // 0x0008, size 0x4
};
