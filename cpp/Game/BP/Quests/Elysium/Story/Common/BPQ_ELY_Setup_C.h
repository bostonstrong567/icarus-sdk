// /Game/BP/Quests/Elysium/Story/Common/BPQ_ELY_Setup.BPQ_ELY_Setup_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x470, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Setup_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CustomEvent_0(APrebuiltStructure* Structure);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_Setup(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForceSetup();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
