// /Game/BP/Quests/Elysium/SideQuests/Yeti/BPQ_ELY_SQ_Yeti_Tame_Tame_Calm.BPQ_ELY_SQ_Yeti_Tame_Tame_Calm_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x471, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_SQ_Yeti_Tame_Tame_Calm_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Angry;  // 0x0470, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CustomEvent();
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_SQ_Yeti_Tame_Tame_Calm(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
