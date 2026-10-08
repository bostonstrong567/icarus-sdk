// /Game/BP/Quests/Elysium/SideQuests/Courier/BPQ_ELY_SQ_Courier.BPQ_ELY_SQ_Courier_C
// Derives from: ABPQ_ELY_Setup_C > AQuest > AIcarusActor > AActor > UObject
// size 0x483, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_SQ_Courier_C : public ABPQ_ELY_Setup_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x0480, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x0481, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool C;  // 0x0482, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_SQ_Courier(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OutsideSpawned(APrebuiltStructure* Structure);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
