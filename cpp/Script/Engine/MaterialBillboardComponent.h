// /Script/Engine.MaterialBillboardComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x460, declared in Engine/Source/Runtime/Engine/Classes/Components/MaterialBillboardComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UMaterialBillboardComponent : public UPrimitiveComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FMaterialSpriteElement> Elements;  // 0x0450, size 0x10

    UFUNCTION(BlueprintCallable) void AddElement(UMaterialInterface* Material, UCurveFloat* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, UCurveFloat* DistanceToSizeCurve);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void SetElements(const TArray<FMaterialSpriteElement>& NewElements);  // parameters 0x10
};
