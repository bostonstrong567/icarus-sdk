// /Script/Engine.CachedAnimAssetPlayerData
// size 0x18, declared in Engine/Source/Runtime/Engine/Public/Animation/CachedAnimData.h

USTRUCT()
struct FCachedAnimAssetPlayerData
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName StateMachineName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName StateName;  // 0x0008, size 0x8

    // Not reflected:
    int32 Index;  // 0x0010
    bool bInitialized;  // 0x0014
};
