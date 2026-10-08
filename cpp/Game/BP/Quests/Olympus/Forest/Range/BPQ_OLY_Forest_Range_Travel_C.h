// /Game/BP/Quests/Olympus/Forest/Range/BPQ_OLY_Forest_Range_Travel.BPQ_OLY_Forest_Range_Travel_C
// Derives from: ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Forest_Range_Travel_C : public ABPQ_Travel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Forest_Range_Travel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
