// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_D2/BPQ_GH_IM_D2_Beacons.BPQ_GH_IM_D2_Beacons_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A1, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_D2_Beacons_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FText Status;  // 0x0470, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_TriangulationBeacon_C*> Out_Actors;  // 0x0488, size 0x10, named "Out Actors"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* Beacon;  // 0x0498, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TooClose;  // 0x04A0, size 0x1

    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_D2_Beacons(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void OnDeployed(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Update_Beacon(bool bActive);  // parameters 0x1, named "Update Beacon"
};
