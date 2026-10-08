// /Game/BP/Quests/Olympus/Forest/Scan/BPQ_Oly_Forest_Scan_Loot.BPQ_Oly_Forest_Scan_Loot_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Oly_Forest_Scan_Loot_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ManualAISpawnPoint_C* Spawner;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x0478, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x0479, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<ABPQ_Oly_Forest_Scan_Craft_C> Target;  // 0x0480, size 0x28

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Oly_Forest_Scan_Loot(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
