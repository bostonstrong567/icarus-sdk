// /Script/Engine.PointLight
// Derives from: ALight > AActor > UObject
// size 0x238, declared in Engine/Source/Runtime/Engine/Classes/Engine/PointLight.h

UCLASS(MinimalAPI, Config=Engine)
class APointLight : public ALight
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UPointLightComponent* PointLightComponent;  // 0x0230, size 0x8

    UFUNCTION(BlueprintCallable) void SetLightFalloffExponent(float NewLightFalloffExponent);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetRadius(float NewRadius);  // parameters 0x4
};
