// /Game/BP/Quests/Olympus/Riverlands/Extermination/BPQ_OLY_Riverlands_Extermination_Locate.BPQ_OLY_Riverlands_Extermination_Locate_C
// Derives from: ABPQ_Search_Area_C > ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Riverlands_Extermination_Locate_C : public ABPQ_Search_Area_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x04D0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Riverlands_Extermination_Locate(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void QuestEnded();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
