// /Game/BP/Quests/Implementations/Bw6_Extermination/BP_BW6_Extermination_Nightfall.BP_BW6_Extermination_Nightfall_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BW6_Extermination_Nightfall_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Delta_Seconds;  // 0x0480, size 0x4, named "Delta Seconds"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UpdateTime;  // 0x0484, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* NightfallFMODEvent;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsNightTime;  // 0x0490, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxPlacementDistance;  // 0x0494, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DeployableDeployed(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_BP_BW6_Extermination_Nightfall(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HandleQuestEnded();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlayNightfallSFX();
    UFUNCTION(BlueprintCallable) void PlayNightfallSFX();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
