// /Game/BP/AI/Bosses/Misc/BP_Mammoth_IcePillar_Small.BP_Mammoth_IcePillar_Small_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x324, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mammoth_IcePillar_Small_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SnowParticles;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SnowComing;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* IcePillarAudio;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* Capsule;  // 0x02F0, size 0x8
    UPROPERTY() float Timeline_0_ZHeight_672BF15246BCB4CDD915F5857FEB235B;  // 0x02F8, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_672BF15246BCB4CDD915F5857FEB235B;  // 0x02FC, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetLocation;  // 0x0308, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FinishedMoving;  // 0x0314, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InitalZHeight;  // 0x0318, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasD;  // 0x031C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ArmorRegainPercent;  // 0x0320, size 0x4

    UFUNCTION() void BndEvt__BP_Mammoth_IcePillar_Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void ExecuteUbergraph_BP_Mammoth_IcePillar_Small(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void RandomInit();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__UpdateFunc();
};
