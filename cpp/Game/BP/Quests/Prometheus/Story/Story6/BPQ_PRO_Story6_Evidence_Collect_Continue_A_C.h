// /Game/BP/Quests/Prometheus/Story/Story6/BPQ_PRO_Story6_Evidence_Collect_Continue_A.BPQ_PRO_Story6_Evidence_Collect_Continue_A_C
// Derives from: ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_Story6_Evidence_Collect_Continue_A_C : public ABPQ_Travel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_Story6_Evidence_Collect_Continue_A(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_SetMusicState();
    UFUNCTION(BlueprintCallable) void Overlap();
};
