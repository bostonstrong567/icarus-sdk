// /Script/Engine.SplineMeshComponent
// Derives from: UStaticMeshComponent > UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x580, declared in Engine/Source/Runtime/Engine/Classes/Components/SplineMeshComponent.h

UCLASS(EditInlineNew, Config=Engine)
class USplineMeshComponent : public UStaticMeshComponent, public IInterface_CollisionDataProvider
{
public:
    UPROPERTY(EditAnywhere) FSplineMeshParams SplineParams;  // 0x04E8, size 0x58
    UPROPERTY(EditAnywhere) FVector SplineUpDir;  // 0x0540, size 0xC
    UPROPERTY(EditAnywhere) float SplineBoundaryMin;  // 0x054C, size 0x4
    UPROPERTY() FGuid CachedMeshBodySetupGuid;  // 0x0550, size 0x10
    UPROPERTY() UBodySetup* BodySetup;  // 0x0560, size 0x8
    UPROPERTY(EditAnywhere) float SplineBoundaryMax;  // 0x0568, size 0x4
    UPROPERTY(EditAnywhere) uint8 bAllowSplineEditingPerInstance : 1;  // 0x056C, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bSmoothInterpRollScale : 1;  // 0x056C, mask 0x02
    UPROPERTY(Transient) uint8 bMeshDirty : 1;  // 0x056C, mask 0x04
    UPROPERTY(EditAnywhere) TEnumAsByte<ESplineMeshAxis> ForwardAxis;  // 0x056D, size 0x1
    UPROPERTY() float VirtualTextureMainPassMaxDrawDistance;  // 0x0570, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetBoundaryMax() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetBoundaryMin() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector2D GetEndOffset() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetEndPosition() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetEndRoll() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector2D GetEndScale() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetEndTangent() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<ESplineMeshAxis> GetForwardAxis() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetSplineUpDir() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector2D GetStartOffset() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetStartPosition() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetStartRoll() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector2D GetStartScale() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetStartTangent() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetEndOffset(FVector2D EndOffset, bool bUpdateMesh);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetEndPosition(FVector EndPos, bool bUpdateMesh);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void SetEndRoll(float EndRoll, bool bUpdateMesh);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetEndScale(FVector2D EndScale, bool bUpdateMesh);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetEndTangent(FVector EndTangent, bool bUpdateMesh);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void SetForwardAxis(TEnumAsByte<ESplineMeshAxis> InForwardAxis, bool bUpdateMesh);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void SetSplineUpDir(const FVector& InSplineUpDir, bool bUpdateMesh);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void SetStartAndEnd(FVector StartPos, FVector StartTangent, FVector EndPos, FVector EndTangent, bool bUpdateMesh);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void SetStartOffset(FVector2D StartOffset, bool bUpdateMesh);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetStartPosition(FVector StartPos, bool bUpdateMesh);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void SetStartRoll(float StartRoll, bool bUpdateMesh);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetStartScale(FVector2D StartScale, bool bUpdateMesh);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetStartTangent(FVector StartTangent, bool bUpdateMesh);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void UpdateMesh();
};
