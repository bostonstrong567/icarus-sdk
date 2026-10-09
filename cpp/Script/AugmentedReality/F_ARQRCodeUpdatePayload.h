// /Script/AugmentedReality.ARQRCodeUpdatePayload
// size 0x70, declared in Engine/Source/Runtime/AugmentedReality/Public/ARComponent.h

USTRUCT()
struct FARQRCodeUpdatePayload
{
public:
    UPROPERTY(BlueprintReadOnly) FARSessionPayload SessionPayload;  // 0x0000, size 0x18
    UPROPERTY(BlueprintReadWrite) FTransform WorldTransform;  // 0x0020, size 0x30
    UPROPERTY(BlueprintReadWrite) FVector Extents;  // 0x0050, size 0xC
    UPROPERTY(BlueprintReadWrite) FString QRCode;  // 0x0060, size 0x10
};
