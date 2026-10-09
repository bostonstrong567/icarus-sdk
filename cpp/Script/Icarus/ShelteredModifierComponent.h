// /Script/Icarus.ShelteredModifierComponent
// Derives from: UActorComponent > UObject
// size 0xD0, declared in Icarus/Source/Icarus/Traits/ShelteredComponent.h

UCLASS(Config=Engine)
class UShelteredModifierComponent : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bUseDeferredInitialUpdate;  // 0x00B0, size 0x1
private:
    UPROPERTY() bool bDebugBounds;  // 0x00B1, size 0x1
    UPROPERTY() FBox LastModifierBounds;  // 0x00B4, size 0x1C
public:
    UFUNCTION(BlueprintCallable) void UpdateBounds(bool bForceUpdate);  // parameters 0x1
};
