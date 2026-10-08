// /Script/AugmentedReality.ARTrackedGeometry
// Derives from: UObject
// size 0x100, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTrackable.h

UCLASS()
class UARTrackedGeometry : public UObject
{
public:
    UPROPERTY(BlueprintReadOnly) FGuid UniqueId;  // 0x0028, size 0x10
    UPROPERTY() FTransform LocalToTrackingTransform;  // 0x0040, size 0x30
    UPROPERTY() FTransform LocalToAlignedTrackingTransform;  // 0x0070, size 0x30
    UPROPERTY() EARTrackingState TrackingState;  // 0x00A0, size 0x1
    UPROPERTY(Transient, Instanced) UMRMeshComponent* UnderlyingMesh;  // 0x00B0, size 0x8
    UPROPERTY() EARObjectClassification ObjectClassification;  // 0x00B8, size 0x1
    UPROPERTY() EARSpatialMeshUsageFlags SpatialMeshUsageFlags;  // 0x00B9, size 0x1
    UPROPERTY() int32 LastUpdateFrameNumber;  // 0x00D0, size 0x4
    UPROPERTY() FName DebugName;  // 0x00E0, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TUniquePtr<IARRef,TDefaultDelete<IARRef> > NativeResource;  // 0x00A8, protected
    TWeakPtr<FARSupportInterface,1> ARSystem;  // 0x00C0, private
    double LastUpdateTimestamp;  // 0x00D8, private
    FString AnchorName;  // 0x00E8, private

    UFUNCTION(BlueprintCallable, BlueprintPure) FName GetDebugName() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetLastUpdateFrameNumber() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetLastUpdateTimestamp() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetLocalToTrackingTransform() const;  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetLocalToWorldTransform() const;  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) EARObjectClassification GetObjectClassification() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EARTrackingState GetTrackingState() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) UMRMeshComponent* GetUnderlyingMesh();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasSpatialMeshUsageFlag(EARSpatialMeshUsageFlags InFlag) const;  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsTracked() const;  // parameters 0x1

    // Virtual functions that start here:
    //   DebugDraw
};
