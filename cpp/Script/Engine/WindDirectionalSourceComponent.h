// /Script/Engine.WindDirectionalSourceComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x220, declared in Engine/Source/Runtime/Engine/Classes/Components/WindDirectionalSourceComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UWindDirectionalSourceComponent : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Strength;  // 0x01F8, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Speed;  // 0x01FC, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float MinGustAmount;  // 0x0200, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float MaxGustAmount;  // 0x0204, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Radius;  // 0x0208, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bPointWind : 1;  // 0x020C, mask 0x01

    // Not reflected: the engine's scripting cannot see these.
    FWindSourceSceneProxy * SceneProxy;  // 0x0210

    UFUNCTION(BlueprintCallable) void SetMaximumGustAmount(float InNewMaxGust);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMinimumGustAmount(float InNewMinGust);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetRadius(float InNewRadius);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSpeed(float InNewSpeed);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetStrength(float InNewStrength);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetWindType(EWindSourceType InNewType);  // parameters 0x1

    // Virtual functions that start here:
    //   CreateSceneProxy
};
