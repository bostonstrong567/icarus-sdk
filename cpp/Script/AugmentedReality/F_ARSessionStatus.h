// /Script/AugmentedReality.ARSessionStatus
// size 0x18, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTypes.h

USTRUCT()
struct FARSessionStatus
{
public:
    UPROPERTY(BlueprintReadOnly) FString AdditionalInfo;  // 0x0000, size 0x10
    UPROPERTY(BlueprintReadOnly) EARSessionStatus Status;  // 0x0010, size 0x1
};
