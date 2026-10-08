// /Script/Icarus.ShelteredModifierComponent
// Derives from: UActorComponent > UObject
// size 0xD0, declared in Icarus/Source/Icarus/Traits/ShelteredComponent.h

UCLASS(Config=Engine)
class UShelteredModifierComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bUseDeferredInitialUpdate;  // 0x00B0, size 0x1
    UPROPERTY() bool bDebugBounds;  // 0x00B1, size 0x1
    UPROPERTY() FBox LastModifierBounds;  // 0x00B4, size 0x1C

    UFUNCTION(BlueprintCallable) void UpdateBounds(bool bForceUpdate);  // parameters 0x1
};
