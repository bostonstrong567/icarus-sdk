// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_C/BPQ_GH_IM_C_Deliver.BPQ_GH_IM_C_Deliver_C
// Derives from: ABPQ_Common_Deliver_C > AQuest > AIcarusActor > AActor > UObject
// size 0x6D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_C_Deliver_C : public ABPQ_Common_Deliver_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle Timer;  // 0x04C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastKillLocation;  // 0x04C8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_GOAP_Corpse_C*> KilledCreatures;  // 0x04D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ItemData;  // 0x04E8, size 0x1F0

    UFUNCTION(BlueprintCallable) void CreatureCheckTimer();
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_C_Deliver(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
