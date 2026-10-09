// /Script/Engine.CachedAnimStateData
// size 0x1C, declared in Engine/Source/Runtime/Engine/Public/Animation/CachedAnimData.h

USTRUCT()
struct FCachedAnimStateData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName StateMachineName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName StateName;  // 0x0008, size 0x8
private:
    int32 MachineIndex;  // 0x0010, not reflected
    int32 StateIndex;  // 0x0014, not reflected
    bool bInitialized;  // 0x0018, not reflected
};
