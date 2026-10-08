// /Game/BP/Quests/Olympus/Forest/Range/BPQ_OLY_Forest_Range.BPQ_OLY_Forest_Range_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Forest_Range_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterFlagsRowHandle Character_Flag;  // 0x0470, size 0x18, named "Character Flag"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ConnectedPlayerJoined(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Forest_Range(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RemoveAllActors();
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetupTargetRange();
    UFUNCTION(BlueprintCallable) void SpawnCrates();
    UFUNCTION(BlueprintCallable) void SpawnTargetRange();
};
