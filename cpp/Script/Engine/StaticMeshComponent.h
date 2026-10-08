// /Script/Engine.StaticMeshComponent
// Derives from: UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x4E0, declared in Engine/Source/Runtime/Engine/Classes/Components/StaticMeshComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UStaticMeshComponent : public UMeshComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 ForcedLodModel;  // 0x0478, size 0x4
    UPROPERTY(Deprecated) int32 PreviousLODLevel;  // 0x047C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 MinLOD;  // 0x0480, size 0x4
    UPROPERTY() int32 SubDivisionStepSize;  // 0x0484, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) UStaticMesh* StaticMesh;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FColor WireframeColorOverride;  // 0x0490, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEvaluateWorldPositionOffset : 1;  // 0x0494, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bOverrideWireframeColor : 1;  // 0x0494, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bOverrideMinLOD : 1;  // 0x0494, mask 0x04
    UPROPERTY(Transient) uint8 bOverrideNavigationExport : 1;  // 0x0494, mask 0x08
    UPROPERTY(Transient) uint8 bForceNavigationObstacle : 1;  // 0x0494, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bDisallowMeshPaintPerInstance : 1;  // 0x0494, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bIgnoreInstanceForTextureStreaming : 1;  // 0x0494, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bOverrideLightMapRes : 1;  // 0x0494, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastDistanceFieldIndirectShadow : 1;  // 0x0495, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bOverrideDistanceFieldSelfShadowBias : 1;  // 0x0495, mask 0x02
    UPROPERTY() uint8 bUseSubDivisions : 1;  // 0x0495, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bUseDefaultCollision : 1;  // 0x0495, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bReverseCulling : 1;  // 0x0495, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 OverriddenLightMapRes;  // 0x0498, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float DistanceFieldIndirectShadowMinVisibility;  // 0x049C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float DistanceFieldSelfShadowBias;  // 0x04A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StreamingDistanceMultiplier;  // 0x04A4, size 0x4
    UPROPERTY(Transient) TArray<FStaticMeshComponentLODInfo> LODData;  // 0x04A8, size 0x10
    UPROPERTY() TArray<FStreamingTextureBuildInfo> StreamingTextureData;  // 0x04B8, size 0x10
    UPROPERTY(EditAnywhere) FLightmassPrimitiveSettings LightmassSettings;  // 0x04C8, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetLocalBounds(FVector& Min, FVector& Max) const;  // parameters 0x18
    UFUNCTION() void OnRep_StaticMesh(UStaticMesh* OldStaticMesh);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetDistanceFieldSelfShadowBias(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetEvaluateWorldPositionOffsetInRayTracing(bool NewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetForcedLodModel(int32 NewForcedLodModel);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetReverseCulling(bool ReverseCulling);  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool SetStaticMesh(UStaticMesh* NewMesh);  // parameters 0x9

    // Virtual functions that start here:
    //   AllocateStaticLightingMesh, GetEstimatedLightAndShadowMapMemoryUsage
    //   GetEstimatedLightMapResolution, GetTextureLightAndShadowMapMemoryUsage
    //   GetTextureStreamingTransformScale, HasLightmapTextureCoordinates, SetStaticLightingMapping
    //   SetStaticMesh, SupportsDefaultCollision, SupportsDitheredLODTransitions, UsesTextureLightmaps
};
