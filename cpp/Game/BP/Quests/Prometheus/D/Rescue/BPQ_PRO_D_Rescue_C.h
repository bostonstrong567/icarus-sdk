// /Game/BP/Quests/Prometheus/D/Rescue/BPQ_PRO_D_Rescue.BPQ_PRO_D_Rescue_C
// Derives from: ABPQ_PRO_D_AshlandsSideQuest_Base_C > AQuest > AIcarusActor > AActor > UObject
// size 0x484, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_D_Rescue_C : public ABPQ_PRO_D_AshlandsSideQuest_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Time;  // 0x0480, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_D_Rescue(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
