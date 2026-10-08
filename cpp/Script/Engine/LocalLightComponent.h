// /Script/Engine.LocalLightComponent
// Derives from: ULightComponent > ULightComponentBase > USceneComponent > UActorComponent > UObject
// size 0x340, declared in Engine/Source/Runtime/Engine/Classes/Components/LocalLightComponent.h

UCLASS(Abstract, EditInlineNew, Config=Engine)
class ULocalLightComponent : public ULightComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ELightUnits IntensityUnits;  // 0x0328, size 0x1
    UPROPERTY(Deprecated) float Radius;  // 0x032C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float AttenuationRadius;  // 0x0330, size 0x4
    UPROPERTY(EditAnywhere) FLightmassPointLightSettings LightmassSettings;  // 0x0334, size 0xC

    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetUnitsConversionFactor(ELightUnits SrcUnits, ELightUnits TargetUnits, float CosHalfConeAngle);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetAttenuationRadius(float NewRadius);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetIntensityUnits(ELightUnits NewIntensityUnits);  // parameters 0x1
};
