// /Game/BP/Quests/Elysium/Story/Story2/BPQ_ELY_Story_2_Blow_Enter.BPQ_ELY_Story_2_Blow_Enter_C
// Derives from: ABPQ_Travel_Small_C > ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x490, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_2_Blow_Enter_C : public ABPQ_Travel_Small_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0488, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_Story_2_Blow_Enter(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
