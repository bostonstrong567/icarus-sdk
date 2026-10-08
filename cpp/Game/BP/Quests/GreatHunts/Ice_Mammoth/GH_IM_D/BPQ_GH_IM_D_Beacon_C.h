// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_D/BPQ_GH_IM_D_Beacon.BPQ_GH_IM_D_Beacon_C
// Derives from: ABPQ_Deploy_Count_C > AQuest > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_D_Beacon_C : public ABPQ_Deploy_Count_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0490, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_D_Beacon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool ExtraDeployableChecks(AIcarusActor* Deployable);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
