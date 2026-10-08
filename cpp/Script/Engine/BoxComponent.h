// /Script/Engine.BoxComponent
// Derives from: UShapeComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x480, declared in Engine/Source/Runtime/Engine/Classes/Components/BoxComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UBoxComponent : public UShapeComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector BoxExtent;  // 0x0468, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float LineThickness;  // 0x0474, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetScaledBoxExtent() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetUnscaledBoxExtent() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetBoxExtent(FVector InBoxExtent, bool bUpdateOverlaps);  // parameters 0xD
};
