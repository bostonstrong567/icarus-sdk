// /Script/Engine.CachedAnimStateData
// size 0x1C, declared in Engine/Source/Runtime/Engine/Public/Animation/CachedAnimData.h

USTRUCT()
struct FCachedAnimStateData
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName StateMachineName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName StateName;  // 0x0008, size 0x8

    // Not reflected:
    int32 MachineIndex;  // 0x0010
    int32 StateIndex;  // 0x0014
    bool bInitialized;  // 0x0018
};
