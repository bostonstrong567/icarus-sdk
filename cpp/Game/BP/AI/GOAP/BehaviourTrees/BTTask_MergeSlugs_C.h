// /Game/BP/AI/GOAP/BehaviourTrees/BTTask_MergeSlugs.BTTask_MergeSlugs_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xF8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_MergeSlugs_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* MergeSlug;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AISetup;  // 0x00B8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEpicCreaturesRowHandle Epic_Creature_Setup;  // 0x00D0, size 0x18, named "Epic Creature Setup"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector CachedLocation;  // 0x00E8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CachedHealthPercent;  // 0x00F4, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTTask_MergeSlugs(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
};
