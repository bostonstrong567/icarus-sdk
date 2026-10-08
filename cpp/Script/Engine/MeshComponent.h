// /Script/Engine.MeshComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x480, declared in Engine/Source/Runtime/Engine/Classes/Components/MeshComponent.h

UCLASS(Abstract, Config=Engine)
class UMeshComponent : public UPrimitiveComponent
{
public:
    UPROPERTY(EditAnywhere) TArray<UMaterialInterface*> OverrideMaterials;  // 0x0450, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bEnableMaterialParameterCaching : 1;  // 0x0470, mask 0x01

    // Not reflected: the engine's scripting cannot see these.
    TSortedMap<FName,UMeshComponent::FMaterialParameterCache,TSizedDefaultAllocator<32>,FNameFastLess> MaterialParameterCache;  // 0x0460, protected
    uint8 : 1 bCachedMaterialParameterIndicesAreDirty;  // 0x0470, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetMaterialIndex(FName MaterialSlotName) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FName> GetMaterialSlotNames() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UMaterialInterface*> GetMaterials() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsMaterialSlotNameValid(FName MaterialSlotName) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) void PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32 CinematicTextureGroups);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetScalarParameterValueOnMaterials(FName ParameterName, float ParameterValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetVectorParameterValueOnMaterials(FName ParameterName, FVector ParameterValue);  // parameters 0x14

    // Virtual functions that start here:
    //   GetMaterialIndex, GetMaterialSlotNames, GetMaterialStreamingData, GetMaterials
    //   GetNumOverrideMaterials, IsMaterialSlotNameValid, PrestreamTextures, RegisterLODStreamingCallback
    //   SetTextureForceResidentFlag
};
