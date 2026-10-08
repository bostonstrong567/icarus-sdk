// /Game/BP/Quests/Olympus/Riverlands/Extermination/BPQ_OLY_Riverlands_Extermination_Wait.BPQ_OLY_Riverlands_Extermination_Wait_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x470, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Riverlands_Extermination_Wait_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Riverlands_Extermination_Wait(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
