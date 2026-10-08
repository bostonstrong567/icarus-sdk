// /Game/BP/Quests/Olympus/Riverlands/LongSurvey/BPQ_Deploy_Count_LongtermSurvey.BPQ_Deploy_Count_LongtermSurvey_C
// Derives from: ABPQ_Deploy_Undoable_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4A4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Deploy_Count_LongtermSurvey_C : public ABPQ_Deploy_Undoable_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0498, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StatUID;  // 0x04A0, size 0x4

    UFUNCTION() void ExecuteUbergraph_BPQ_Deploy_Count_LongtermSurvey(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
