// /Script/Engine.SkyLight
// Derives from: AInfo > AActor > UObject
// size 0x230, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkyLight.h

UCLASS(Config=Engine)
class ASkyLight : public AInfo
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USkyLightComponent* LightComponent;  // 0x0220, size 0x8
    UPROPERTY(Replicated, ReplicatedUsing) uint8 bEnabled : 1;  // 0x0228, mask 0x01

    UFUNCTION() void OnRep_bEnabled();

    // Virtual functions that start here:
    //   OnRep_bEnabled
};
