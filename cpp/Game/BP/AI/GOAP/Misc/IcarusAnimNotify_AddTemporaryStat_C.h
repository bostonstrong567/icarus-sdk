// /Game/BP/AI/GOAP/Misc/IcarusAnimNotify_AddTemporaryStat.IcarusAnimNotify_AddTemporaryStat_C
// Derives from: UAnimNotify > UObject
// size 0x88, a blueprint class, blueprint

UCLASS(Const, Config=Engine)
class UIcarusAnimNotify_AddTemporaryStat_C : public UAnimNotify
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBaseStatsEnum, int32> TemporaryStats;  // 0x0038, size 0x50

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetNotifyName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;  // parameters 0x11
};
