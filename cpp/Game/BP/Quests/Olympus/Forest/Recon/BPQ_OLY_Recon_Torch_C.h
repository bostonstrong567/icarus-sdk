// /Game/BP/Quests/Olympus/Forest/Recon/BPQ_OLY_Recon_Torch.BPQ_OLY_Recon_Torch_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x480, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Recon_Torch_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FStatsEnum> Required_Stats;  // 0x0470, size 0x10, named "Required Stats"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Recon_Torch(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
