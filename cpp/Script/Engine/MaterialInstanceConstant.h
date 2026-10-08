// /Script/Engine.MaterialInstanceConstant
// Derives from: UMaterialInstance > UMaterialInterface > UObject
// size 0x318, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h

UCLASS(MinimalAPI)
class UMaterialInstanceConstant : public UMaterialInstance
{
public:
    UPROPERTY(EditAnywhere) UPhysicalMaterialMask* PhysMaterialMask;  // 0x0310, size 0x8

    UFUNCTION(BlueprintCallable) float K2_GetScalarParameterValue(FName ParameterName);  // parameters 0xC
    UFUNCTION(BlueprintCallable) UTexture* K2_GetTextureParameterValue(FName ParameterName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) FLinearColor K2_GetVectorParameterValue(FName ParameterName);  // parameters 0x18
};
