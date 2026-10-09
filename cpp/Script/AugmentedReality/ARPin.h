// /Script/AugmentedReality.ARPin
// Derives from: UObject
// size 0xF0, declared in Engine/Source/Runtime/AugmentedReality/Public/ARPin.h

UCLASS()
class UARPin : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() UARTrackedGeometry* TrackedGeometry;  // 0x0028, size 0x8
    UPROPERTY(Instanced) USceneComponent* PinnedComponent;  // 0x0030, size 0x8
    UPROPERTY() FTransform LocalToTrackingTransform;  // 0x0040, size 0x30
    UPROPERTY() FTransform LocalToAlignedTrackingTransform;  // 0x0070, size 0x30
    UPROPERTY() EARTrackingState TrackingState;  // 0x00A0, size 0x1
    TWeakPtr<FARSupportInterface,1> ARSystem;  // 0x00A8, not reflected
    FName DebugName;  // 0x00B8, not reflected
    UPROPERTY(BlueprintAssignable) FOnARTrackingStateChanged OnARTrackingStateChanged;  // 0x00C0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnARTransformUpdated OnARTransformUpdated;  // 0x00D0, size 0x10
    void * NativeResource;  // 0x00E0, not reflected
public:
    UFUNCTION() void DebugDraw(UWorld* World, const FLinearColor& Color, float Scale, float PersistForSeconds) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) FName GetDebugName() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetLocalToTrackingTransform() const;  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetLocalToWorldTransform() const;  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) USceneComponent* GetPinnedComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UARTrackedGeometry* GetTrackedGeometry() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) EARTrackingState GetTrackingState() const;  // parameters 0x1

    // Virtual functions that start here:
    //   DebugDraw, InitARPin
};
