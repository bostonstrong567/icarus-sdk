// /Game/BP/Quests/Prometheus/D/Rescue/BPQ_PRO_D_Rescue_NPC_Collect.BPQ_PRO_D_Rescue_NPC_Collect_C
// Derives from: ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4B1, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_D_Rescue_NPC_Collect_C : public ABPQ_Collect_Item_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04A0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusMapIconComponent* MapIcon;  // 0x04A8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bShowMapIcon;  // 0x04B0, size 0x1

    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_D_Rescue_NPC_Collect(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void OnRep_bShowMapIcon();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
