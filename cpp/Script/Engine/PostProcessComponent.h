// /Script/Engine.PostProcessComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x770, declared in Engine/Source/Runtime/Engine/Classes/Components/PostProcessComponent.h

UCLASS(EditInlineNew, MinimalAPI, Config=Engine)
class UPostProcessComponent : public USceneComponent, public IInterface_PostProcessVolume
{
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FPostProcessSettings Settings;  // 0x0200, size 0x560
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Priority;  // 0x0760, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float BlendRadius;  // 0x0764, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float BlendWeight;  // 0x0768, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnabled : 1;  // 0x076C, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUnbound : 1;  // 0x076C, mask 0x02

    UFUNCTION(BlueprintCallable) void AddOrUpdateBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight);  // parameters 0x14
};
