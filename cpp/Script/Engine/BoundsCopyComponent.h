// /Script/Engine.BoundsCopyComponent
// Derives from: UActorComponent > UObject
// size 0x120, declared in Engine/Source/Runtime/Engine/Classes/Components/BoundsCopyComponent.h

UCLASS(Config=Engine)
class UBoundsCopyComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere) TSoftObjectPtr<AActor> BoundsSourceActor;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere) bool bUseCollidingComponentsForSourceBounds;  // 0x00D8, size 0x1
    UPROPERTY(EditAnywhere) bool bKeepOwnBoundsScale;  // 0x00D9, size 0x1
    UPROPERTY(EditAnywhere) bool bUseCollidingComponentsForOwnBounds;  // 0x00DA, size 0x1
    UPROPERTY() FTransform PostTransform;  // 0x00E0, size 0x30
    UPROPERTY() bool bCopyXBounds;  // 0x0110, size 0x1
    UPROPERTY() bool bCopyYBounds;  // 0x0111, size 0x1
    UPROPERTY() bool bCopyZBounds;  // 0x0112, size 0x1
};
