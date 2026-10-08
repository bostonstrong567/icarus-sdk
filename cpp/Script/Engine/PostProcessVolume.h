// /Script/Engine.PostProcessVolume
// Derives from: AVolume > ABrush > AActor > UObject
// size 0x7D0, declared in Engine/Source/Runtime/Engine/Classes/Engine/PostProcessVolume.h

UCLASS(Config=Engine)
class APostProcessVolume : public AVolume, public IInterface_PostProcessVolume
{
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FPostProcessSettings Settings;  // 0x0260, size 0x560
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Priority;  // 0x07C0, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float BlendRadius;  // 0x07C4, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float BlendWeight;  // 0x07C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnabled : 1;  // 0x07CC, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUnbound : 1;  // 0x07CC, mask 0x02

    UFUNCTION(BlueprintCallable) void AddOrUpdateBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight);  // parameters 0x14
};
