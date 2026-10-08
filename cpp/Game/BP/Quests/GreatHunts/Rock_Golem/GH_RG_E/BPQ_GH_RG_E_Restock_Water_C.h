// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_E/BPQ_GH_RG_E_Restock_Water.BPQ_GH_RG_E_Restock_Water_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x47C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_E_Restock_Water_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Distance;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Current;  // 0x0474, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Max;  // 0x0478, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_E_Restock_Water(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
