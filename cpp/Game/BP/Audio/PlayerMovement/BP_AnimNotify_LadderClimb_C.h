// /Game/BP/Audio/PlayerMovement/BP_AnimNotify_LadderClimb.BP_AnimNotify_LadderClimb_C
// Derives from: UAnimNotify > UObject
// size 0x50, a blueprint class, blueprint

UCLASS(Const, Config=Engine)
class UBP_AnimNotify_LadderClimb_C : public UAnimNotify
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EAudioPlayerPerspective> PerspectiveToPlayIn;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EAudioPlayerAppendageType> HandOrFoot;  // 0x0039, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool ReversePlay;  // 0x003A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* HandTestFMODEvent;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FootTestFMODEvent;  // 0x0048, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetNotifyName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;  // parameters 0x11
};
