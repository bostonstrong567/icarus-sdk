// /Script/LiveLinkComponents.LiveLinkTransformControllerData
// size 0x6, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLinkComponents/Public/Controllers/LiveLinkTransformController.h

USTRUCT()
struct FLiveLinkTransformControllerData
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bWorldTransform;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) bool bUseLocation;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere) bool bUseRotation;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere) bool bUseScale;  // 0x0003, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bSweep;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bTeleport;  // 0x0005, size 0x1
};
