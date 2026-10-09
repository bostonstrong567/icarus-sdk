// /Script/Engine.CachedAnimStateArray
// size 0x18, declared in Engine/Source/Runtime/Engine/Public/Animation/CachedAnimData.h

USTRUCT()
struct FCachedAnimStateArray
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FCachedAnimStateData> States;  // 0x0000, size 0x10
private:
    bool bCheckedValidity;  // 0x0010, not reflected
    bool bCachedIsValid;  // 0x0011, not reflected
};
