// /Script/Landscape.LandscapeComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x670, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeComponent.h

UCLASS(MinimalAPI, Config=Engine)
class ULandscapeComponent : public UPrimitiveComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 SectionBaseX;  // 0x0450, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 SectionBaseY;  // 0x0454, size 0x4
    UPROPERTY() int32 ComponentSizeQuads;  // 0x0458, size 0x4
    UPROPERTY() int32 SubsectionSizeQuads;  // 0x045C, size 0x4
    UPROPERTY() int32 NumSubsections;  // 0x0460, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* OverrideMaterial;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* OverrideHoleMaterial;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere) TArray<FLandscapeComponentMaterialOverride> OverrideMaterials;  // 0x0478, size 0x10
    UPROPERTY() TArray<UMaterialInstanceConstant*> MaterialInstances;  // 0x0488, size 0x10
    UPROPERTY(Transient) TArray<UMaterialInstanceDynamic*> MaterialInstancesDynamic;  // 0x0498, size 0x10
    UPROPERTY() TArray<int8> LODIndexToMaterialIndex;  // 0x04A8, size 0x10
    UPROPERTY() TArray<int8> MaterialIndexToDisabledTessellationMaterial;  // 0x04B8, size 0x10
    UPROPERTY() UTexture2D* XYOffsetmapTexture;  // 0x04C8, size 0x8
    UPROPERTY() FVector4 WeightmapScaleBias;  // 0x04D0, size 0x10
    UPROPERTY() float WeightmapSubsectionOffset;  // 0x04E0, size 0x4
    UPROPERTY() FVector4 HeightmapScaleBias;  // 0x04F0, size 0x10
    UPROPERTY() FBox CachedLocalBox;  // 0x0500, size 0x1C
    UPROPERTY(Instanced) TLazyObjectPtr<ULandscapeHeightfieldCollisionComponent> CollisionComponent;  // 0x051C, size 0x1C
    UPROPERTY() FGuid MapBuildDataId;  // 0x0568, size 0x10
    UPROPERTY(Deprecated) TArray<FGuid> IrrelevantLights;  // 0x0578, size 0x10
    UPROPERTY(EditAnywhere) int32 CollisionMipLevel;  // 0x0588, size 0x4
    UPROPERTY(EditAnywhere) int32 SimpleCollisionMipLevel;  // 0x058C, size 0x4
    UPROPERTY(EditAnywhere) float NegativeZBoundsExtension;  // 0x0590, size 0x4
    UPROPERTY(EditAnywhere) float PositiveZBoundsExtension;  // 0x0594, size 0x4
    UPROPERTY(EditAnywhere) float StaticLightingResolution;  // 0x0598, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 ForcedLOD;  // 0x059C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 LODBias;  // 0x05A0, size 0x4
    UPROPERTY() FGuid StateId;  // 0x05A4, size 0x10
    UPROPERTY() FGuid BakedTextureMaterialGuid;  // 0x05B4, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UTexture2D* GIBakedBaseColorTexture;  // 0x05C8, size 0x8
    UPROPERTY() uint8 MobileBlendableLayerMask;  // 0x05D0, size 0x1
    UPROPERTY(Deprecated) UMaterialInterface* MobileMaterialInterface;  // 0x05D8, size 0x8
    UPROPERTY() TArray<UMaterialInterface*> MobileMaterialInterfaces;  // 0x05E0, size 0x10
    UPROPERTY() TArray<UTexture2D*> MobileWeightmapTextures;  // 0x05F0, size 0x10
    FLandscapeComponentDerivedData PlatformData;  // 0x0600, not reflected
    TSharedRef<FLandscapeComponentGrassData,1> GrassData;  // 0x0640, not reflected
    TArray<FBox,TSizedDefaultAllocator<32> > ActiveExcludedBoxes;  // 0x0650, not reflected
    uint32 ChangeTag;  // 0x0660, not reflected
private:
    UPROPERTY() UTexture2D* HeightmapTexture;  // 0x0538, size 0x8
    UPROPERTY() TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations;  // 0x0540, size 0x10
    UPROPERTY() TArray<UTexture2D*> WeightmapTextures;  // 0x0550, size 0x10
    UPROPERTY() ULandscapeLODStreamingProxy* LODStreamingProxy;  // 0x0560, size 0x8
public:
    UFUNCTION(BlueprintCallable) float EditorGetPaintLayerWeightAtLocation(const FVector& InLocation, ULandscapeLayerInfoObject* PaintLayer);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) float EditorGetPaintLayerWeightByNameAtLocation(const FVector& InLocation, FName InPaintLayerName);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32 InIndex) const;  // parameters 0x10
};
