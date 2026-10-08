// /Script/Engine.DrawFrustumComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x470, declared in Engine/Source/Runtime/Engine/Classes/Components/DrawFrustumComponent.h

UCLASS(EditInlineNew, MinimalAPI, Config=Engine)
class UDrawFrustumComponent : public UPrimitiveComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor FrustumColor;  // 0x0450, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FrustumAngle;  // 0x0454, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FrustumAspectRatio;  // 0x0458, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FrustumStartDist;  // 0x045C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FrustumEndDist;  // 0x0460, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture* Texture;  // 0x0468, size 0x8
};
