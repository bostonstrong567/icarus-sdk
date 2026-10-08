// /Game/ASS/DPS/SK_DPS_Respawn_Pod_Skeleton_AnimBP.SK_DPS_Respawn_Pod_Skeleton_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x690, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_DPS_Respawn_Pod_Skeleton_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x02F8, size 0x368
    UPROPERTY() float __CustomProperty_DoorOpenPosition_4E7C5A6944FCDF17C664BBB7240CF69E;  // 0x0660, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector External_Force;  // 0x0664, size 0xC, named "External Force"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DoorOpenValue;  // 0x0670, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Landed;  // 0x0674, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsOpen;  // 0x0675, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DoorPitchCached;  // 0x0678, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* SFXDoorEvent;  // 0x0680, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName DoorAudioAttachPoint;  // 0x0688, size 0x8

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_DPS_Respawn_Pod_Skeleton_AnimBP(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDoorOpenComplete();
};
