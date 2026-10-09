// /Script/Engine.MaterialInstanceDynamic
// Derives from: UMaterialInstance > UMaterialInterface > UObject
// size 0x360, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h

UCLASS()
class UMaterialInstanceDynamic : public UMaterialInstance
{
public:
    TMap<FName,TArray<FName,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32> >,0> > RenamedTextures;  // 0x0310, not reflected

    UFUNCTION() void CopyInterpParameters(UMaterialInstance* Source);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CopyParameterOverrides(UMaterialInstance* MaterialInstance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void K2_CopyMaterialInstanceParameters(UMaterialInterface* Source, bool bQuickParametersOnly);  // parameters 0x9
    UFUNCTION(BlueprintCallable) float K2_GetScalarParameterValue(FName ParameterName);  // parameters 0xC
    UFUNCTION(BlueprintCallable) float K2_GetScalarParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo);  // parameters 0x14
    UFUNCTION(BlueprintCallable) UTexture* K2_GetTextureParameterValue(FName ParameterName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) UTexture* K2_GetTextureParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo);  // parameters 0x18
    UFUNCTION(BlueprintCallable) FLinearColor K2_GetVectorParameterValue(FName ParameterName);  // parameters 0x18
    UFUNCTION(BlueprintCallable) FLinearColor K2_GetVectorParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void K2_InterpolateMaterialInstanceParams(UMaterialInstance* SourceA, UMaterialInstance* SourceB, float Alpha);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetScalarParameterValue(FName ParameterName, float Value);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetScalarParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo, float Value);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetTextureParameterValue(FName ParameterName, UTexture* Value);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetTextureParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo, UTexture* Value);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetVectorParameterValue(FName ParameterName, FLinearColor Value);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetVectorParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo, FLinearColor Value);  // parameters 0x20
};
