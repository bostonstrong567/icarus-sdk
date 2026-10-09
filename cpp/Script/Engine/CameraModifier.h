// /Script/Engine.CameraModifier
// Derives from: UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraModifier.h

UCLASS()
class UCameraModifier : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) uint8 bDebug : 1;  // 0x0028, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bExclusive : 1;  // 0x0028, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 Priority;  // 0x002C, size 0x1
protected:
    uint32 : 1 bDisabled;  // 0x0028, not reflected
    uint32 : 1 bPendingDisable;  // 0x0028, not reflected
    UPROPERTY(Transient, BlueprintReadOnly) APlayerCameraManager* CameraOwner;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float AlphaInTime;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float AlphaOutTime;  // 0x003C, size 0x4
    UPROPERTY(Transient, BlueprintReadOnly) float Alpha;  // 0x0040, size 0x4
public:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void BlueprintModifyCamera(float DeltaTime, FVector ViewLocation, FRotator ViewRotation, float FOV, FVector& NewViewLocation, FRotator& NewViewRotation, float& NewFOV);  // parameters 0x3C
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void BlueprintModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, FPostProcessSettings& PostProcessSettings);  // parameters 0x570
    UFUNCTION(BlueprintCallable) void DisableModifier(bool bImmediate);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void EnableModifier();
    UFUNCTION(BlueprintCallable, BlueprintPure) AActor* GetViewTarget() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsDisabled() const;  // parameters 0x1

    // Virtual functions that start here:
    //   AddedToCamera, DisableModifier, DisplayDebug, EnableModifier, GetTargetAlpha, GetViewTarget
    //   IsDisabled, ModifyCamera, ModifyPostProcess, ProcessViewRotation, ToggleModifier, UpdateAlpha
};
