// /Game/BP/Quests/Olympus/Forest/Scan/BPQ_Oly_Forest_Scan_Loot_Travel.BPQ_Oly_Forest_Scan_Loot_Travel_C
// Derives from: ABPQ_Travel_Large_C > ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x492, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Oly_Forest_Scan_Loot_Travel_C : public ABPQ_Travel_Large_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bShowMapIcon;  // 0x0490, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bShowingMapIcon;  // 0x0491, size 0x1

    UFUNCTION() void ExecuteUbergraph_BPQ_Oly_Forest_Scan_Loot_Travel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_bShowMapIcon();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
