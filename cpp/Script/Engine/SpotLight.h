// /Script/Engine.SpotLight
// Derives from: ALight > AActor > UObject
// size 0x238, declared in Engine/Source/Runtime/Engine/Classes/Engine/SpotLight.h

UCLASS(MinimalAPI, Config=Engine)
class ASpotLight : public ALight
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USpotLightComponent* SpotLightComponent;  // 0x0230, size 0x8

    UFUNCTION(BlueprintCallable) void SetInnerConeAngle(float NewInnerConeAngle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetOuterConeAngle(float NewOuterConeAngle);  // parameters 0x4
};
