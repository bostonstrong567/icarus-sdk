// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_B/BPQ_GH_IM_B_LocationC.BPQ_GH_IM_B_LocationC_C
// Derives from: ABPQ_Common_MapIconOnArrival_WithBeacon_Subquests_C > ABPQ_Common_MapIconOnArrival_Subquests_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_B_LocationC_C : public ABPQ_Common_MapIconOnArrival_WithBeacon_Subquests_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0498, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x04A0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Dressing1LocOffset;  // 0x04B8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Dressing2LocOffset;  // 0x04C4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator Dressing1RotOffset;  // 0x04D0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator Dressing2RotOffset;  // 0x04DC, size 0xC

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_B_LocationC(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlayerEntered(AIcarusPlayerCharacter* PlayerCharacter);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RunSubQuests();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
