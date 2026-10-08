// /Script/Foliage.FoliageType
// Derives from: UObject
// size 0x3B0, declared in Engine/Source/Runtime/Foliage/Public/FoliageType.h

UCLASS(Abstract, EditInlineNew, MinimalAPI)
class UFoliageType : public UObject
{
public:
    UPROPERTY() FGuid UpdateGuid;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere) float Density;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) float DensityAdjustmentFactor;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere) float Radius;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) bool bSingleInstanceModeOverrideRadius;  // 0x0044, size 0x1
    UPROPERTY(EditAnywhere) float SingleInstanceModeRadius;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) EFoliageScaling Scaling;  // 0x004C, size 0x1
    UPROPERTY(EditAnywhere) FFloatInterval ScaleX;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere) FFloatInterval ScaleY;  // 0x0058, size 0x8
    UPROPERTY(EditAnywhere) FFloatInterval ScaleZ;  // 0x0060, size 0x8
    UPROPERTY(EditAnywhere) FFoliageVertexColorChannelMask VertexColorMaskByChannel;  // 0x0068, size 0xC
    UPROPERTY(Deprecated) TEnumAsByte<FoliageVertexColorMask> VertexColorMask;  // 0x0098, size 0x1
    UPROPERTY(Deprecated) float VertexColorMaskThreshold;  // 0x009C, size 0x4
    UPROPERTY(Deprecated) uint8 VertexColorMaskInvert : 1;  // 0x00A0, mask 0x01
    UPROPERTY(EditAnywhere) FFloatInterval ZOffset;  // 0x00A4, size 0x8
    UPROPERTY(EditAnywhere) uint8 AlignToNormal : 1;  // 0x00AC, mask 0x01
    UPROPERTY(EditAnywhere) float AlignMaxAngle;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere) uint8 RandomYaw : 1;  // 0x00B4, mask 0x01
    UPROPERTY(EditAnywhere) float RandomPitchAngle;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere) FFloatInterval GroundSlopeAngle;  // 0x00BC, size 0x8
    UPROPERTY(EditAnywhere) FFloatInterval Height;  // 0x00C4, size 0x8
    UPROPERTY(EditAnywhere) TArray<FName> LandscapeLayers;  // 0x00D0, size 0x10
    UPROPERTY(EditAnywhere) float MinimumLayerWeight;  // 0x00E0, size 0x4
    UPROPERTY(EditAnywhere) TArray<FName> ExclusionLandscapeLayers;  // 0x00E8, size 0x10
    UPROPERTY(EditAnywhere) float MinimumExclusionLayerWeight;  // 0x00F8, size 0x4
    UPROPERTY(Deprecated) FName LandscapeLayer;  // 0x00FC, size 0x8
    UPROPERTY(EditAnywhere) uint8 CollisionWithWorld : 1;  // 0x0104, mask 0x01
    UPROPERTY(EditAnywhere) FVector CollisionScale;  // 0x0108, size 0xC
    UPROPERTY() FBoxSphereBounds MeshBounds;  // 0x0114, size 0x1C
    UPROPERTY() FVector LowBoundOriginRadius;  // 0x0130, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EComponentMobility> Mobility;  // 0x013C, size 0x1
    UPROPERTY(EditAnywhere) FInt32Interval CullDistance;  // 0x0140, size 0x8
    UPROPERTY(Deprecated) uint8 bEnableStaticLighting : 1;  // 0x0148, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 CastShadow : 1;  // 0x0148, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAffectDynamicIndirectLighting : 1;  // 0x0148, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAffectDistanceFieldLighting : 1;  // 0x0148, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastDynamicShadow : 1;  // 0x0148, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastStaticShadow : 1;  // 0x0148, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastShadowAsTwoSided : 1;  // 0x0148, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bReceivesDecals : 1;  // 0x0148, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bOverrideLightMapRes : 1;  // 0x0149, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 OverriddenLightMapRes;  // 0x014C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ELightmapType LightmapType;  // 0x0150, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUseAsOccluder : 1;  // 0x0154, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bVisibleInRayTracing : 1;  // 0x0158, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bEvaluateWorldPositionOffset : 1;  // 0x0158, mask 0x02
    UPROPERTY(EditAnywhere) FBodyInstance BodyInstance;  // 0x0160, size 0x158
    UPROPERTY(EditAnywhere) TEnumAsByte<EHasCustomNavigableGeometry> CustomNavigableGeometry;  // 0x02B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLightingChannels LightingChannels;  // 0x02B9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bRenderCustomDepth : 1;  // 0x02BC, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ERendererStencilMask CustomDepthStencilWriteMask;  // 0x02C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 CustomDepthStencilValue;  // 0x02C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 TranslucencySortPriority;  // 0x02C8, size 0x4
    UPROPERTY(EditAnywhere) float CollisionRadius;  // 0x02CC, size 0x4
    UPROPERTY(EditAnywhere) float ShadeRadius;  // 0x02D0, size 0x4
    UPROPERTY(EditAnywhere) int32 NumSteps;  // 0x02D4, size 0x4
    UPROPERTY(EditAnywhere) float InitialSeedDensity;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere) float AverageSpreadDistance;  // 0x02DC, size 0x4
    UPROPERTY(EditAnywhere) float SpreadVariance;  // 0x02E0, size 0x4
    UPROPERTY(EditAnywhere) int32 SeedsPerStep;  // 0x02E4, size 0x4
    UPROPERTY(EditAnywhere) int32 DistributionSeed;  // 0x02E8, size 0x4
    UPROPERTY(EditAnywhere) float MaxInitialSeedOffset;  // 0x02EC, size 0x4
    UPROPERTY(EditAnywhere) bool bCanGrowInShade;  // 0x02F0, size 0x1
    UPROPERTY(EditAnywhere) bool bSpawnsInShade;  // 0x02F1, size 0x1
    UPROPERTY(EditAnywhere) float MaxInitialAge;  // 0x02F4, size 0x4
    UPROPERTY(EditAnywhere) float MaxAge;  // 0x02F8, size 0x4
    UPROPERTY(EditAnywhere) float OverlapPriority;  // 0x02FC, size 0x4
    UPROPERTY(EditAnywhere) FFloatInterval ProceduralScale;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve ScaleCurve;  // 0x0308, size 0x88
    UPROPERTY(Transient) int32 ChangeCount;  // 0x0390, size 0x4
    UPROPERTY(EditAnywhere) uint8 ReapplyDensity : 1;  // 0x0394, mask 0x01
    UPROPERTY(EditAnywhere) uint8 ReapplyRadius : 1;  // 0x0394, mask 0x02
    UPROPERTY(EditAnywhere) uint8 ReapplyAlignToNormal : 1;  // 0x0394, mask 0x04
    UPROPERTY(EditAnywhere) uint8 ReapplyRandomYaw : 1;  // 0x0394, mask 0x08
    UPROPERTY(EditAnywhere) uint8 ReapplyScaling : 1;  // 0x0394, mask 0x10
    UPROPERTY(EditAnywhere) uint8 ReapplyScaleX : 1;  // 0x0394, mask 0x20
    UPROPERTY(EditAnywhere) uint8 ReapplyScaleY : 1;  // 0x0394, mask 0x40
    UPROPERTY(EditAnywhere) uint8 ReapplyScaleZ : 1;  // 0x0394, mask 0x80
    UPROPERTY(EditAnywhere) uint8 ReapplyRandomPitchAngle : 1;  // 0x0395, mask 0x01
    UPROPERTY(EditAnywhere) uint8 ReapplyGroundSlope : 1;  // 0x0395, mask 0x02
    UPROPERTY(EditAnywhere) uint8 ReapplyHeight : 1;  // 0x0395, mask 0x04
    UPROPERTY(EditAnywhere) uint8 ReapplyLandscapeLayers : 1;  // 0x0395, mask 0x08
    UPROPERTY(EditAnywhere) uint8 ReapplyZOffset : 1;  // 0x0395, mask 0x10
    UPROPERTY(EditAnywhere) uint8 ReapplyCollisionWithWorld : 1;  // 0x0395, mask 0x20
    UPROPERTY(EditAnywhere) uint8 ReapplyVertexColorMask : 1;  // 0x0395, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bEnableDensityScaling : 1;  // 0x0395, mask 0x80
    UPROPERTY(EditAnywhere) uint8 bEnableDiscardOnLoad : 1;  // 0x0396, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures;  // 0x0398, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 VirtualTextureCullMips;  // 0x03A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;  // 0x03AC, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCullDistance(int32& Min, int32& Max) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetCullDistance(const int32& Min, const int32& Max);  // parameters 0x8

    // Virtual functions that start here:
    //   GetSource, IsNotAssetOrBlueprint
};
