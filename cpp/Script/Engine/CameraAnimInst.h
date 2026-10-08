// /Script/Engine.CameraAnimInst
// Derives from: UObject
// size 0x110, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraAnimInst.h

UCLASS(Transient, NotPlaceable)
class UCameraAnimInst : public UObject
{
public:
    UPROPERTY() UCameraAnim* CamAnim;  // 0x0028, size 0x8
    UPROPERTY(Instanced) UInterpGroupInst* InterpGroupInst;  // 0x0030, size 0x8
    UPROPERTY(BlueprintReadWrite) float PlayRate;  // 0x0050, size 0x4
    UPROPERTY(Transient) UInterpTrackMove* MoveTrack;  // 0x0068, size 0x8
    UPROPERTY(Transient) UInterpTrackInstMove* MoveInst;  // 0x0070, size 0x8
    UPROPERTY() ECameraShakePlaySpace PlaySpace;  // 0x0078, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    float CurTime;  // 0x0038
    uint32 : 1 bFinished;  // 0x003C
    uint32 : 1 bStopAutomatically;  // 0x003C, protected
    uint32 : 1 bLooping;  // 0x003C, protected
    uint32 : 1 bBlendingIn;  // 0x003C, protected
    uint32 : 1 bBlendingOut;  // 0x003C, protected
    uint32 : 1 bHasFOVTrack;  // 0x003C, protected
    float BlendInTime;  // 0x0040, protected
    float BlendOutTime;  // 0x0044, protected
    float CurBlendInTime;  // 0x0048, protected
    float CurBlendOutTime;  // 0x004C, protected
    float BasePlayScale;  // 0x0054
    float TransientScaleModifier;  // 0x0058
    float CurrentBlendWeight;  // 0x005C
    float RemainingTime;  // 0x0060, protected
    FMatrix UserPlaySpaceMatrix;  // 0x0080
    FVector LastCameraLoc;  // 0x00C0
    FTransform InitialCamToWorld;  // 0x00D0
    float InitialFOV;  // 0x0100

    UFUNCTION(BlueprintCallable) void SetDuration(float NewDuration);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetScale(float NewDuration);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Stop(bool bImmediate);  // parameters 0x1
};
