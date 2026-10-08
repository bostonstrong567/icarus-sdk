// /Game/BP/Quests/Prometheus/D/Research/BPQ_PRO_D_Research_JelliesDelay.BPQ_PRO_D_Research_JelliesDelay_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_D_Research_JelliesDelay_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_AnimalSwarm;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTime;  // 0x0480, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x0484, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool OverlappingPlayer;  // 0x049C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CompleteTime;  // 0x04A0, size 0x4

    UFUNCTION() void BndEvt__BPQ_PRO_D_Research_AerosolDelay_Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION() void BndEvt__BPQ_PRO_D_Research_AerosolDelay_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_D_Research_JelliesDelay(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
