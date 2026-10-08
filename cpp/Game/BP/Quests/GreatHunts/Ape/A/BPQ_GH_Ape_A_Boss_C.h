// /Game/BP/Quests/GreatHunts/Ape/A/BPQ_GH_Ape_A_Boss.BPQ_GH_Ape_A_Boss_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x678, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_A_Boss_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ItemSpawned;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector KillLocation;  // 0x0474, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ApeSpawned;  // 0x0480, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData SonicDeviceItem;  // 0x0488, size 0x1F0

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_Ape_A_Boss(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RecordKillLocation(AActor* Actor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
