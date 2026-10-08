// /Game/BP/AI/Bosses/Misc/BP_WyrmQueen_StonePillar.BP_WyrmQueen_StonePillar_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x310, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WyrmQueen_StonePillar_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* IcePillarAudio;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* Capsule;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_IceMammoth_IcePillarWarning;  // 0x02E8, size 0x8
    UPROPERTY() float Timeline_0_ZHeight_3C2188C44623E672A40677938057CD19;  // 0x02F0, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_3C2188C44623E672A40677938057CD19;  // 0x02F4, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool FinishedMoving;  // 0x0300, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InitalZHeight;  // 0x0304, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RandomizeRotation;  // 0x0308, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RandomizeScale;  // 0x0309, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float RiseDelay;  // 0x030C, size 0x4

    UFUNCTION() void BndEvt__BP_Mammoth_IcePillar_Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void ExecuteUbergraph_BP_WyrmQueen_StonePillar(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PillarTimeout();
    UFUNCTION(BlueprintCallable) void RammedByWyrm();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void RandomInit();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ReverseRise();
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__NewTrack_0__EventFunc();
    UFUNCTION() void Timeline_0__StopAudio__EventFunc();
    UFUNCTION() void Timeline_0__UpdateFunc();
};
