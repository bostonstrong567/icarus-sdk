// /Game/ASS/DPS/SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP.SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP_C
// Derives from: UAnimInstance > UObject
// size 0x684, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class USK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP_C : public UAnimInstance
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY() FAnimNode_Root AnimGraphNode_Root;  // 0x02C8, size 0x30
    UPROPERTY() FAnimNode_ControlRig AnimGraphNode_ControlRig;  // 0x02F8, size 0x368
    UPROPERTY() float __CustomProperty_DoorSpeed_7967AE9249945CF5A2907BA25311E72E;  // 0x0660, size 0x4
    UPROPERTY() bool __CustomProperty_DoorOpen__7967AE9249945CF5A2907BA25311E72E;  // 0x0664, size 0x1, named "__CustomProperty_DoorOpen?_7967AE9249945CF5A2907BA25311E72E"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsOpen;  // 0x0665, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Door_Speed;  // 0x0668, size 0x4, named "Door Speed"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DoorAudioAttachPoint;  // 0x066C, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* SFXDoorEvent;  // 0x0678, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DoorPitchCached;  // 0x0680, size 0x4

    UFUNCTION(BlueprintCallable) void AnimGraph(FPoseLink& AnimGraph);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void StartDoorAudioUpdateTimer();
    UFUNCTION(BlueprintCallable) void UpdateDoorAudio();
};
