// /Script/Engine.SkyLight
// Derives from: AInfo > AActor > UObject
// size 0x230, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkyLight.h

UCLASS(Config=Engine)
class ASkyLight : public AInfo
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Replicated, ReplicatedUsing) uint8 bEnabled : 1;  // 0x0228, mask 0x01
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USkyLightComponent* LightComponent;  // 0x0220, size 0x8
public:
    UFUNCTION() void OnRep_bEnabled();

    // Virtual functions that start here:
    //   OnRep_bEnabled
};
