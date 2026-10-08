// /Game/BP/Quests/Prometheus/E/Research/BPQ_PRO_E_Research_StationDeploy.BPQ_PRO_E_Research_StationDeploy_C
// Derives from: ABPQ_Common_Snap_Deploy_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_E_Research_StationDeploy_C : public ABPQ_Common_Snap_Deploy_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x04C0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_E_Research_StationDeploy(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
};
