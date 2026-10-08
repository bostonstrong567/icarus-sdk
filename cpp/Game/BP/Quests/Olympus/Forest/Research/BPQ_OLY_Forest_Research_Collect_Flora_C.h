// /Game/BP/Quests/Olympus/Forest/Research/BPQ_OLY_Forest_Research_Collect_Flora.BPQ_OLY_Forest_Research_Collect_Flora_C
// Derives from: ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Forest_Research_Collect_Flora_C : public ABPQ_Collect_Item_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x04A8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Forest_Research_Collect_Flora(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
};
