// /Game/BP/Quests/GreatHunts/Ape/D2/BPQ_GH_Ape_D2_KillDamageType.BPQ_GH_Ape_D2_KillDamageType_C
// Derives from: ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x8B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_D2_KillDamageType_C : public ABPQ_Collect_Item_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ModifiedItem;  // 0x04A8, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastKillLocation;  // 0x0698, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData GoopItem;  // 0x06A8, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle Timer;  // 0x0898, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_GOAP_Corpse_C*> KilledCreatures;  // 0x08A0, size 0x10

    UFUNCTION(BlueprintCallable) void CheckKillByDamageType(AIcarusPlayerCharacter* Player, AIcarusActor* Causer, AActor* Creature, APawn* KillingBlowFromPawn);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void CreatureEnded(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_Ape_D2_KillDamageType(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FillCarcass();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void RagDollFill();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
