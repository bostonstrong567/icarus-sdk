// /Game/BP/AI/GOAP/Misc/IcarusAnimNotifyState_AddTemporaryStat.IcarusAnimNotifyState_AddTemporaryStat_C
// Derives from: UAnimNotifyState > UObject
// size 0x80, a blueprint class, blueprint

UCLASS(Const, EditInlineNew, Config=Engine)
class UIcarusAnimNotifyState_AddTemporaryStat_C : public UAnimNotifyState
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBaseStatsEnum, int32> StatsToAdd;  // 0x0030, size 0x50

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetNotifyName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) const;  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;  // parameters 0x11
};
