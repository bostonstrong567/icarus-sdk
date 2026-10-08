// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_E/BPQ_GH_RG_E_Collect_Cave2_Landshark.BPQ_GH_RG_E_Collect_Cave2_Landshark_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x471, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_E_Collect_Cave2_Landshark_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSpawned;  // 0x0470, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void EndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_E_Collect_Cave2_Landshark(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLandsharkDead(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
