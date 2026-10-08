// /Game/BP/Animation/Notifies/BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C
// Derives from: UAnimNotify > UObject
// size 0x50, a blueprint class, blueprint

UCLASS(Const, Config=Engine)
class UBP_AnimNotify_CameraShake_C : public UAnimNotify
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UCameraShakeBase> Shake;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Scale;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Radius;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SourceBone;  // 0x0048, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetNotifyName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;  // parameters 0x11
};
