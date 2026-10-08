// /Game/BP/Quests/Elysium/SideQuests/Trails/BPQ_ELY_SQ_Trials_Race_Trial_Progress_Marker.BPQ_ELY_SQ_Trials_Race_Trial_Progress_Marker_C
// Derives from: ABPQ_Travel_Small_C > ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x491, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_SQ_Trials_Race_Trial_Progress_Marker_C : public ABPQ_Travel_Small_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bIconVisible;  // 0x0490, size 0x1

    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_SQ_Trials_Race_Trial_Progress_Marker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_bIconVisible();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Reset();
    UFUNCTION(BlueprintCallable) void SetMapIconVisibility(bool Visible);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateMapIcon();
};
