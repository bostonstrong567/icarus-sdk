// /Game/BP/Audio/PlayerMovement/BP_AnimNotify_PlaySound_Player.BP_AnimNotify_PlaySound_Player_C
// Derives from: UAnimNotify_PlaySoundPlayer > UAnimNotify > UObject
// size 0x69, a blueprint class, blueprint

UCLASS(Const, Config=Engine)
class UBP_AnimNotify_PlaySound_Player_C : public UAnimNotify_PlaySoundPlayer
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool Follow;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool UseListenerRotation;  // 0x0051, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool ApplyPlayerTypeParameter;  // 0x0052, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EAudioPlayerPerspective> PerspectiveToPlayIn;  // 0x0053, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName AttachPoint;  // 0x0054, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool ApplyOcclusion;  // 0x005C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName OcclusionTrace;  // 0x0060, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ApplyWaterImmersion;  // 0x0068, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetNotifyName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;  // parameters 0x11
};
