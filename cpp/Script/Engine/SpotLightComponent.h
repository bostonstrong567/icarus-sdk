// /Script/Engine.SpotLightComponent
// Derives from: UPointLightComponent > ULocalLightComponent > ULightComponent > ULightComponentBase > USceneComponent > UActorComponent > UObject
// size 0x360, declared in Engine/Source/Runtime/Engine/Classes/Components/SpotLightComponent.h

UCLASS(EditInlineNew, Config=Engine)
class USpotLightComponent : public UPointLightComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float InnerConeAngle;  // 0x0358, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float OuterConeAngle;  // 0x035C, size 0x4

    UFUNCTION(BlueprintCallable) void SetInnerConeAngle(float NewInnerConeAngle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetOuterConeAngle(float NewOuterConeAngle);  // parameters 0x4
};
