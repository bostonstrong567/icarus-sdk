// /Script/Engine.CameraAnimInst
// Derives from: UObject
// size 0x110, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraAnimInst.h

UCLASS(Transient, NotPlaceable)
class UCameraAnimInst : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() UCameraAnim* CamAnim;  // 0x0028, size 0x8
    float CurTime;  // 0x0038, not reflected
    uint32 : 1 bFinished;  // 0x003C, not reflected
    UPROPERTY(BlueprintReadWrite) float PlayRate;  // 0x0050, size 0x4
    float BasePlayScale;  // 0x0054, not reflected
    float TransientScaleModifier;  // 0x0058, not reflected
    float CurrentBlendWeight;  // 0x005C, not reflected
    UPROPERTY(Transient) UInterpTrackMove* MoveTrack;  // 0x0068, size 0x8
    UPROPERTY(Transient) UInterpTrackInstMove* MoveInst;  // 0x0070, size 0x8
    UPROPERTY() ECameraShakePlaySpace PlaySpace;  // 0x0078, size 0x1
    FMatrix UserPlaySpaceMatrix;  // 0x0080, not reflected
    FVector LastCameraLoc;  // 0x00C0, not reflected
    FTransform InitialCamToWorld;  // 0x00D0, not reflected
    float InitialFOV;  // 0x0100, not reflected
protected:
    uint32 : 1 bBlendingIn;  // 0x003C, not reflected
    uint32 : 1 bBlendingOut;  // 0x003C, not reflected
    uint32 : 1 bHasFOVTrack;  // 0x003C, not reflected
    uint32 : 1 bLooping;  // 0x003C, not reflected
    uint32 : 1 bStopAutomatically;  // 0x003C, not reflected
    float BlendInTime;  // 0x0040, not reflected
    float BlendOutTime;  // 0x0044, not reflected
    float CurBlendInTime;  // 0x0048, not reflected
    float CurBlendOutTime;  // 0x004C, not reflected
    float RemainingTime;  // 0x0060, not reflected
private:
    UPROPERTY(Instanced) UInterpGroupInst* InterpGroupInst;  // 0x0030, size 0x8
public:
    UFUNCTION(BlueprintCallable) void SetDuration(float NewDuration);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetScale(float NewDuration);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Stop(bool bImmediate);  // parameters 0x1
};
