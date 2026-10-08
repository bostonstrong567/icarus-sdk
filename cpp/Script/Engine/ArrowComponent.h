// /Script/Engine.ArrowComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x470, declared in Engine/Source/Runtime/Engine/Classes/Components/ArrowComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UArrowComponent : public UPrimitiveComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor ArrowColor;  // 0x0450, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ArrowSize;  // 0x0454, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ArrowLength;  // 0x0458, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ScreenSize;  // 0x045C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bIsScreenSizeScaled : 1;  // 0x0460, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bTreatAsASprite : 1;  // 0x0460, mask 0x02

    UFUNCTION(BlueprintCallable) void SetArrowColor(FLinearColor NewColor);  // parameters 0x10

    // Virtual functions that start here:
    //   SetArrowColor
};
