// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_C/BPQ_GH_IM_C_MammothHunt.BPQ_GH_IM_C_MammothHunt_C
// Derives from: ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x6C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_C_MammothHunt_C : public ABPQ_Collect_Item_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x04A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle Timer;  // 0x04B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ItemData;  // 0x04B8, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> KillLocations;  // 0x06A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_MammothDesert_Corpse_C*> Out_Actors;  // 0x06B8, size 0x10, named "Out Actors"

    UFUNCTION(BlueprintCallable) void CheckKillByDamageType(AIcarusPlayerCharacter* Player, AIcarusActor* Causer, AActor* Creature, APawn* KillingBlowFromPawn);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void CreatureCheckTimer();
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_C_MammothHunt(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
