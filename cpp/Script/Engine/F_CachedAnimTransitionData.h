// /Script/Engine.CachedAnimTransitionData
// size 0x24, declared in Engine/Source/Runtime/Engine/Public/Animation/CachedAnimData.h

USTRUCT()
struct FCachedAnimTransitionData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName StateMachineName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName FromStateName;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName ToStateName;  // 0x0010, size 0x8
private:
    int32 MachineIndex;  // 0x0018, not reflected
    int32 TransitionIndex;  // 0x001C, not reflected
    bool bInitialized;  // 0x0020, not reflected
};
