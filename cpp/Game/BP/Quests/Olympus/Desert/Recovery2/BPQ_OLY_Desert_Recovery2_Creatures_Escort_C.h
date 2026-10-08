// /Game/BP/Quests/Olympus/Desert/Recovery2/BPQ_OLY_Desert_Recovery2_Creatures_Escort.BPQ_OLY_Desert_Recovery2_Creatures_Escort_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4F8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Desert_Recovery2_Creatures_Escort_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_AnimalSwarm;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AISetup;  // 0x0480, size 0x18
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_Mount_Zebra_Quest_C* Zebra;  // 0x0498, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Distance;  // 0x04A0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) FName Mount_Name;  // 0x04A4, size 0x8, named "Mount Name"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMountsRowHandle Row_Handle;  // 0x04AC, size 0x18, named "Row Handle"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDialogueRowHandle> FoundDialogue;  // 0x04C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDialogueRowHandle> ReturnedDialogue;  // 0x04D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDialogueRowHandle> DeathDialogue;  // 0x04E8, size 0x10

    UFUNCTION() void BndEvt__BPQ_Story1_Escort_Daisy_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Desert_Recovery2_Creatures_Escort(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StopSpawning();
    UFUNCTION(BlueprintCallable) void ZebraDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ZebraEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
};
