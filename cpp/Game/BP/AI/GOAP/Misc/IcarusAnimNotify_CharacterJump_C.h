// /Game/BP/AI/GOAP/Misc/IcarusAnimNotify_CharacterJump.IcarusAnimNotify_CharacterJump_C
// Derives from: UAnimNotify > UObject
// size 0x39, a blueprint class, blueprint

UCLASS(Const, Config=Engine)
class UIcarusAnimNotify_CharacterJump_C : public UAnimNotify
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool JumpStart;  // 0x0038, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetNotifyName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;  // parameters 0x11
};
