// /Game/BP/Quests/Elysium/Story/Story6/BPQ_ELY_Story_6_Stronghold_Night.BPQ_ELY_Story_6_Stronghold_Night_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x481, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_6_Stronghold_Night_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Delta_Seconds;  // 0x0478, size 0x4, named "Delta Seconds"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UpdateTime;  // 0x047C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsNightTime;  // 0x0480, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_Story_6_Stronghold_Night(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OutsideSpawned(APrebuiltStructure* Structure);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
