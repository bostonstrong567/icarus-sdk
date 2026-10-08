// /Game/BP/Quests/Prometheus/Story/Story5/BPQ_PRO_Story5_Beacon_Place.BPQ_PRO_Story5_Beacon_Place_C
// Derives from: ABPQ_Deploy_Count_C > AQuest > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_Story5_Beacon_Place_C : public ABPQ_Deploy_Count_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0490, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_Story5_Beacon_Place(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool ExtraDeployableChecks(AIcarusActor* Deployable);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
