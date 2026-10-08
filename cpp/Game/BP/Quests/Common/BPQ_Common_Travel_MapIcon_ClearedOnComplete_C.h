// /Game/BP/Quests/Common/BPQ_Common_Travel_MapIcon_ClearedOnComplete.BPQ_Common_Travel_MapIcon_ClearedOnComplete_C
// Derives from: ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x491, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Common_Travel_MapIcon_ClearedOnComplete_C : public ABPQ_Travel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bMapMarkerVisible;  // 0x0490, size 0x1

    UFUNCTION() void ExecuteUbergraph_BPQ_Common_Travel_MapIcon_ClearedOnComplete(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_bMapMarkerVisible();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
