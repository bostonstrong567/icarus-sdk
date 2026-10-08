// /Game/BP/Quests/Common/BPQ_Search_Area.BPQ_Search_Area_C
// Derives from: ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Search_Area_C : public ABPQ_Travel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FQuestQueriesRowHandle Search_Location;  // 0x0490, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Radius;  // 0x04A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMapSearchAreaRowHandle Search_Area;  // 0x04AC, size 0x18, named "Search Area"

    UFUNCTION() void ExecuteUbergraph_BPQ_Search_Area(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
