// /Script/Icarus.PlayerEffectsComponent
// Derives from: UActorComponent > UObject
// size 0xB8, declared in Icarus/Source/Icarus/Systems/Weather/PlayerEffectsComponent.h

UCLASS(Config=Engine)
class UPlayerEffectsComponent : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* OwnerOverrideComponent;  // 0x00B0, size 0x8
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void SetOwnerOverride(USceneComponent* OwnerOverride);  // parameters 0x8

    // Virtual functions that start here:
    //   SetOwnerOverride_Implementation
};
