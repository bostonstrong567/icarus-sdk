// /Game/BP/Quests/Olympus/Forest/Recon/BPQ_Oly_Forest_Recon_CraftItems.BPQ_Oly_Forest_Recon_CraftItems_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x47B, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Oly_Forest_Recon_CraftItems_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ManualAISpawnPoint_C* Spawner;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x0478, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x0479, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool C;  // 0x047A, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Oly_Forest_Recon_CraftItems(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
